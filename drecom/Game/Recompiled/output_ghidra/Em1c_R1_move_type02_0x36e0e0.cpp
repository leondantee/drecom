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

// Function: Em1c_R1_move_type02
// Address: 0x36e0e0 - 0x36e154
void Em1c_R1_move_type02_0x36e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_move_type02_0x36e0e0");
#endif

    switch (ctx->pc) {
        case 0x36e0e0u: goto label_36e0e0;
        case 0x36e0e4u: goto label_36e0e4;
        case 0x36e0e8u: goto label_36e0e8;
        case 0x36e0ecu: goto label_36e0ec;
        case 0x36e0f0u: goto label_36e0f0;
        case 0x36e0f4u: goto label_36e0f4;
        case 0x36e0f8u: goto label_36e0f8;
        case 0x36e0fcu: goto label_36e0fc;
        case 0x36e100u: goto label_36e100;
        case 0x36e104u: goto label_36e104;
        case 0x36e108u: goto label_36e108;
        case 0x36e10cu: goto label_36e10c;
        case 0x36e110u: goto label_36e110;
        case 0x36e114u: goto label_36e114;
        case 0x36e118u: goto label_36e118;
        case 0x36e11cu: goto label_36e11c;
        case 0x36e120u: goto label_36e120;
        case 0x36e124u: goto label_36e124;
        case 0x36e128u: goto label_36e128;
        case 0x36e12cu: goto label_36e12c;
        case 0x36e130u: goto label_36e130;
        case 0x36e134u: goto label_36e134;
        case 0x36e138u: goto label_36e138;
        case 0x36e13cu: goto label_36e13c;
        case 0x36e140u: goto label_36e140;
        case 0x36e144u: goto label_36e144;
        case 0x36e148u: goto label_36e148;
        case 0x36e14cu: goto label_36e14c;
        case 0x36e150u: goto label_36e150;
        default: break;
    }

    ctx->pc = 0x36e0e0u;

label_36e0e0:
    // 0x36e0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36e0e4:
    // 0x36e0e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36e0e8:
    // 0x36e0e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36e0ec:
    // 0x36e0ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e0f0:
    // 0x36e0f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e0f4:
    // 0x36e0f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36e0f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36e0f8:
    // 0x36e0f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36e0fc:
    // 0x36e0fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36e100:
    // 0x36e100: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36e100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36e104:
    // 0x36e104: 0x2442b3a8  addiu       $v0, $v0, -0x4C58
    ctx->pc = 0x36e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947752));
label_36e108:
    // 0x36e108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e10c:
    // 0x36e10c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e110:
    // 0x36e110: 0x40f809  jalr        $v0
label_36e114:
    if (ctx->pc == 0x36E114u) {
        ctx->pc = 0x36E118u;
        goto label_36e118;
    }
    ctx->pc = 0x36E110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E118u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E110u, 0x36E118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E118u;
label_36e118:
    // 0x36e118: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e11c:
    // 0x36e11c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e120:
    // 0x36e120: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36e120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36e124:
    // 0x36e124: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36e128:
    // 0x36e128: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36e128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36e12c:
    // 0x36e12c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36e130:
    // 0x36e130: 0x2442b3b0  addiu       $v0, $v0, -0x4C50
    ctx->pc = 0x36e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947760));
label_36e134:
    // 0x36e134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e138:
    // 0x36e138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e13c:
    // 0x36e13c: 0x40f809  jalr        $v0
label_36e140:
    if (ctx->pc == 0x36E140u) {
        ctx->pc = 0x36E144u;
        goto label_36e144;
    }
    ctx->pc = 0x36E13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E13Cu, 0x36E144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E144u;
label_36e144:
    // 0x36e144: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e148:
    // 0x36e148: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36e14c:
    // 0x36e14c: 0x3e00008  jr          $ra
label_36e150:
    if (ctx->pc == 0x36E150u) {
        ctx->pc = 0x36E154u;
        goto label_fallthrough_0x36e14c;
    }
    ctx->pc = 0x36E14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36e14c:
    ctx->pc = 0x36E154u;
}
