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

// Function: entry_0013a354
// Address: 0x13a354 - 0x13a420
void entry_0013a354_0x13a354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a354_0x13a354");
#endif

    switch (ctx->pc) {
        case 0x13a378u: goto label_13a378;
        case 0x13a3bcu: goto label_13a3bc;
        case 0x13a3ccu: goto label_13a3cc;
        case 0x13a3ecu: goto label_13a3ec;
        default: break;
    }

    ctx->pc = 0x13a354u;

    // 0x13a354: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x13a358: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x13a35c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13a35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x13a360: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13a360u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x13a364: 0x240605b2  addiu       $a2, $zero, 0x5B2
    ctx->pc = 0x13a364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1458));
    // 0x13a368: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13a368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a36c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13a36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13a370: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13A370u;
    SET_GPR_U32(ctx, 31, 0x13A378u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13A370u, 0x13A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A378u;
label_13a378:
    // 0x13a378: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x13a378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13a37c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a380: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x13a380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x13a384: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a388: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x13a388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x13a38c: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x13a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
    // 0x13a390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a394: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a398: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x13a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x13a39c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13a3a0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x13a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13a3a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a3a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13a3ac: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x13a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x13a3b0: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x13a3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x13a3b4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x13A3B4u;
    SET_GPR_U32(ctx, 31, 0x13A3BCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x13A3B4u, 0x13A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3BCu;
label_13a3bc:
    // 0x13a3bc: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x13a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a3c0: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x13a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13a3c4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x13A3C4u;
    SET_GPR_U32(ctx, 31, 0x13A3CCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x13A3C4u, 0x13A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3CCu;
label_13a3cc:
    // 0x13a3cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a3d0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x13a3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x13a3d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a3d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a3dc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x13a3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a3e0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x13a3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13a3e4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x13A3E4u;
    SET_GPR_U32(ctx, 31, 0x13A3ECu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x13A3E4u, 0x13A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3ECu;
label_13a3ec:
    // 0x13a3ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x13a3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x13a3f0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x13a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a3f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a3f8: 0x0  nop
    ctx->pc = 0x13a3f8u;
    // NOP
    // 0x13a3fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a400: 0x0  nop
    ctx->pc = 0x13a400u;
    // NOP
    // 0x13a404: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13A404u;
    {
        const bool branch_taken_0x13a404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a404) {
            ctx->pc = 0x13A420u;
            return;
        }
    }
    ctx->pc = 0x13A40Cu;
    // 0x13a40c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13a410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13a410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a414: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x13a414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a418: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a41c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x13a41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x13a420u;
}
