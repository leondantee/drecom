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

// Function: Set_effect_em00_jyouki
// Address: 0x357ed0 - 0x357f30
void Set_effect_em00_jyouki_0x357ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em00_jyouki_0x357ed0");
#endif

    switch (ctx->pc) {
        case 0x357f20u: goto label_357f20;
        default: break;
    }

    ctx->pc = 0x357ed0u;

    // 0x357ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357ed4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x357ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x357ed8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x357ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x357edc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x357edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x357ee0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x357ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x357ee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x357ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357ee8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x357ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357eec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x357eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x357ef0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x357ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357ef4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357ef8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357efc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357f00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x357f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357f04: 0x34440417  ori         $a0, $v0, 0x417
    ctx->pc = 0x357f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1047);
    // 0x357f08: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x357f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357f0c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x357f0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357f10: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x357f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357f14: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x357f14u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357f18: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x357F18u;
    SET_GPR_U32(ctx, 31, 0x357F20u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x357F18u, 0x357F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F20u;
label_357f20:
    // 0x357f20: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x357f20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x357f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x357f28: 0x3e00008  jr          $ra
    ctx->pc = 0x357F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F30u;
}
