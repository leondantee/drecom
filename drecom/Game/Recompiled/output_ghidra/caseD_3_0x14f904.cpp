#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: caseD_3
// Address: 0x14f904 - 0x14f914
void caseD_3_0x14f904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14f904");
#endif

    ctx->pc = 0x14f904u;

    // 0x14f904: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
    // 0x14f908: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f908u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f90c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14F90Cu;
    {
        const bool branch_taken_0x14f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f90c) {
            ctx->pc = 0x14F92Cu;
            return;
        }
    }
    ctx->pc = 0x14F914u;
}
