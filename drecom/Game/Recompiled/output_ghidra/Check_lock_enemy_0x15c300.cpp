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

// Function: Check_lock_enemy
// Address: 0x15c300 - 0x15c48c
void Check_lock_enemy_0x15c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_lock_enemy_0x15c300");
#endif

    switch (ctx->pc) {
        case 0x15c36cu: goto label_15c36c;
        case 0x15c414u: goto label_15c414;
        case 0x15c438u: goto label_15c438;
        default: break;
    }

    ctx->pc = 0x15c300u;

    // 0x15c300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15c304: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x15c304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x15c308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c30c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c310: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x15c310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x15c314: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c318: 0x8c5013e8  lw          $s0, 0x13E8($v0)
    ctx->pc = 0x15c318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x15c31c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C31Cu;
    {
        const bool branch_taken_0x15c31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c31c) {
            ctx->pc = 0x15C334u;
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C324u;
    // 0x15c324: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15c328: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15c32c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C32Cu;
    {
        const bool branch_taken_0x15c32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c32c) {
            ctx->pc = 0x15C348u;
            goto label_15c348;
        }
    }
    ctx->pc = 0x15C334u;
label_15c334:
    // 0x15c334: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c338: 0xa4401574  sh          $zero, 0x1574($v0)
    ctx->pc = 0x15c338u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15c33c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c33cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c340: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x15C340u;
    {
        const bool branch_taken_0x15c340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c340) {
            ctx->pc = 0x15C474u;
            goto label_15c474;
        }
    }
    ctx->pc = 0x15C348u;
label_15c348:
    // 0x15c348: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x15c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15c34c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c350: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c354: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15c358: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15c35c: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c360: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x15c364: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15C364u;
    SET_GPR_U32(ctx, 31, 0x15C36Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15C364u, 0x15C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C36Cu;
label_15c36c:
    // 0x15c36c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x15c36cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15c370: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C370u;
    {
        const bool branch_taken_0x15c370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c370) {
            ctx->pc = 0x15C38Cu;
            goto label_15c38c;
        }
    }
    ctx->pc = 0x15C378u;
    // 0x15c378: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x15c378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x15c37c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c380: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15c384: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15C384u;
    {
        const bool branch_taken_0x15c384 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15c384) {
            ctx->pc = 0x15C3ECu;
            goto label_15c3ec;
        }
    }
    ctx->pc = 0x15C38Cu;
label_15c38c:
    // 0x15c38c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x15c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c390: 0x84621574  lh          $v0, 0x1574($v1)
    ctx->pc = 0x15c390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5492)));
    // 0x15c394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15c398: 0xa4621574  sh          $v0, 0x1574($v1)
    ctx->pc = 0x15c398u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 2));
    // 0x15c39c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c3a0: 0x84421574  lh          $v0, 0x1574($v0)
    ctx->pc = 0x15c3a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5492)));
    // 0x15c3a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c3a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c3a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15c3ac: 0x284100b5  slti        $at, $v0, 0xB5
    ctx->pc = 0x15c3acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x15c3b0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C3B0u;
    {
        const bool branch_taken_0x15c3b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c3b0) {
            ctx->pc = 0x15C3C4u;
            goto label_15c3c4;
        }
    }
    ctx->pc = 0x15C3B8u;
    // 0x15c3b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c3b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c3bc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15C3BCu;
    {
        const bool branch_taken_0x15c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3bc) {
            ctx->pc = 0x15C474u;
            goto label_15c474;
        }
    }
    ctx->pc = 0x15C3C4u;
label_15c3c4:
    // 0x15c3c4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C3C4u;
    {
        const bool branch_taken_0x15c3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3c4) {
            ctx->pc = 0x15C3F4u;
            goto label_15c3f4;
        }
    }
    ctx->pc = 0x15C3CCu;
    // 0x15c3cc: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x15c3d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15c3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c3d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c3d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15c3d8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C3D8u;
    {
        const bool branch_taken_0x15c3d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15c3d8) {
            ctx->pc = 0x15C3F4u;
            goto label_15c3f4;
        }
    }
    ctx->pc = 0x15C3E0u;
    // 0x15c3e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c3e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c3e4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15C3E4u;
    {
        const bool branch_taken_0x15c3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3e4) {
            ctx->pc = 0x15C474u;
            goto label_15c474;
        }
    }
    ctx->pc = 0x15C3ECu;
label_15c3ec:
    // 0x15c3ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c3f0: 0xa4401574  sh          $zero, 0x1574($v0)
    ctx->pc = 0x15c3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5492), (uint16_t)GPR_U32(ctx, 0));
label_15c3f4:
    // 0x15c3f4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x15c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15c3f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c3fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c400: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15c404: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15c404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15c408: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c40c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15C40Cu;
    SET_GPR_U32(ctx, 31, 0x15C414u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15C40Cu, 0x15C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C414u;
label_15c414:
    // 0x15c414: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x15c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c418: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x15c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c41c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15c41cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c420: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c424: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x15c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c428: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15c428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c42c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15c42cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15c430: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15C430u;
    SET_GPR_U32(ctx, 31, 0x15C438u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15C430u, 0x15C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C438u;
label_15c438:
    // 0x15c438: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15c438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15c43c: 0xc60111e8  lwc1        $f1, 0x11E8($s0)
    ctx->pc = 0x15c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c440: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x15c440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x15c444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c448: 0x0  nop
    ctx->pc = 0x15c448u;
    // NOP
    // 0x15c44c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x15c44cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15c450: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x15c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c454: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c458: 0x0  nop
    ctx->pc = 0x15c458u;
    // NOP
    // 0x15c45c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15C45Cu;
    {
        const bool branch_taken_0x15c45c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c45c) {
            ctx->pc = 0x15C470u;
            goto label_15c470;
        }
    }
    ctx->pc = 0x15C464u;
    // 0x15c464: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c464u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C468u;
    {
        const bool branch_taken_0x15c468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c468) {
            ctx->pc = 0x15C474u;
            goto label_15c474;
        }
    }
    ctx->pc = 0x15C470u;
label_15c470:
    // 0x15c470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c474:
    // 0x15c474: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x15c474u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c47c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c480: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c484: 0x3e00008  jr          $ra
    ctx->pc = 0x15C484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C48Cu;
}
