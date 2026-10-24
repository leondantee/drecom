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

// Function: caseD_5
// Address: 0x2964c4 - 0x2964d4
void caseD_5_0x2964c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2964c4");
#endif

    ctx->pc = 0x2964c4u;

    // 0x2964c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2964c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2964c8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2964c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2964cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2964CCu;
    {
        const bool branch_taken_0x2964cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964cc) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x2964D4u;
}
