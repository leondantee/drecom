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

// Function: Em1d_R1_mv05
// Address: 0x370f60 - 0x371178
void Em1d_R1_mv05_0x370f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_mv05_0x370f60");
#endif

    switch (ctx->pc) {
        case 0x370fdcu: goto label_370fdc;
        case 0x37101cu: goto label_37101c;
        case 0x371044u: goto label_371044;
        case 0x371088u: goto label_371088;
        case 0x3710a4u: goto label_3710a4;
        case 0x3710bcu: goto label_3710bc;
        case 0x3710c8u: goto label_3710c8;
        case 0x3710d4u: goto label_3710d4;
        case 0x3710e0u: goto label_3710e0;
        default: break;
    }

    ctx->pc = 0x370f60u;

    // 0x370f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x370f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x370f64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x370f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x370f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370f70: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x370f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x370f74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x370f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370f78: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x370f78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x370f7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x370f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370f80: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x370f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x370f84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x370f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x370f88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370f8c: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x370F8Cu;
    {
        const bool branch_taken_0x370f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370f8c) {
            ctx->pc = 0x371044u;
            goto label_371044;
        }
    }
    ctx->pc = 0x370F94u;
    // 0x370f94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x370F94u;
    {
        const bool branch_taken_0x370f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x370f94) {
            ctx->pc = 0x370FA4u;
            goto label_370fa4;
        }
    }
    ctx->pc = 0x370F9Cu;
    // 0x370f9c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x370F9Cu;
    {
        const bool branch_taken_0x370f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370f9c) {
            ctx->pc = 0x37112Cu;
            goto label_37112c;
        }
    }
    ctx->pc = 0x370FA4u;
label_370fa4:
    // 0x370fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370fa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x370fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370fac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370facu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370fb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x370fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370fb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x370fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370fb8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x370fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x370fbc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x370fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x370fc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x370fc4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x370fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x370fc8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x370fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x370fcc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x370fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x370fd0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x370fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x370fd4: 0xc05c848  jal         func_172120
    ctx->pc = 0x370FD4u;
    SET_GPR_U32(ctx, 31, 0x370FDCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x370FD4u, 0x370FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370FDCu;
label_370fdc:
    // 0x370fdc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x370fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x370fe0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x370fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370fe8: 0x0  nop
    ctx->pc = 0x370fe8u;
    // NOP
    // 0x370fec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x370fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370ff0: 0x0  nop
    ctx->pc = 0x370ff0u;
    // NOP
    // 0x370ff4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x370FF4u;
    {
        const bool branch_taken_0x370ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x370ff4) {
            ctx->pc = 0x371024u;
            goto label_371024;
        }
    }
    ctx->pc = 0x370FFCu;
    // 0x370ffc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x370ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371000: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371004: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x371004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x371008: 0x24061e0d  addiu       $a2, $zero, 0x1E0D
    ctx->pc = 0x371008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7693));
    // 0x37100c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37100cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371010: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371014: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371014u;
    SET_GPR_U32(ctx, 31, 0x37101Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371014u, 0x37101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37101Cu;
label_37101c:
    // 0x37101c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37101Cu;
    {
        const bool branch_taken_0x37101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37101c) {
            ctx->pc = 0x371044u;
            goto label_371044;
        }
    }
    ctx->pc = 0x371024u;
label_371024:
    // 0x371024: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371028: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37102c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x37102cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x371030: 0x24061e0c  addiu       $a2, $zero, 0x1E0C
    ctx->pc = 0x371030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7692));
    // 0x371034: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x371034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371038: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x37103c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x37103Cu;
    SET_GPR_U32(ctx, 31, 0x371044u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x37103Cu, 0x371044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371044u;
label_371044:
    // 0x371044: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371048: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x371048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x37104c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371050: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x371050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x371054: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x371054u;
    {
        const bool branch_taken_0x371054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371054) {
            ctx->pc = 0x3710ACu;
            goto label_3710ac;
        }
    }
    ctx->pc = 0x37105Cu;
    // 0x37105c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x37105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371064: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x371064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x371068: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x371068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x37106c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37106cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x371070: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x371070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x371074: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x371074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x371078: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x371078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37107c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37107cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x371080: 0xc05c848  jal         func_172120
    ctx->pc = 0x371080u;
    SET_GPR_U32(ctx, 31, 0x371088u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x371080u, 0x371088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371088u;
label_371088:
    // 0x371088: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x37108c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371090: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x371090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371094: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x371094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371098: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x371098u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37109c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37109Cu;
    SET_GPR_U32(ctx, 31, 0x3710A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37109Cu, 0x3710A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710A4u;
label_3710a4:
    // 0x3710a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3710a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710a8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3710a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_3710ac:
    // 0x3710ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3710acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3710b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3710b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3710B4u;
    SET_GPR_U32(ctx, 31, 0x3710BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3710B4u, 0x3710BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710BCu;
label_3710bc:
    // 0x3710bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3710bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710c0: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x3710C0u;
    SET_GPR_U32(ctx, 31, 0x3710C8u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x3710C0u, 0x3710C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710C8u;
label_3710c8:
    // 0x3710c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3710c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710cc: 0xc0dd008  jal         func_374020
    ctx->pc = 0x3710CCu;
    SET_GPR_U32(ctx, 31, 0x3710D4u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x3710CCu, 0x3710D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710D4u;
label_3710d4:
    // 0x3710d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3710d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710d8: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3710D8u;
    SET_GPR_U32(ctx, 31, 0x3710E0u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3710D8u, 0x3710E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710E0u;
label_3710e0:
    // 0x3710e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3710e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3710e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3710e8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3710E8u;
    {
        const bool branch_taken_0x3710e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3710e8) {
            ctx->pc = 0x37112Cu;
            goto label_37112c;
        }
    }
    ctx->pc = 0x3710F0u;
    // 0x3710f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3710f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3710f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3710f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3710f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3710f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3710fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3710fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371100: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371104: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x371104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x371108: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37110c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x37110cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x371110: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371114: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x371114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x371118: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37111c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37111cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371120: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x371120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371128: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x371128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_37112c:
    // 0x37112c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371130: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x371130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x371134: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371138: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x371138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x37113c: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x37113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x371140: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x371140u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x371144: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x371144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x371148: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x371148u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x37114c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371150: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x371150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x371154: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x371154u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x371158: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x371158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x37115c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x37115cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x371160: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x371160u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37116c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x37116cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x371170: 0x3e00008  jr          $ra
    ctx->pc = 0x371170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371178u;
}
