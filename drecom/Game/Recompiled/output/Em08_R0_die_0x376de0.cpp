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

// Function: Em08_R0_die
// Address: 0x376de0 - 0x376e28
void Em08_R0_die_0x376de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R0_die_0x376de0");
#endif

    switch (ctx->pc) {
        case 0x376de0u: goto label_376de0;
        case 0x376de4u: goto label_376de4;
        case 0x376de8u: goto label_376de8;
        case 0x376decu: goto label_376dec;
        case 0x376df0u: goto label_376df0;
        case 0x376df4u: goto label_376df4;
        case 0x376df8u: goto label_376df8;
        case 0x376dfcu: goto label_376dfc;
        case 0x376e00u: goto label_376e00;
        case 0x376e04u: goto label_376e04;
        case 0x376e08u: goto label_376e08;
        case 0x376e0cu: goto label_376e0c;
        case 0x376e10u: goto label_376e10;
        case 0x376e14u: goto label_376e14;
        case 0x376e18u: goto label_376e18;
        case 0x376e1cu: goto label_376e1c;
        case 0x376e20u: goto label_376e20;
        case 0x376e24u: goto label_376e24;
        default: break;
    }

    ctx->pc = 0x376de0u;

label_376de0:
    // 0x376de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_376de4:
    // 0x376de4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x376de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_376de8:
    // 0x376de8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x376de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_376dec:
    // 0x376dec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x376decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_376df0:
    // 0x376df0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x376df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_376df4:
    // 0x376df4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x376df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_376df8:
    // 0x376df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x376df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_376dfc:
    // 0x376dfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x376dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_376e00:
    // 0x376e00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x376e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_376e04:
    // 0x376e04: 0x2442b6b8  addiu       $v0, $v0, -0x4948
    ctx->pc = 0x376e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948536));
label_376e08:
    // 0x376e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x376e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_376e0c:
    // 0x376e0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x376e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_376e10:
    // 0x376e10: 0x40f809  jalr        $v0
label_376e14:
    if (ctx->pc == 0x376E14u) {
        ctx->pc = 0x376E18u;
        goto label_376e18;
    }
    ctx->pc = 0x376E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x376E18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376E10u, 0x376E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x376E18u;
label_376e18:
    // 0x376e18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x376e18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_376e1c:
    // 0x376e1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x376e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_376e20:
    // 0x376e20: 0x3e00008  jr          $ra
label_376e24:
    if (ctx->pc == 0x376E24u) {
        ctx->pc = 0x376E28u;
        goto label_fallthrough_0x376e20;
    }
    ctx->pc = 0x376E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x376e20:
    ctx->pc = 0x376E28u;
}
