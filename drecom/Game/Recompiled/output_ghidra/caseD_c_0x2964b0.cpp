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

// Function: caseD_c
// Address: 0x2964b0 - 0x2964c4
void caseD_c_0x2964b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x2964b0");
#endif

    ctx->pc = 0x2964b0u;

    // 0x2964b0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2964b0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2964b4: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x2964b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x2964b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2964b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2964bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2964BCu;
    {
        const bool branch_taken_0x2964bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964bc) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x2964C4u;
}
