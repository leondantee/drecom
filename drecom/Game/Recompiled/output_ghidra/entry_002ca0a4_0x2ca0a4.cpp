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

// Function: entry_002ca0a4
// Address: 0x2ca0a4 - 0x2ca308
void entry_002ca0a4_0x2ca0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ca0a4_0x2ca0a4");
#endif

    switch (ctx->pc) {
        case 0x2ca0d0u: goto label_2ca0d0;
        case 0x2ca0ecu: goto label_2ca0ec;
        case 0x2ca104u: goto label_2ca104;
        case 0x2ca124u: goto label_2ca124;
        case 0x2ca134u: goto label_2ca134;
        case 0x2ca140u: goto label_2ca140;
        case 0x2ca1e8u: goto label_2ca1e8;
        case 0x2ca2c4u: goto label_2ca2c4;
        default: break;
    }

    ctx->pc = 0x2ca0a4u;

    // 0x2ca0a4: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2ca0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2ca0a8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2ca0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2ca0ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ca0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca0b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0b8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2ca0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2ca0bc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2ca0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca0c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2ca0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2ca0c4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2ca0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2ca0c8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CA0C8u;
    SET_GPR_U32(ctx, 31, 0x2CA0D0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CA0C8u, 0x2CA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0D0u;
label_2ca0d0:
    // 0x2ca0d0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2ca0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ca0d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2ca0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca0dc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ca0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca0e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2ca0e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca0e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CA0E4u;
    SET_GPR_U32(ctx, 31, 0x2CA0ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CA0E4u, 0x2CA0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0ECu;
label_2ca0ec:
    // 0x2ca0ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2ca0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2ca0f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ca0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ca0fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CA0FCu;
    SET_GPR_U32(ctx, 31, 0x2CA104u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CA0FCu, 0x2CA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA104u;
label_2ca104:
    // 0x2ca104: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca108: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca10c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca110: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2ca110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2ca114: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2ca114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2ca118: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2ca118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2ca11c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CA11Cu;
    SET_GPR_U32(ctx, 31, 0x2CA124u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CA11Cu, 0x2CA124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA124u;
label_2ca124:
    // 0x2ca124: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca128: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ca128u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ca12c: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CA12Cu;
    SET_GPR_U32(ctx, 31, 0x2CA134u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CA12Cu, 0x2CA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA134u;
label_2ca134:
    // 0x2ca134: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca138: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CA138u;
    SET_GPR_U32(ctx, 31, 0x2CA140u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CA138u, 0x2CA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA140u;
label_2ca140:
    // 0x2ca140: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca144: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ca144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ca148: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ca148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ca14c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ca14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca150: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2ca150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca154: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca158: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2ca158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2ca15c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca160: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ca160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ca164: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ca164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ca168: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ca168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca16c: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2ca16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca170: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca174: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2ca174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2ca178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca17c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ca17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca180: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2ca180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca184: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca188: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2ca188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca18c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ca18cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ca190: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2ca190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2ca194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca198: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ca198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca19c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2ca19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca1a0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ca1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca1a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ca1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca1a8: 0x0  nop
    ctx->pc = 0x2ca1a8u;
    // NOP
    // 0x2ca1ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ca1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca1b0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2ca1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2ca1b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca1b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2ca1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2ca1bc: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2CA1BCu;
    {
        const bool branch_taken_0x2ca1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca1bc) {
            ctx->pc = 0x2CA3C8u;
            return;
        }
    }
    ctx->pc = 0x2CA1C4u;
    // 0x2ca1c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca1c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca1cc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2ca1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2ca1d0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ca1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ca1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca1d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca1dc: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2ca1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2ca1e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA1E0u;
    SET_GPR_U32(ctx, 31, 0x2CA1E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA1E0u, 0x2CA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1E8u;
label_2ca1e8:
    // 0x2ca1e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca1ec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ca1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ca1f0: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2ca1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2ca1f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2ca1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ca1f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ca1f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ca1fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca200: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca204: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2ca204u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca20c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca210: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca214: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2ca214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2ca218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca21c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca220: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca224: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2ca224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ca228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca22c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca234: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2ca234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2ca238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca23c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca240: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca248: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca24c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2ca24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2ca250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca254: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca258: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2ca258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2ca25c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca25cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca260: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca264: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca26c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca270: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca274: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ca274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ca278: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca27c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca27cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca280: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca284: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca288: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca28c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca28cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca290: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca294: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ca298: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca29c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2ca29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca2a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ca2a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca2a8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2ca2ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca2b8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2ca2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca2bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA2BCu;
    SET_GPR_U32(ctx, 31, 0x2CA2C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA2BCu, 0x2CA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2C4u;
label_2ca2c4:
    // 0x2ca2c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca2c8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2ca2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2d0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CA2D0u;
    {
        const bool branch_taken_0x2ca2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca2d0) {
            ctx->pc = 0x2CA308u;
            return;
        }
    }
    ctx->pc = 0x2CA2D8u;
    // 0x2ca2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca2e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ca2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca2e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2ec: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca2f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2f4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca2f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2fc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca300: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca304: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2ca308u;
}
