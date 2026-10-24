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

// Function: caseD_6
// Address: 0x2964d4 - 0x2964e4
void caseD_6_0x2964d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2964d4");
#endif

    ctx->pc = 0x2964d4u;

    // 0x2964d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2964d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2964d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2964d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2964dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2964DCu;
    {
        const bool branch_taken_0x2964dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964dc) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x2964E4u;
}
