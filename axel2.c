#include "CUnit/Basic.h"
#include "CUnit/Automated.h"

int main() {
   // Initialize the CUnit test registry
   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();
   // Sets the basic run mode, CU_BRM_VERBOSE will show maximum output of run details
   // Other choices are: CU_BRM_SILENT and CU_BRM_NORMAL
   CU_basic_set_mode(CU_BRM_VERBOSE);
   // Run the tests and show the run summary
      CU_set_output_filename( "cunit_testall" );
CU_list_tests_to_file();
CU_automated_run_tests();
   return CU_get_error();
}
