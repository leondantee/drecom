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

// Function: Pl_sky_lightning_effect
// Address: 0x26e6c0 - 0x26e7b0
void Pl_sky_lightning_effect_0x26e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_sky_lightning_effect_0x26e6c0");
#endif

    switch (ctx->pc) {
        case 0x26e704u: goto label_26e704;
        case 0x26e714u: goto label_26e714;
        case 0x26e720u: goto label_26e720;
        case 0x26e74cu: goto label_26e74c;
        case 0x26e79cu: goto label_26e79c;
        default: break;
    }

    ctx->pc = 0x26e6c0u;

    // 0x26e6c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26e6c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x26e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x26e6c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e6cc: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x26e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x26e6d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x26e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26e6d4: 0x4600031  bltz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x26E6D4u;
    {
        const bool branch_taken_0x26e6d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x26e6d4) {
            ctx->pc = 0x26E79Cu;
            goto label_26e79c;
        }
    }
    ctx->pc = 0x26E6DCu;
    // 0x26e6dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x26e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26e6e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26e6e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x26e6e8: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x26e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x26e6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e6f0: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x26e6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26e6f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e6f8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x26e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26e6fc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26E6FCu;
    SET_GPR_U32(ctx, 31, 0x26E704u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26E704u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E704u) { return; }
    ctx->pc = 0x26E704u;
label_26e704:
    // 0x26e704: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26e704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e708: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e70c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26E70Cu;
    SET_GPR_U32(ctx, 31, 0x26E714u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26E714u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E714u) { return; }
    ctx->pc = 0x26E714u;
label_26e714:
    // 0x26e714: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e718: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26E718u;
    SET_GPR_U32(ctx, 31, 0x26E720u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26E718u, 0x26E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E720u;
label_26e720:
    // 0x26e720: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e724: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x26e724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x26e728: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26e728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26e72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e730: 0x0  nop
    ctx->pc = 0x26e730u;
    // NOP
    // 0x26e734: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26e734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26e738: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26e738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26e73c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e740: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x26e740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e744: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26E744u;
    SET_GPR_U32(ctx, 31, 0x26E74Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26E744u, 0x26E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E74Cu;
label_26e74c:
    // 0x26e74c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x26e74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x26e750: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x26e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e754: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26e754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26e758: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e75c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26e75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e760: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x26e760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x26e764: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26e764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26e768: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x26e768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x26e76c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e770: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26e770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26e774: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26e774u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e778: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26e778u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e77c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26e77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e780: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x26e780u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e784: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26e784u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e788: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x26e788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e78c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x26e78cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e790: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x26e790u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e794: 0xc0bcbe4  jal         func_2F2F90
    ctx->pc = 0x26E794u;
    SET_GPR_U32(ctx, 31, 0x26E79Cu);
    ctx->pc = 0x2F2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F90u, 0x26E794u, 0x26E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E79Cu;
label_26e79c:
    // 0x26e79c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x26e79cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e7a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e7a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x26e7a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x26E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E7B0u;
}
