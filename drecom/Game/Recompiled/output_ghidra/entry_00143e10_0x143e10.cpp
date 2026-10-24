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

// Function: entry_00143e10
// Address: 0x143e10 - 0x143e3c
void entry_00143e10_0x143e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143e10_0x143e10");
#endif

    switch (ctx->pc) {
        case 0x143e34u: goto label_143e34;
        default: break;
    }

    ctx->pc = 0x143e10u;

    // 0x143e10: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x143e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x143e14: 0x8e021330  lw          $v0, 0x1330($s0)
    ctx->pc = 0x143e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x143e18: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x143E18u;
    {
        const bool branch_taken_0x143e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x143e18) {
            ctx->pc = 0x143E3Cu;
            return;
        }
    }
    ctx->pc = 0x143E20u;
    // 0x143e20: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x143e24: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x143e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x143e28: 0x8e061374  lw          $a2, 0x1374($s0)
    ctx->pc = 0x143e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4980)));
    // 0x143e2c: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x143E2Cu;
    SET_GPR_U32(ctx, 31, 0x143E34u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x143E2Cu, 0x143E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E34u;
label_143e34:
    // 0x143e34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143E34u;
    {
        const bool branch_taken_0x143e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e34) {
            ctx->pc = 0x143E50u;
            return;
        }
    }
    ctx->pc = 0x143E3Cu;
}
