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

// Function: Set_effect_pl00_fire_punch00
// Address: 0x314190 - 0x314204
void Set_effect_pl00_fire_punch00_0x314190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_fire_punch00_0x314190");
#endif

    switch (ctx->pc) {
        case 0x3141d4u: goto label_3141d4;
        default: break;
    }

    ctx->pc = 0x314190u;

    // 0x314190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x314194: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x314194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x314198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31419c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x31419cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x3141a0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x3141a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x3141a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3141a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3141a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3141a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3141ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3141acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3141b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3141b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3141b4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3141b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3141b8: 0x3444000e  ori         $a0, $v0, 0xE
    ctx->pc = 0x3141b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
    // 0x3141bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3141bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3141c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3141c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3141c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3141c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3141c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3141c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3141cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3141CCu;
    SET_GPR_U32(ctx, 31, 0x3141D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3141CCu, 0x3141D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3141D4u;
label_3141d4:
    // 0x3141d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3141d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3141d8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3141d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3141dc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3141dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3141e0: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3141E0u;
    {
        const bool branch_taken_0x3141e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3141e0) {
            ctx->pc = 0x3141F0u;
            goto label_3141f0;
        }
    }
    ctx->pc = 0x3141E8u;
    // 0x3141e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3141e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3141ec: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3141ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_3141f0:
    // 0x3141f0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3141f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3141f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3141f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3141f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3141f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3141fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3141FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3141FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314204u;
}
