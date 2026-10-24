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

// Function: entry_002c99c8
// Address: 0x2c99c8 - 0x2c9be8
void entry_002c99c8_0x2c99c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c99c8_0x2c99c8");
#endif

    switch (ctx->pc) {
        case 0x2c99f4u: goto label_2c99f4;
        case 0x2c9a10u: goto label_2c9a10;
        case 0x2c9a28u: goto label_2c9a28;
        case 0x2c9a48u: goto label_2c9a48;
        case 0x2c9a58u: goto label_2c9a58;
        case 0x2c9a64u: goto label_2c9a64;
        case 0x2c9aecu: goto label_2c9aec;
        case 0x2c9ba4u: goto label_2c9ba4;
        default: break;
    }

    ctx->pc = 0x2c99c8u;

    // 0x2c99c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c99cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c99d0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c99d4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c99d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c99d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c99d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c99dc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c99e0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c99e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c99e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c99e8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c99ec: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C99ECu;
    SET_GPR_U32(ctx, 31, 0x2C99F4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C99ECu, 0x2C99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99F4u;
label_2c99f4:
    // 0x2c99f4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c99f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c99f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c99fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c99fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9a00: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2c9a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c9a04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9a08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C9A08u;
    SET_GPR_U32(ctx, 31, 0x2C9A10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C9A08u, 0x2C9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A10u;
label_2c9a10:
    // 0x2c9a10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a14: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c9a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c9a18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c9a20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C9A20u;
    SET_GPR_U32(ctx, 31, 0x2C9A28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C9A20u, 0x2C9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A28u;
label_2c9a28:
    // 0x2c9a28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a34: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c9a38: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2c9a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2c9a3c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2c9a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2c9a40: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2C9A40u;
    SET_GPR_U32(ctx, 31, 0x2C9A48u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2C9A40u, 0x2C9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A48u;
label_2c9a48:
    // 0x2c9a48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c9a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c9a50: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C9A50u;
    SET_GPR_U32(ctx, 31, 0x2C9A58u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C9A50u, 0x2C9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A58u;
label_2c9a58:
    // 0x2c9a58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9A64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C9A5Cu, 0x2C9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A64u;
label_2c9a64:
    // 0x2c9a64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a68: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2c9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2c9a6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c9a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c9a70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c9a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9a74: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2c9a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9a7c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2c9a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2c9a80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a84: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2c9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2c9a88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c9a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c9a8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c9a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9a90: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2c9a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9a98: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2c9a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2c9a9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9aa0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2c9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2c9aa4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c9aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c9aa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c9aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9aac: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2c9aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9ab0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9ab4: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2c9ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2c9ab8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9abc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2c9abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2c9ac0: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2C9AC0u;
    {
        const bool branch_taken_0x2c9ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ac0) {
            ctx->pc = 0x2C9CA8u;
            return;
        }
    }
    ctx->pc = 0x2C9AC8u;
    // 0x2c9ac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9acc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9ad0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c9ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c9ad4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c9ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9adc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9ae0: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c9ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c9ae4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9AE4u;
    SET_GPR_U32(ctx, 31, 0x2C9AECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9AE4u, 0x2C9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AECu;
label_2c9aec:
    // 0x2c9aec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9af0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2c9af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c9af4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2c9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2c9af8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c9af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9afc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9afcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c9b00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b08: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2c9b08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9b0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9b10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b18: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c9b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c9b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9b20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b28: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c9b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c9b2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9b30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b38: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c9b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c9b3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9b40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b44: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c9b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c9b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9b4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b50: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c9b50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9b54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c9b58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b5c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c9b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9b60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b64: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c9b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9b68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b6c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c9b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9b70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c9b78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b7c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b80: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c9b84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9b88: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c9b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9b90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b98: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c9b98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9b9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C9BA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9B9Cu, 0x2C9BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BA4u;
label_2c9ba4:
    // 0x2c9ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9ba8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c9ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c9bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9bb0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9BB0u;
    {
        const bool branch_taken_0x2c9bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9bb0) {
            ctx->pc = 0x2C9BE8u;
            return;
        }
    }
    ctx->pc = 0x2C9BB8u;
    // 0x2c9bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9bbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9bc0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c9bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9bc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9bcc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c9bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9bd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9bd4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c9bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9bd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9bdc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c9bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9be0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9be4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c9be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c9be8u;
}
