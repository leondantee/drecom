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

// Function: entry_001b3be0
// Address: 0x1b3be0 - 0x1b3d40
void entry_001b3be0_0x1b3be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3be0_0x1b3be0");
#endif

    switch (ctx->pc) {
        case 0x1b3c4cu: goto label_1b3c4c;
        case 0x1b3c60u: goto label_1b3c60;
        case 0x1b3cb4u: goto label_1b3cb4;
        case 0x1b3cf4u: goto label_1b3cf4;
        case 0x1b3d04u: goto label_1b3d04;
        default: break;
    }

    ctx->pc = 0x1b3be0u;

    // 0x1b3be0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b3be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b3be4: 0x12e00122  beqz        $s7, . + 4 + (0x122 << 2)
    ctx->pc = 0x1B3BE4u;
    {
        const bool branch_taken_0x1b3be4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3be4) {
            ctx->pc = 0x1B4070u;
            return;
        }
    }
    ctx->pc = 0x1B3BECu;
    // 0x1b3bec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1b3becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b3bf0: 0x2821006  srlv        $v0, $v0, $s4
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1b3bf4: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x1b3bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x1b3bf8: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x1B3BF8u;
    {
        const bool branch_taken_0x1b3bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bf8) {
            ctx->pc = 0x1B4054u;
            return;
        }
    }
    ctx->pc = 0x1B3C00u;
    // 0x1b3c00: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1b3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1b3c04: 0x401027  not         $v0, $v0
    ctx->pc = 0x1b3c04u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1b3c08: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x1b3c08u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x1b3c0c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b3c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b3c10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3c14: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b3c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1b3c18: 0x1440010e  bnez        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x1B3C18u;
    {
        const bool branch_taken_0x1b3c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c18) {
            ctx->pc = 0x1B4054u;
            return;
        }
    }
    ctx->pc = 0x1B3C20u;
    // 0x1b3c20: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b3c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3c24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3c28: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1b3c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1b3c2c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1b3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1b3c30: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b3c34: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b3c38: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b3c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3c3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b3c40: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1b3c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b3c44: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B3C44u;
    SET_GPR_U32(ctx, 31, 0x1B3C4Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B3C4Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B3C4Cu) { return; }
    ctx->pc = 0x1B3C4Cu;
label_1b3c4c:
    // 0x1b3c4c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3c50: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b3c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b3c54: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1b3c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b3c58: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3C58u;
    SET_GPR_U32(ctx, 31, 0x1B3C60u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3C58u, 0x1B3C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C60u;
label_1b3c60:
    // 0x1b3c60: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3c64: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1b3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3c6c: 0x0  nop
    ctx->pc = 0x1b3c6cu;
    // NOP
    // 0x1b3c70: 0x450000f8  bc1f        . + 4 + (0xF8 << 2)
    ctx->pc = 0x1B3C70u;
    {
        const bool branch_taken_0x1b3c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3c70) {
            ctx->pc = 0x1B4054u;
            return;
        }
    }
    ctx->pc = 0x1B3C78u;
    // 0x1b3c78: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b3c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3c7c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1b3c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b3c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3c84: 0x0  nop
    ctx->pc = 0x1b3c84u;
    // NOP
    // 0x1b3c88: 0x450100f2  bc1t        . + 4 + (0xF2 << 2)
    ctx->pc = 0x1B3C88u;
    {
        const bool branch_taken_0x1b3c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3c88) {
            ctx->pc = 0x1B4054u;
            return;
        }
    }
    ctx->pc = 0x1B3C90u;
    // 0x1b3c90: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1b3c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3c94: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1b3c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c98: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b3c98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3c9c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1b3c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3ca0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1b3ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3ca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3ca8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b3ca8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b3cac: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B3CACu;
    SET_GPR_U32(ctx, 31, 0x1B3CB4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B3CACu, 0x1B3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CB4u;
label_1b3cb4:
    // 0x1b3cb4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1b3cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1b3cb8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3cbc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1b3cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3cc0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1b3cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3cc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b3cc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b3cc8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1b3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3ccc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3cccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3cd0: 0x0  nop
    ctx->pc = 0x1b3cd0u;
    // NOP
    // 0x1b3cd4: 0x450000df  bc1f        . + 4 + (0xDF << 2)
    ctx->pc = 0x1B3CD4u;
    {
        const bool branch_taken_0x1b3cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3cd4) {
            ctx->pc = 0x1B4054u;
            return;
        }
    }
    ctx->pc = 0x1B3CDCu;
    // 0x1b3cdc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1b3cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3ce0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3ce4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1b3ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b3ce8: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1b3ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b3cec: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3CECu;
    SET_GPR_U32(ctx, 31, 0x1B3CF4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3CECu, 0x1B3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CF4u;
label_1b3cf4:
    // 0x1b3cf4: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x1b3cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3cf8: 0xc7ad00b8  lwc1        $f13, 0xB8($sp)
    ctx->pc = 0x1b3cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3cfc: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B3CFCu;
    SET_GPR_U32(ctx, 31, 0x1B3D04u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B3CFCu, 0x1B3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3D04u;
label_1b3d04:
    // 0x1b3d04: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b3d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b3d08: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1b3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1b3d0c: 0x90420026  lbu         $v0, 0x26($v0)
    ctx->pc = 0x1b3d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x1b3d10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b3d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3d14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3d18: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B3D18u;
    {
        const bool branch_taken_0x1b3d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3d18) {
            ctx->pc = 0x1B3D98u;
            return;
        }
    }
    ctx->pc = 0x1B3D20u;
    // 0x1b3d20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3d24: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3D24u;
    {
        const bool branch_taken_0x1b3d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3d24) {
            ctx->pc = 0x1B3D6Cu;
            return;
        }
    }
    ctx->pc = 0x1B3D2Cu;
    // 0x1b3d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3d30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D30u;
    {
        const bool branch_taken_0x1b3d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3d30) {
            ctx->pc = 0x1B3D40u;
            return;
        }
    }
    ctx->pc = 0x1B3D38u;
    // 0x1b3d38: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1B3D38u;
    {
        const bool branch_taken_0x1b3d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d38) {
            ctx->pc = 0x1B3DC0u;
            return;
        }
    }
    ctx->pc = 0x1B3D40u;
}
