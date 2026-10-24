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

// Function: entry_0012f9d8
// Address: 0x12f9d8 - 0x12fbbc
void entry_0012f9d8_0x12f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f9d8_0x12f9d8");
#endif

    switch (ctx->pc) {
        case 0x12fa04u: goto label_12fa04;
        case 0x12fa20u: goto label_12fa20;
        case 0x12fa38u: goto label_12fa38;
        case 0x12fa6cu: goto label_12fa6c;
        case 0x12fa84u: goto label_12fa84;
        case 0x12fa90u: goto label_12fa90;
        case 0x12faa4u: goto label_12faa4;
        case 0x12fab4u: goto label_12fab4;
        case 0x12fac0u: goto label_12fac0;
        case 0x12fad8u: goto label_12fad8;
        case 0x12fafcu: goto label_12fafc;
        case 0x12fb6cu: goto label_12fb6c;
        case 0x12fb7cu: goto label_12fb7c;
        default: break;
    }

    ctx->pc = 0x12f9d8u;

    // 0x12f9d8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x12f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x12f9dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f9e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12f9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12f9e4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9f0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12f9f4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f9f8: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x12f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x12f9fc: 0xc05c848  jal         func_172120
    ctx->pc = 0x12F9FCu;
    SET_GPR_U32(ctx, 31, 0x12FA04u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12F9FCu, 0x12FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA04u;
label_12fa04:
    // 0x12fa04: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x12fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x12fa08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa0c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa10: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x12fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12fa14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12fa18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12FA18u;
    SET_GPR_U32(ctx, 31, 0x12FA20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12FA18u, 0x12FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA20u;
label_12fa20:
    // 0x12fa20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa24: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12fa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12fa28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12fa2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12fa30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12FA30u;
    SET_GPR_U32(ctx, 31, 0x12FA38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12FA30u, 0x12FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA38u;
label_12fa38:
    // 0x12fa38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa40: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x12fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa44: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x12fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa48: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x12fa48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fa4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa54: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x12fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa58: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x12fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12fa5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fa60: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x12fa60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12fa64: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x12FA64u;
    SET_GPR_U32(ctx, 31, 0x12FA6Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x12FA64u, 0x12FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA6Cu;
label_12fa6c:
    // 0x12fa6c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x12fa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12fa70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12fa78: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12fa7c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12FA7Cu;
    SET_GPR_U32(ctx, 31, 0x12FA84u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12FA84u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12FA84u) { return; }
    ctx->pc = 0x12FA84u;
label_12fa84:
    // 0x12fa84: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa88: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12FA88u;
    SET_GPR_U32(ctx, 31, 0x12FA90u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12FA88u, 0x12FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA90u;
label_12fa90:
    // 0x12fa90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12fa98: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12fa9c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12FA9Cu;
    SET_GPR_U32(ctx, 31, 0x12FAA4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12FAA4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12FAA4u) { return; }
    ctx->pc = 0x12FAA4u;
label_12faa4:
    // 0x12faa4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12faa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12faa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12faac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12FAACu;
    SET_GPR_U32(ctx, 31, 0x12FAB4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12FAACu, 0x12FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAB4u;
label_12fab4:
    // 0x12fab4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fab8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12FAB8u;
    SET_GPR_U32(ctx, 31, 0x12FAC0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12FAB8u, 0x12FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAC0u;
label_12fac0:
    // 0x12fac0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fac4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12fac8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12facc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12fad0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12FAD0u;
    SET_GPR_U32(ctx, 31, 0x12FAD8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12FAD0u, 0x12FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAD8u;
label_12fad8:
    // 0x12fad8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x12fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fadc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x12fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fae0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x12fae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fae4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x12fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fae8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x12fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12faec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12faecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12faf0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x12faf0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12faf4: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x12FAF4u;
    SET_GPR_U32(ctx, 31, 0x12FAFCu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x12FAF4u, 0x12FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAFCu;
label_12fafc:
    // 0x12fafc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x12fafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x12fb00: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x12fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fb04: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x12fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x12fb08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x12fb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x12fb0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12fb0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fb10: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x12fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12fb14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fb18: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12fb18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb1c: 0x0  nop
    ctx->pc = 0x12fb1cu;
    // NOP
    // 0x12fb20: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x12FB20u;
    {
        const bool branch_taken_0x12fb20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fb20) {
            ctx->pc = 0x12FBBCu;
            return;
        }
    }
    ctx->pc = 0x12FB28u;
    // 0x12fb28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb2c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12fb2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12fb30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12fb34: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12fb34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fb38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb3c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12fb3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12fb40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12fb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12fb44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12fb44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12fb48: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x12fb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12fb4c: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12FB4Cu;
    {
        const bool branch_taken_0x12fb4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fb4c) {
            ctx->pc = 0x12FBBCu;
            return;
        }
    }
    ctx->pc = 0x12FB54u;
    // 0x12fb54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12fb5c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12fb60: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x12fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12fb64: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12FB64u;
    SET_GPR_U32(ctx, 31, 0x12FB6Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12FB64u, 0x12FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB6Cu;
label_12fb6c:
    // 0x12fb6c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x12fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12fb70: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x12fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12fb74: 0xc0455e6  jal         func_115798
    ctx->pc = 0x12FB74u;
    SET_GPR_U32(ctx, 31, 0x12FB7Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x12FB74u, 0x12FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB7Cu;
label_12fb7c:
    // 0x12fb7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb80: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x12fb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x12fb84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fb88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12fb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fb90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fb94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb98: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12fb98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fb9c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fba0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12fba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fba4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fba8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12fba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fbac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fbb0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fbb4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x12FBB4u;
    {
        const bool branch_taken_0x12fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fbb4) {
            ctx->pc = 0x12FD84u;
            return;
        }
    }
    ctx->pc = 0x12FBBCu;
}
