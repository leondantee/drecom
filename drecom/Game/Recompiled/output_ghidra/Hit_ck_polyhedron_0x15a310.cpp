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

// Function: Hit_ck_polyhedron
// Address: 0x15a310 - 0x15a4b0
void Hit_ck_polyhedron_0x15a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hit_ck_polyhedron_0x15a310");
#endif

    switch (ctx->pc) {
        case 0x15a334u: goto label_15a334;
        case 0x15a348u: goto label_15a348;
        case 0x15a380u: goto label_15a380;
        case 0x15a3b8u: goto label_15a3b8;
        case 0x15a3f4u: goto label_15a3f4;
        case 0x15a408u: goto label_15a408;
        case 0x15a440u: goto label_15a440;
        case 0x15a478u: goto label_15a478;
        default: break;
    }

    ctx->pc = 0x15a310u;

    // 0x15a310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a314: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15a314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15a318: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15a318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15a31c: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x15a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x15a320: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a324: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15a324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a328: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x15a328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a32c: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A32Cu;
    SET_GPR_U32(ctx, 31, 0x15A334u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A334u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A334u) { return; }
    ctx->pc = 0x15A334u;
label_15a334:
    // 0x15a334: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a338: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a33c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x15a33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x15a340: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A340u;
    SET_GPR_U32(ctx, 31, 0x15A348u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A348u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A348u) { return; }
    ctx->pc = 0x15A348u;
label_15a348:
    // 0x15a348: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a34c: 0x0  nop
    ctx->pc = 0x15a34cu;
    // NOP
    // 0x15a350: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a354: 0x0  nop
    ctx->pc = 0x15a354u;
    // NOP
    // 0x15a358: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A358u;
    {
        const bool branch_taken_0x15a358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a358) {
            ctx->pc = 0x15A36Cu;
            goto label_15a36c;
        }
    }
    ctx->pc = 0x15A360u;
    // 0x15a360: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a360u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a364: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x15A364u;
    {
        const bool branch_taken_0x15a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a364) {
            ctx->pc = 0x15A4A0u;
            goto label_15a4a0;
        }
    }
    ctx->pc = 0x15A36Cu;
label_15a36c:
    // 0x15a36c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a370: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a374: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15a378: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A378u;
    SET_GPR_U32(ctx, 31, 0x15A380u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A380u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A380u) { return; }
    ctx->pc = 0x15A380u;
label_15a380:
    // 0x15a380: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a384: 0x0  nop
    ctx->pc = 0x15a384u;
    // NOP
    // 0x15a388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a38c: 0x0  nop
    ctx->pc = 0x15a38cu;
    // NOP
    // 0x15a390: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A390u;
    {
        const bool branch_taken_0x15a390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a390) {
            ctx->pc = 0x15A3A4u;
            goto label_15a3a4;
        }
    }
    ctx->pc = 0x15A398u;
    // 0x15a398: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a398u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a39c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x15A39Cu;
    {
        const bool branch_taken_0x15a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a39c) {
            ctx->pc = 0x15A4A0u;
            goto label_15a4a0;
        }
    }
    ctx->pc = 0x15A3A4u;
label_15a3a4:
    // 0x15a3a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a3a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a3ac: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x15a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x15a3b0: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A3B0u;
    SET_GPR_U32(ctx, 31, 0x15A3B8u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A3B8u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A3B8u) { return; }
    ctx->pc = 0x15A3B8u;
label_15a3b8:
    // 0x15a3b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a3bc: 0x0  nop
    ctx->pc = 0x15a3bcu;
    // NOP
    // 0x15a3c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a3c4: 0x0  nop
    ctx->pc = 0x15a3c4u;
    // NOP
    // 0x15a3c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A3C8u;
    {
        const bool branch_taken_0x15a3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a3c8) {
            ctx->pc = 0x15A3DCu;
            goto label_15a3dc;
        }
    }
    ctx->pc = 0x15A3D0u;
    // 0x15a3d0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a3d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a3d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x15A3D4u;
    {
        const bool branch_taken_0x15a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a3d4) {
            ctx->pc = 0x15A4A0u;
            goto label_15a4a0;
        }
    }
    ctx->pc = 0x15A3DCu;
label_15a3dc:
    // 0x15a3dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a3e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a3e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a3e8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x15a3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15a3ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A3ECu;
    SET_GPR_U32(ctx, 31, 0x15A3F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A3F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A3F4u) { return; }
    ctx->pc = 0x15A3F4u;
label_15a3f4:
    // 0x15a3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a3f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a3fc: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x15a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15a400: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A400u;
    SET_GPR_U32(ctx, 31, 0x15A408u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A408u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A408u) { return; }
    ctx->pc = 0x15A408u;
label_15a408:
    // 0x15a408: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a40c: 0x0  nop
    ctx->pc = 0x15a40cu;
    // NOP
    // 0x15a410: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a414: 0x0  nop
    ctx->pc = 0x15a414u;
    // NOP
    // 0x15a418: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A418u;
    {
        const bool branch_taken_0x15a418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a418) {
            ctx->pc = 0x15A42Cu;
            goto label_15a42c;
        }
    }
    ctx->pc = 0x15A420u;
    // 0x15a420: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a420u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a424: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15A424u;
    {
        const bool branch_taken_0x15a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a424) {
            ctx->pc = 0x15A4A0u;
            goto label_15a4a0;
        }
    }
    ctx->pc = 0x15A42Cu;
label_15a42c:
    // 0x15a42c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a430: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a434: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x15a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15a438: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A438u;
    SET_GPR_U32(ctx, 31, 0x15A440u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A440u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A440u) { return; }
    ctx->pc = 0x15A440u;
label_15a440:
    // 0x15a440: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a444: 0x0  nop
    ctx->pc = 0x15a444u;
    // NOP
    // 0x15a448: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a44c: 0x0  nop
    ctx->pc = 0x15a44cu;
    // NOP
    // 0x15a450: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A450u;
    {
        const bool branch_taken_0x15a450 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a450) {
            ctx->pc = 0x15A464u;
            goto label_15a464;
        }
    }
    ctx->pc = 0x15A458u;
    // 0x15a458: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a458u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a45c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15A45Cu;
    {
        const bool branch_taken_0x15a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a45c) {
            ctx->pc = 0x15A4A0u;
            goto label_15a4a0;
        }
    }
    ctx->pc = 0x15A464u;
label_15a464:
    // 0x15a464: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a468: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a46c: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x15a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x15a470: 0xc040c1a  jal         func_103068
    ctx->pc = 0x15A470u;
    SET_GPR_U32(ctx, 31, 0x15A478u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x15A478u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A478u) { return; }
    ctx->pc = 0x15A478u;
label_15a478:
    // 0x15a478: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a47c: 0x0  nop
    ctx->pc = 0x15a47cu;
    // NOP
    // 0x15a480: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a484: 0x0  nop
    ctx->pc = 0x15a484u;
    // NOP
    // 0x15a488: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A488u;
    {
        const bool branch_taken_0x15a488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a488) {
            ctx->pc = 0x15A49Cu;
            goto label_15a49c;
        }
    }
    ctx->pc = 0x15A490u;
    // 0x15a490: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15a490u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15a494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A494u;
    {
        const bool branch_taken_0x15a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a494) {
            ctx->pc = 0x15A4A0u;
            goto label_15a4a0;
        }
    }
    ctx->pc = 0x15A49Cu;
label_15a49c:
    // 0x15a49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a4a0:
    // 0x15a4a0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15a4a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a4a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15a4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A4B0u;
}
