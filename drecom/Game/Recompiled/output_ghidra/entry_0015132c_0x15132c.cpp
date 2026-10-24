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

// Function: entry_0015132c
// Address: 0x15132c - 0x151514
void entry_0015132c_0x15132c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015132c_0x15132c");
#endif

    switch (ctx->pc) {
        case 0x1513b8u: goto label_1513b8;
        case 0x1513ccu: goto label_1513cc;
        case 0x1513fcu: goto label_1513fc;
        case 0x1514a0u: goto label_1514a0;
        case 0x1514c0u: goto label_1514c0;
        case 0x1514e8u: goto label_1514e8;
        default: break;
    }

    ctx->pc = 0x15132cu;

    // 0x15132c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15132cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151330: 0x0  nop
    ctx->pc = 0x151330u;
    // NOP
    // 0x151334: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x151334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x151338: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x151338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x15133c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15133cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151340: 0x0  nop
    ctx->pc = 0x151340u;
    // NOP
    // 0x151344: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x151344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x151348: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x151348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x15134c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151350: 0x0  nop
    ctx->pc = 0x151350u;
    // NOP
    // 0x151354: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x151354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x151358: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x151358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15135c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15135cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151360: 0x0  nop
    ctx->pc = 0x151360u;
    // NOP
    // 0x151364: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x151364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x151368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15136c: 0x0  nop
    ctx->pc = 0x15136cu;
    // NOP
    // 0x151370: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x151370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x151374: 0x3c06c2c8  lui         $a2, 0xC2C8
    ctx->pc = 0x151374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49864 << 16));
    // 0x151378: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151378u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15137c: 0x0  nop
    ctx->pc = 0x15137cu;
    // NOP
    // 0x151380: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x151380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x151384: 0x3c07c2c8  lui         $a3, 0xC2C8
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49864 << 16));
    // 0x151388: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151388u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15138c: 0x0  nop
    ctx->pc = 0x15138cu;
    // NOP
    // 0x151390: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x151390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x151394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15139c: 0x0  nop
    ctx->pc = 0x15139cu;
    // NOP
    // 0x1513a0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1513a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1513a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1513a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1513a8: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x1513a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x1513ac: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1513acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1513b0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1513B0u;
    SET_GPR_U32(ctx, 31, 0x1513B8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1513B8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1513B8u) { return; }
    ctx->pc = 0x1513B8u;
label_1513b8:
    // 0x1513b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1513b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1513bc: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x1513bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x1513c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1513c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1513c4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1513C4u;
    SET_GPR_U32(ctx, 31, 0x1513CCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1513CCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1513CCu) { return; }
    ctx->pc = 0x1513CCu;
label_1513cc:
    // 0x1513cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1513ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1513d0: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x1513d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1513d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1513d8: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1513d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1513dc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1513dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1513e0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1513e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1513e4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1513e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1513e8: 0x90421576  lbu         $v0, 0x1576($v0)
    ctx->pc = 0x1513e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5494)));
    // 0x1513ec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1513ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1513f0: 0x90e71577  lbu         $a3, 0x1577($a3)
    ctx->pc = 0x1513f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5495)));
    // 0x1513f4: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x1513F4u;
    SET_GPR_U32(ctx, 31, 0x1513FCu);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x1513F4u, 0x1513FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513FCu;
label_1513fc:
    // 0x1513fc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1513fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151400: 0x2263825  or          $a3, $s1, $a2
    ctx->pc = 0x151400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x151404: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x151404u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x151408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15140c: 0x0  nop
    ctx->pc = 0x15140cu;
    // NOP
    // 0x151410: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x151410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x151414: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x151414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x151418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15141c: 0x0  nop
    ctx->pc = 0x15141cu;
    // NOP
    // 0x151420: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x151420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x151424: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x151424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x151428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15142c: 0x0  nop
    ctx->pc = 0x15142cu;
    // NOP
    // 0x151430: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x151430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x151434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15143c: 0x0  nop
    ctx->pc = 0x15143cu;
    // NOP
    // 0x151440: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x151440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x151444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151448: 0x0  nop
    ctx->pc = 0x151448u;
    // NOP
    // 0x15144c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x15144cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x151450: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x151454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151458: 0x0  nop
    ctx->pc = 0x151458u;
    // NOP
    // 0x15145c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x15145cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x151460: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x151460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x151464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151468: 0x0  nop
    ctx->pc = 0x151468u;
    // NOP
    // 0x15146c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x151470: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x151474: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151474u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151478: 0x0  nop
    ctx->pc = 0x151478u;
    // NOP
    // 0x15147c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x151480: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x151480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151484: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x151484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x151488: 0x8e660130  lw          $a2, 0x130($s3)
    ctx->pc = 0x151488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15148c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x15148cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x151490: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x151490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151494: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x151494u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151498: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151498u;
    SET_GPR_U32(ctx, 31, 0x1514A0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1514A0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1514A0u) { return; }
    ctx->pc = 0x1514A0u;
label_1514a0:
    // 0x1514a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1514a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1514a4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1514a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1514a8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1514a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1514ac: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x1514acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x1514b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1514b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1514b4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1514b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1514B8u;
    SET_GPR_U32(ctx, 31, 0x1514C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1514C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1514C0u) { return; }
    ctx->pc = 0x1514C0u;
label_1514c0:
    // 0x1514c0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1514c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1514c4: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1514c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1514c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1514c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1514cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1514d0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1514d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1514d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1514d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1514d8: 0x90461576  lbu         $a2, 0x1576($v0)
    ctx->pc = 0x1514d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5494)));
    // 0x1514dc: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x1514dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x1514e0: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x1514E0u;
    SET_GPR_U32(ctx, 31, 0x1514E8u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x1514E0u, 0x1514E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514E8u;
label_1514e8:
    // 0x1514e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1514e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1514ec: 0x2242825  or          $a1, $s1, $a0
    ctx->pc = 0x1514ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x1514f0: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1514f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1514f4: 0x32260006  andi        $a2, $s1, 0x6
    ctx->pc = 0x1514f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x1514f8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1514F8u;
    {
        const bool branch_taken_0x1514f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1514f8) {
            ctx->pc = 0x151514u;
            return;
        }
    }
    ctx->pc = 0x151500u;
    // 0x151500: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151504: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x151508: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x151508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x15150c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x151510: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x151510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x151514u;
}
