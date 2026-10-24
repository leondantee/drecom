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

// Function: Set_effect_pl00_fire_kick00
// Address: 0x314210 - 0x314284
void Set_effect_pl00_fire_kick00_0x314210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_fire_kick00_0x314210");
#endif

    switch (ctx->pc) {
        case 0x314254u: goto label_314254;
        default: break;
    }

    ctx->pc = 0x314210u;

    // 0x314210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x314214: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x314214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x314218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31421c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x31421cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x314220: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x314220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x314224: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x314224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x314228: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x314228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31422c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31422cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314230: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x314230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x314234: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x314234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x314238: 0x3444000f  ori         $a0, $v0, 0xF
    ctx->pc = 0x314238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x31423c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31423cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314240: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x314240u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314244: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x314244u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314248: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x314248u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31424c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x31424Cu;
    SET_GPR_U32(ctx, 31, 0x314254u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31424Cu, 0x314254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314254u;
label_314254:
    // 0x314254: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x314254u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x314258: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x314258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x31425c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x31425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x314260: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314260u;
    {
        const bool branch_taken_0x314260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x314260) {
            ctx->pc = 0x314270u;
            goto label_314270;
        }
    }
    ctx->pc = 0x314268u;
    // 0x314268: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x314268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31426c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x31426cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_314270:
    // 0x314270: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x314270u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314278: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x314278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31427c: 0x3e00008  jr          $ra
    ctx->pc = 0x31427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314284u;
}
