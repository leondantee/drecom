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

// Function: entry_003412cc
// Address: 0x3412cc - 0x341524
void entry_003412cc_0x3412cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003412cc_0x3412cc");
#endif

    switch (ctx->pc) {
        case 0x341314u: goto label_341314;
        case 0x34132cu: goto label_34132c;
        case 0x341380u: goto label_341380;
        case 0x34138cu: goto label_34138c;
        case 0x3413b0u: goto label_3413b0;
        case 0x3413f4u: goto label_3413f4;
        case 0x341400u: goto label_341400;
        case 0x341424u: goto label_341424;
        case 0x341468u: goto label_341468;
        case 0x341490u: goto label_341490;
        default: break;
    }

    ctx->pc = 0x3412ccu;

    // 0x3412cc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3412ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3412d0: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x3412d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412d4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3412d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3412d8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3412d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3412dc: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x3412dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412e0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x3412e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3412e4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3412e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3412e8: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x3412e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3412ec: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x3412ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3412f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3412f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3412f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3412f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3412f8: 0x0  nop
    ctx->pc = 0x3412f8u;
    // NOP
    // 0x3412fc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3412fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x341300: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341304: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x341304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x341308: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x341308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34130c: 0xc040c44  jal         func_103110
    ctx->pc = 0x34130Cu;
    SET_GPR_U32(ctx, 31, 0x341314u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x341314u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341314u) { return; }
    ctx->pc = 0x341314u;
label_341314:
    // 0x341314: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341314u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341318: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x341318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34131c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x34131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x341320: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x341320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x341324: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x341324u;
    SET_GPR_U32(ctx, 31, 0x34132Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x34132Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34132Cu) { return; }
    ctx->pc = 0x34132Cu;
label_34132c:
    // 0x34132c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34132cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341330: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x341330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x341334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341338: 0x0  nop
    ctx->pc = 0x341338u;
    // NOP
    // 0x34133c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x34133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x341340: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341344: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x341344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x341348: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x341348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x34134c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x341350: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x341350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x341354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x341354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x341358: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x341358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34135c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34135cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x341360: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x341360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x341364: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341368: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x341368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34136c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x34136cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x341370: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x341370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x341374: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x341374u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341378: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x341378u;
    SET_GPR_U32(ctx, 31, 0x341380u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x341378u, 0x341380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341380u;
label_341380:
    // 0x341380: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341380u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341384: 0xc067648  jal         func_19D920
    ctx->pc = 0x341384u;
    SET_GPR_U32(ctx, 31, 0x34138Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x341384u, 0x34138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34138Cu;
label_34138c:
    // 0x34138c: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x34138cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x341390: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x341390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x341394: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341398: 0x0  nop
    ctx->pc = 0x341398u;
    // NOP
    // 0x34139c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34139cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3413a0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3413a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3413a4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3413a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3413a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3413A8u;
    SET_GPR_U32(ctx, 31, 0x3413B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3413A8u, 0x3413B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413B0u;
label_3413b0:
    // 0x3413b0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3413b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3413b4: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3413b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3413b8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x3413b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3413bc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3413bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3413c0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3413c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3413c4: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x3413c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x3413c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3413c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3413cc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3413ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3413d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3413d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3413d4: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x3413d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x3413d8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3413d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3413dc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3413dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3413e0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3413e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3413e4: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x3413e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3413e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3413e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3413ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3413ECu;
    SET_GPR_U32(ctx, 31, 0x3413F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3413ECu, 0x3413F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3413F4u;
label_3413f4:
    // 0x3413f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3413f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3413f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x3413F8u;
    SET_GPR_U32(ctx, 31, 0x341400u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3413F8u, 0x341400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341400u;
label_341400:
    // 0x341400: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x341400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x341404: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x341404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x341408: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x341408u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34140c: 0x0  nop
    ctx->pc = 0x34140cu;
    // NOP
    // 0x341410: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x341410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x341414: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x341414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341418: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x341418u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34141c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34141Cu;
    SET_GPR_U32(ctx, 31, 0x341424u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34141Cu, 0x341424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341424u;
label_341424:
    // 0x341424: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x341424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x341428: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34142c: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x34142cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x341430: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x341430u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x341434: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x341434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x341438: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x341438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x34143c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x341440: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x341440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x341444: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x341444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x341448: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x341448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34144c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341450: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x341450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x341454: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x341454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x341458: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x341458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34145c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34145cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341460: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x341460u;
    SET_GPR_U32(ctx, 31, 0x341468u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x341460u, 0x341468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341468u;
label_341468:
    // 0x341468: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x341468u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34146c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341470: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341474: 0xa0600078  sb          $zero, 0x78($v1)
    ctx->pc = 0x341474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x341478: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34147c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341480: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x341480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x341484: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x341484u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x341488: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x341488u;
    SET_GPR_U32(ctx, 31, 0x341490u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x341488u, 0x341490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341490u;
label_341490:
    // 0x341490: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341494: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x341494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x341498: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x341498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34149c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34149cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3414a0: 0x4610020  bgez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3414A0u;
    {
        const bool branch_taken_0x3414a0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3414a0) {
            ctx->pc = 0x341524u;
            return;
        }
    }
    ctx->pc = 0x3414A8u;
    // 0x3414a8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3414acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3414b0: 0xa06000b8  sb          $zero, 0xB8($v1)
    ctx->pc = 0x3414b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x3414b4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414b8: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x3414b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
    // 0x3414bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414c0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3414c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3414c4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3414c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3414c8: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x3414c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3414cc: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x3414ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x3414d0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414d4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3414d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3414d8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3414d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3414dc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3414dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3414e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3414e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3414e4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3414e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x3414e8: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3414e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414ec: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x3414ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3414f0: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x3414f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3414f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3414f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3414f8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3414f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3414fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3414fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341500: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x341500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x341504: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x341504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x341508: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x341508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34150c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x341510: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x341510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x341514: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x341514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x341518: 0x2464a280  addiu       $a0, $v1, -0x5D80
    ctx->pc = 0x341518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943360));
    // 0x34151c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341520: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x341520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    ctx->pc = 0x341524u;
}
