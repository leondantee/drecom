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

// Function: caseD_7
// Address: 0x367df8 - 0x367e40
void caseD_7_0x367df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x367df8");
#endif

    switch (ctx->pc) {
        case 0x367e08u: goto label_367e08;
        case 0x367e18u: goto label_367e18;
        case 0x367e24u: goto label_367e24;
        default: break;
    }

    ctx->pc = 0x367df8u;

    // 0x367df8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367dfc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367e00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367E00u;
    SET_GPR_U32(ctx, 31, 0x367E08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367E00u, 0x367E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E08u;
label_367e08:
    // 0x367e08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367e0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367e10: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367E10u;
    SET_GPR_U32(ctx, 31, 0x367E18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367E10u, 0x367E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E18u;
label_367e18:
    // 0x367e18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367e1c: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367E1Cu;
    SET_GPR_U32(ctx, 31, 0x367E24u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367E1Cu, 0x367E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E24u;
label_367e24:
    // 0x367e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367e28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x367e2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x367E2Cu;
    {
        const bool branch_taken_0x367e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367e2c) {
            ctx->pc = 0x367E40u;
            return;
        }
    }
    ctx->pc = 0x367E34u;
    // 0x367e34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x367e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367e38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367e3c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x367e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x367e40u;
}
