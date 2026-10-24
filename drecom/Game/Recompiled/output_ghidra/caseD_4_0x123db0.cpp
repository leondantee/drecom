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

// Function: caseD_4
// Address: 0x123db0 - 0x123dc8
void caseD_4_0x123db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x123db0");
#endif

    ctx->pc = 0x123db0u;

    // 0x123db0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123db4: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x123db4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x123db8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x123db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x123dbc: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x123dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x123dc0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x123DC0u;
    {
        const bool branch_taken_0x123dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123dc0) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123DC8u;
}
