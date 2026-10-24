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

// Function: entry_0028dcbc
// Address: 0x28dcbc - 0x28dcfc
void entry_0028dcbc_0x28dcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028dcbc_0x28dcbc");
#endif

    switch (ctx->pc) {
        case 0x28dcd8u: goto label_28dcd8;
        default: break;
    }

    ctx->pc = 0x28dcbcu;

    // 0x28dcbc: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28dcbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dcc0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28dcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28dcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dcc8: 0x14620395  bne         $v1, $v0, . + 4 + (0x395 << 2)
    ctx->pc = 0x28DCC8u;
    {
        const bool branch_taken_0x28dcc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28dcc8) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DCD0u;
    // 0x28dcd0: 0xc0a3b1c  jal         func_28EC70
    ctx->pc = 0x28DCD0u;
    SET_GPR_U32(ctx, 31, 0x28DCD8u);
    ctx->pc = 0x28EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC70u, 0x28DCD0u, 0x28DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCD8u;
label_28dcd8:
    // 0x28dcd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dcdc: 0x14430390  bne         $v0, $v1, . + 4 + (0x390 << 2)
    ctx->pc = 0x28DCDCu;
    {
        const bool branch_taken_0x28dcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28dcdc) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DCE4u;
    // 0x28dce4: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28dce8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x28dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28dcec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28dcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28dcf0: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28dcf4: 0x1000038a  b           . + 4 + (0x38A << 2)
    ctx->pc = 0x28DCF4u;
    {
        const bool branch_taken_0x28dcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dcf4) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DCFCu;
}
