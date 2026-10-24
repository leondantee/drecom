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

// Function: caseD_2
// Address: 0x31a230 - 0x31a430
void caseD_2_0x31a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x31a230");
#endif

    switch (ctx->pc) {
        case 0x31a284u: goto label_31a284;
        case 0x31a294u: goto label_31a294;
        case 0x31a320u: goto label_31a320;
        case 0x31a330u: goto label_31a330;
        case 0x31a388u: goto label_31a388;
        case 0x31a394u: goto label_31a394;
        case 0x31a418u: goto label_31a418;
        case 0x31a424u: goto label_31a424;
        default: break;
    }

    ctx->pc = 0x31a230u;

    // 0x31a230: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a234: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x31a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x31a238: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x31a238u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31a23c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a240: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x31a240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x31a244: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a248: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x31a24c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a250: 0x0  nop
    ctx->pc = 0x31a250u;
    // NOP
    // 0x31a254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a258: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a25c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x31a260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a264: 0x0  nop
    ctx->pc = 0x31a264u;
    // NOP
    // 0x31a268: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a26c: 0x24040425  addiu       $a0, $zero, 0x425
    ctx->pc = 0x31a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1061));
    // 0x31a270: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a270u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a274: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a278: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a278u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a27c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31A27Cu;
    SET_GPR_U32(ctx, 31, 0x31A284u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A27Cu, 0x31A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A284u;
label_31a284:
    // 0x31a284: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31a284u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a288: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x31a288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x31a28c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31A28Cu;
    SET_GPR_U32(ctx, 31, 0x31A294u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A28Cu, 0x31A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A294u;
label_31a294:
    // 0x31a294: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31a294u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a298: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a29c: 0x24a60120  addiu       $a2, $a1, 0x120
    ctx->pc = 0x31a29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x31a2a0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x31a2a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31a2a4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a2a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31a2ac: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a2b0: 0x3c07c348  lui         $a3, 0xC348
    ctx->pc = 0x31a2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49992 << 16));
    // 0x31a2b4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31a2b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a2b8: 0x0  nop
    ctx->pc = 0x31a2b8u;
    // NOP
    // 0x31a2bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a2c0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a2c4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a2c8: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x31a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x31a2cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a2ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a2d0: 0x0  nop
    ctx->pc = 0x31a2d0u;
    // NOP
    // 0x31a2d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a2d8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a2dc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a2e0: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x31a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x31a2e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a2e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a2e8: 0x0  nop
    ctx->pc = 0x31a2e8u;
    // NOP
    // 0x31a2ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a2ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a2f0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a2f4: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x31a2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x31a2f8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31a2f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a2fc: 0x0  nop
    ctx->pc = 0x31a2fcu;
    // NOP
    // 0x31a300: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a304: 0x24020425  addiu       $v0, $zero, 0x425
    ctx->pc = 0x31a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1061));
    // 0x31a308: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a30c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a30cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a310: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a314: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a314u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a318: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31A318u;
    SET_GPR_U32(ctx, 31, 0x31A320u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A318u, 0x31A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A320u;
label_31a320:
    // 0x31a320: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31a320u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a324: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x31a324u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x31a328: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31A328u;
    SET_GPR_U32(ctx, 31, 0x31A330u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A328u, 0x31A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A330u;
label_31a330:
    // 0x31a330: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a330u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a334: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x31a334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a338: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x31a338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x31a33c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31a33cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a340: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a344: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31a344u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31a348: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a34c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x31a350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a354: 0x0  nop
    ctx->pc = 0x31a354u;
    // NOP
    // 0x31a358: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a35c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a360: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31a360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x31a364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a368: 0x0  nop
    ctx->pc = 0x31a368u;
    // NOP
    // 0x31a36c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a370: 0x24040425  addiu       $a0, $zero, 0x425
    ctx->pc = 0x31a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1061));
    // 0x31a374: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a378: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a37c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a37cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a380: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31A380u;
    SET_GPR_U32(ctx, 31, 0x31A388u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A380u, 0x31A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A388u;
label_31a388:
    // 0x31a388: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a388u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a38c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31A38Cu;
    SET_GPR_U32(ctx, 31, 0x31A394u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A38Cu, 0x31A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A394u;
label_31a394:
    // 0x31a394: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a398: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31a398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31a39c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x31a39cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31a3a0: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x31a3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a3a4: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x31a3a8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a3ac: 0x3c04c348  lui         $a0, 0xC348
    ctx->pc = 0x31a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49992 << 16));
    // 0x31a3b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a3b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a3b4: 0x0  nop
    ctx->pc = 0x31a3b4u;
    // NOP
    // 0x31a3b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a3bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a3c0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a3c4: 0x3c064316  lui         $a2, 0x4316
    ctx->pc = 0x31a3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17174 << 16));
    // 0x31a3c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31a3c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a3cc: 0x0  nop
    ctx->pc = 0x31a3ccu;
    // NOP
    // 0x31a3d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a3d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a3d4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a3d8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a3dc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x31a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x31a3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a3e4: 0x0  nop
    ctx->pc = 0x31a3e4u;
    // NOP
    // 0x31a3e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a3ec: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a3f0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x31a3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a3f8: 0x0  nop
    ctx->pc = 0x31a3f8u;
    // NOP
    // 0x31a3fc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a400: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x31a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x31a404: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a404u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a408: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a40c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a40cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a410: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31A410u;
    SET_GPR_U32(ctx, 31, 0x31A418u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A410u, 0x31A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A418u;
label_31a418:
    // 0x31a418: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a41c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31A41Cu;
    SET_GPR_U32(ctx, 31, 0x31A424u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A41Cu, 0x31A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A424u;
label_31a424:
    // 0x31a424: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a428: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x31A428u;
    {
        const bool branch_taken_0x31a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a428) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x31A430u;
}
