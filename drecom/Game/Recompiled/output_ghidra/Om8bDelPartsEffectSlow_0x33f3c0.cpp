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

// Function: Om8bDelPartsEffectSlow
// Address: 0x33f3c0 - 0x33f468
void Om8bDelPartsEffectSlow_0x33f3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8bDelPartsEffectSlow_0x33f3c0");
#endif

    switch (ctx->pc) {
        case 0x33f3fcu: goto label_33f3fc;
        default: break;
    }

    ctx->pc = 0x33f3c0u;

    // 0x33f3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33f3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33f3c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33f3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33f3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f3cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x33f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x33f3d0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x33f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x33f3d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x33f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f3d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f3dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x33f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33f3e0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x33f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x33f3e4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x33f3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f3e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x33f3e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f3ec: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x33f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x33f3f0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x33f3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33f3f4: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x33F3F4u;
    SET_GPR_U32(ctx, 31, 0x33F3FCu);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x33F3F4u, 0x33F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F3FCu;
label_33f3fc:
    // 0x33f3fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33f3fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33f400: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33f400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x33f404: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x33f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x33f408: 0x12030012  beq         $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33F408u;
    {
        const bool branch_taken_0x33f408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f408) {
            ctx->pc = 0x33F454u;
            goto label_33f454;
        }
    }
    ctx->pc = 0x33F410u;
    // 0x33f410: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x33f410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x33f414: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x33f414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x33f418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33f418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33f41c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x33f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f420: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33f420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33f424: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x33f424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x33f428: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x33f428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f42c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x33f430: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33f430u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f434: 0x0  nop
    ctx->pc = 0x33f434u;
    // NOP
    // 0x33f438: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33f438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33f43c: 0x0  nop
    ctx->pc = 0x33f43cu;
    // NOP
    // 0x33f440: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x33F440u;
    {
        const bool branch_taken_0x33f440 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33f440) {
            ctx->pc = 0x33F454u;
            goto label_33f454;
        }
    }
    ctx->pc = 0x33F448u;
    // 0x33f448: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x33f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x33f44c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x33f44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x33f450: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x33f450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
label_33f454:
    // 0x33f454: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33f454u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f45c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33f45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33f460: 0x3e00008  jr          $ra
    ctx->pc = 0x33F460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F468u;
}
