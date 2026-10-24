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

// Function: entry_0012f2b8
// Address: 0x12f2b8 - 0x12f404
void entry_0012f2b8_0x12f2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f2b8_0x12f2b8");
#endif

    switch (ctx->pc) {
        case 0x12f2d0u: goto label_12f2d0;
        case 0x12f2fcu: goto label_12f2fc;
        case 0x12f314u: goto label_12f314;
        case 0x12f320u: goto label_12f320;
        case 0x12f330u: goto label_12f330;
        case 0x12f33cu: goto label_12f33c;
        case 0x12f360u: goto label_12f360;
        case 0x12f384u: goto label_12f384;
        case 0x12f398u: goto label_12f398;
        case 0x12f3dcu: goto label_12f3dc;
        default: break;
    }

    ctx->pc = 0x12f2b8u;

    // 0x12f2b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2bc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12f2c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12f2c4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12f2c8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12F2C8u;
    SET_GPR_U32(ctx, 31, 0x12F2D0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12F2C8u, 0x12F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2D0u;
label_12f2d0:
    // 0x12f2d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2d4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12f2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12f2d8: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12f2dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f2e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12f2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12f2e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2ec: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f2f0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12f2f4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12F2F4u;
    SET_GPR_U32(ctx, 31, 0x12F2FCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12F2F4u, 0x12F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2FCu;
label_12f2fc:
    // 0x12f2fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f300: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12f300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12f304: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f308: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f308u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f30c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12F30Cu;
    SET_GPR_U32(ctx, 31, 0x12F314u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12F30Cu, 0x12F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F314u;
label_12f314:
    // 0x12f314: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f318: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12F318u;
    SET_GPR_U32(ctx, 31, 0x12F320u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12F318u, 0x12F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F320u;
label_12f320:
    // 0x12f320: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f324: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f324u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f328: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12F328u;
    SET_GPR_U32(ctx, 31, 0x12F330u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12F328u, 0x12F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F330u;
label_12f330:
    // 0x12f330: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f334: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12F334u;
    SET_GPR_U32(ctx, 31, 0x12F33Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12F334u, 0x12F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F33Cu;
label_12f33c:
    // 0x12f33c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f340: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x12f340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x12f344: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f348: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12f348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12f34c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x12F34Cu;
    {
        const bool branch_taken_0x12f34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f34c) {
            ctx->pc = 0x12F404u;
            return;
        }
    }
    ctx->pc = 0x12F354u;
    // 0x12f354: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12f354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f358: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12F358u;
    SET_GPR_U32(ctx, 31, 0x12F360u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12F358u, 0x12F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F360u;
label_12f360:
    // 0x12f360: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f364: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f368: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f36c: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x12f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12f370: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12f370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f374: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12f374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12f378: 0x24478d80  addiu       $a3, $v0, -0x7280
    ctx->pc = 0x12f378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x12f37c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12F37Cu;
    SET_GPR_U32(ctx, 31, 0x12F384u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12F37Cu, 0x12F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F384u;
label_12f384:
    // 0x12f384: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12F384u;
    {
        const bool branch_taken_0x12f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f384) {
            ctx->pc = 0x12F404u;
            return;
        }
    }
    ctx->pc = 0x12F38Cu;
    // 0x12f38c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f390: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12F390u;
    SET_GPR_U32(ctx, 31, 0x12F398u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12F390u, 0x12F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F398u;
label_12f398:
    // 0x12f398: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f39c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12f39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f3a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12f3a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12f3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12f3a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12f3ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12f3b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f3b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f3b8: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12f3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12f3bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f3c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f3c4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f3c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f3c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f3cc: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12f3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12f3d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12f3d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f3d4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12F3D4u;
    SET_GPR_U32(ctx, 31, 0x12F3DCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12F3D4u, 0x12F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3DCu;
label_12f3dc:
    // 0x12f3dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f3e0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f3e4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f3e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f3ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f3f0: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x12f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x12f3f4: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x12f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x12f3f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f3f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f3fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F3FCu;
    SET_GPR_U32(ctx, 31, 0x12F404u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F3FCu, 0x12F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F404u;
}
