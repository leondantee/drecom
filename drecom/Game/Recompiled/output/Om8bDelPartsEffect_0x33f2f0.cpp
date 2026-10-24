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

// Function: Om8bDelPartsEffect
// Address: 0x33f2f0 - 0x33f3b4
void Om8bDelPartsEffect_0x33f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8bDelPartsEffect_0x33f2f0");
#endif

    switch (ctx->pc) {
        case 0x33f348u: goto label_33f348;
        default: break;
    }

    ctx->pc = 0x33f2f0u;

    // 0x33f2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33f2f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33f2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f2fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x33f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x33f300: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x33f300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x33f304: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x33f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f308: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x33f308u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x33f30c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x33F30Cu;
    {
        const bool branch_taken_0x33f30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f30c) {
            ctx->pc = 0x33F3A0u;
            goto label_33f3a0;
        }
    }
    ctx->pc = 0x33F314u;
    // 0x33f314: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x33f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f318: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x33F318u;
    {
        const bool branch_taken_0x33f318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f318) {
            ctx->pc = 0x33F3A0u;
            goto label_33f3a0;
        }
    }
    ctx->pc = 0x33F320u;
    // 0x33f320: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x33f320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f324: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f328: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x33f328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33f32c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x33f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x33f330: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x33f330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f334: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x33f334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f338: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x33f338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x33f33c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x33f33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33f340: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x33F340u;
    SET_GPR_U32(ctx, 31, 0x33F348u);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x33F340u, 0x33F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F348u;
label_33f348:
    // 0x33f348: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33f348u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33f34c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x33f350: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x33f350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x33f354: 0x12030012  beq         $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33F354u;
    {
        const bool branch_taken_0x33f354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f354) {
            ctx->pc = 0x33F3A0u;
            goto label_33f3a0;
        }
    }
    ctx->pc = 0x33F35Cu;
    // 0x33f35c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x33f360: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33f360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33f364: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33f364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33f368: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x33f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f36c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33f36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33f370: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x33f370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x33f374: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x33f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f378: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33f378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x33f37c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33f37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f380: 0x0  nop
    ctx->pc = 0x33f380u;
    // NOP
    // 0x33f384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33f384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33f388: 0x0  nop
    ctx->pc = 0x33f388u;
    // NOP
    // 0x33f38c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x33F38Cu;
    {
        const bool branch_taken_0x33f38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33f38c) {
            ctx->pc = 0x33F3A0u;
            goto label_33f3a0;
        }
    }
    ctx->pc = 0x33F394u;
    // 0x33f394: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x33f394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x33f398: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x33f398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x33f39c: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x33f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
label_33f3a0:
    // 0x33f3a0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33f3a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f3a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33f3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33f3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x33F3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F3B4u;
}
