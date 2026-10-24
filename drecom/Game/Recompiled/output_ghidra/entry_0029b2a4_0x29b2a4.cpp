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

// Function: entry_0029b2a4
// Address: 0x29b2a4 - 0x29b3d8
void entry_0029b2a4_0x29b2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b2a4_0x29b2a4");
#endif

    switch (ctx->pc) {
        case 0x29b2d4u: goto label_29b2d4;
        case 0x29b2f0u: goto label_29b2f0;
        case 0x29b314u: goto label_29b314;
        default: break;
    }

    ctx->pc = 0x29b2a4u;

    // 0x29b2a4: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x29b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x29b2a8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x29b2a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b2ac: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x29b2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b2b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29b2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29b2b4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x29b2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x29b2b8: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x29b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b2bc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x29b2bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29b2c0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x29b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x29b2c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29b2c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b2c8: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29b2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29b2cc: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29B2CCu;
    SET_GPR_U32(ctx, 31, 0x29B2D4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29B2D4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B2D4u) { return; }
    ctx->pc = 0x29B2D4u;
label_29b2d4:
    // 0x29b2d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b2d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b2d8: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x29b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29b2dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29b2dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b2e0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29b2e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29b2e4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29b2e8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29B2E8u;
    SET_GPR_U32(ctx, 31, 0x29B2F0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29B2F0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B2F0u) { return; }
    ctx->pc = 0x29B2F0u;
label_29b2f0:
    // 0x29b2f0: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x29b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b2f4: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29b2f8: 0x27b50130  addiu       $s5, $sp, 0x130
    ctx->pc = 0x29b2f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29b2fc: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x29b2fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x29b300: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x29b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x29b304: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x29b304u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29b308: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x29b308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b30c: 0xc040c60  jal         func_103180
    ctx->pc = 0x29B30Cu;
    SET_GPR_U32(ctx, 31, 0x29B314u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29B314u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29B314u) { return; }
    ctx->pc = 0x29B314u;
label_29b314:
    // 0x29b314: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29b314u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29b318: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29b31c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29b31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b320: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b328: 0x0  nop
    ctx->pc = 0x29b328u;
    // NOP
    // 0x29b32c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x29B32Cu;
    {
        const bool branch_taken_0x29b32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b32c) {
            ctx->pc = 0x29B3D8u;
            return;
        }
    }
    ctx->pc = 0x29B334u;
    // 0x29b334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29b334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29b338: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29b338u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b33c: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x29b33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b344: 0x0  nop
    ctx->pc = 0x29b344u;
    // NOP
    // 0x29b348: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x29B348u;
    {
        const bool branch_taken_0x29b348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b348) {
            ctx->pc = 0x29B3D8u;
            return;
        }
    }
    ctx->pc = 0x29B350u;
    // 0x29b350: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x29b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b354: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x29b354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x29b358: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x29b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29b35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b360: 0x0  nop
    ctx->pc = 0x29b360u;
    // NOP
    // 0x29b364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b368: 0x0  nop
    ctx->pc = 0x29b368u;
    // NOP
    // 0x29b36c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x29B36Cu;
    {
        const bool branch_taken_0x29b36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b36c) {
            ctx->pc = 0x29B3D8u;
            return;
        }
    }
    ctx->pc = 0x29B374u;
    // 0x29b374: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x29b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b378: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x29b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x29b37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b380: 0x0  nop
    ctx->pc = 0x29b380u;
    // NOP
    // 0x29b384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b388: 0x0  nop
    ctx->pc = 0x29b388u;
    // NOP
    // 0x29b38c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x29B38Cu;
    {
        const bool branch_taken_0x29b38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b38c) {
            ctx->pc = 0x29B3D8u;
            return;
        }
    }
    ctx->pc = 0x29B394u;
    // 0x29b394: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x29b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b398: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29b39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b3a0: 0x0  nop
    ctx->pc = 0x29b3a0u;
    // NOP
    // 0x29b3a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29b3a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b3a8: 0x0  nop
    ctx->pc = 0x29b3a8u;
    // NOP
    // 0x29b3ac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29B3ACu;
    {
        const bool branch_taken_0x29b3ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b3ac) {
            ctx->pc = 0x29B3D8u;
            return;
        }
    }
    ctx->pc = 0x29B3B4u;
    // 0x29b3b4: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x29b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b3b8: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29b3bc: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x29b3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29b3c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29b3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b3c4: 0x0  nop
    ctx->pc = 0x29b3c4u;
    // NOP
    // 0x29b3c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29b3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b3cc: 0x0  nop
    ctx->pc = 0x29b3ccu;
    // NOP
    // 0x29b3d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29B3D0u;
    {
        const bool branch_taken_0x29b3d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b3d0) {
            ctx->pc = 0x29B3E0u;
            return;
        }
    }
    ctx->pc = 0x29B3D8u;
}
