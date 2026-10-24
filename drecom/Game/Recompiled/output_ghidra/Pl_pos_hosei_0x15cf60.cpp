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

// Function: Pl_pos_hosei
// Address: 0x15cf60 - 0x15d1f4
void Pl_pos_hosei_0x15cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_pos_hosei_0x15cf60");
#endif

    switch (ctx->pc) {
        case 0x15cfacu: goto label_15cfac;
        case 0x15cfc4u: goto label_15cfc4;
        case 0x15cfe0u: goto label_15cfe0;
        case 0x15d010u: goto label_15d010;
        case 0x15d044u: goto label_15d044;
        case 0x15d05cu: goto label_15d05c;
        case 0x15d0dcu: goto label_15d0dc;
        case 0x15d108u: goto label_15d108;
        case 0x15d134u: goto label_15d134;
        case 0x15d1e4u: goto label_15d1e4;
        default: break;
    }

    ctx->pc = 0x15cf60u;

    // 0x15cf60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15cf64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15cf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15cf68: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x15cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x15cf6c: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x15cf6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15cf70: 0xa3a50048  sb          $a1, 0x48($sp)
    ctx->pc = 0x15cf70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x15cf74: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x15cf74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15cf78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15cf7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15cf80: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CF80u;
    {
        const bool branch_taken_0x15cf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cf80) {
            ctx->pc = 0x15CF9Cu;
            goto label_15cf9c;
        }
    }
    ctx->pc = 0x15CF88u;
    // 0x15cf88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cf8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15cf90: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x15cf94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15CF94u;
    {
        const bool branch_taken_0x15cf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cf94) {
            ctx->pc = 0x15CFB4u;
            goto label_15cfb4;
        }
    }
    ctx->pc = 0x15CF9Cu;
label_15cf9c:
    // 0x15cf9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cfa0: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15cfa4: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x15CFA4u;
    SET_GPR_U32(ctx, 31, 0x15CFACu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x15CFA4u, 0x15CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFACu;
label_15cfac:
    // 0x15cfac: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15CFACu;
    {
        const bool branch_taken_0x15cfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cfac) {
            ctx->pc = 0x15D08Cu;
            goto label_15d08c;
        }
    }
    ctx->pc = 0x15CFB4u;
label_15cfb4:
    // 0x15cfb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cfb8: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15cfbc: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x15CFBCu;
    SET_GPR_U32(ctx, 31, 0x15CFC4u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x15CFBCu, 0x15CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFC4u;
label_15cfc4:
    // 0x15cfc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cfc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cfcc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15cfd0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x15cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15cfd4: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15cfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15cfd8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15CFD8u;
    SET_GPR_U32(ctx, 31, 0x15CFE0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15CFD8u, 0x15CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFE0u;
label_15cfe0:
    // 0x15cfe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cfe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cfe4: 0x0  nop
    ctx->pc = 0x15cfe4u;
    // NOP
    // 0x15cfe8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15cfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15cfec: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15cfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cff0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cff4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15cff4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15cff8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cffc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15d000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d004: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15d004u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15d008: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15D008u;
    SET_GPR_U32(ctx, 31, 0x15D010u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15D008u, 0x15D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D010u;
label_15d010:
    // 0x15d010: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x15d010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15d014: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d018: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d020: 0x0  nop
    ctx->pc = 0x15d020u;
    // NOP
    // 0x15d024: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d028: 0x0  nop
    ctx->pc = 0x15d028u;
    // NOP
    // 0x15d02c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x15D02Cu;
    {
        const bool branch_taken_0x15d02c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d02c) {
            ctx->pc = 0x15D08Cu;
            goto label_15d08c;
        }
    }
    ctx->pc = 0x15D034u;
    // 0x15d034: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d038: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d03c: 0xc040c24  jal         func_103090
    ctx->pc = 0x15D03Cu;
    SET_GPR_U32(ctx, 31, 0x15D044u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15D044u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D044u) { return; }
    ctx->pc = 0x15D044u;
label_15d044:
    // 0x15d044: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d048: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d04c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d050: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d054: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15D054u;
    SET_GPR_U32(ctx, 31, 0x15D05Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15D05Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D05Cu) { return; }
    ctx->pc = 0x15D05Cu;
label_15d05c:
    // 0x15d05c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d060: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x15d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d064: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d068: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d06c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d070: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x15d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x15d074: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d078: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x15d078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d07c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d080: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d084: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d088: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x15d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_15d08c:
    // 0x15d08c: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x15d08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d090: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d094: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15d094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15d098: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D098u;
    {
        const bool branch_taken_0x15d098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d098) {
            ctx->pc = 0x15D0B4u;
            goto label_15d0b4;
        }
    }
    ctx->pc = 0x15D0A0u;
    // 0x15d0a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d0a4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d0a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15d0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15d0ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D0ACu;
    {
        const bool branch_taken_0x15d0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0ac) {
            ctx->pc = 0x15D0E4u;
            goto label_15d0e4;
        }
    }
    ctx->pc = 0x15D0B4u;
label_15d0b4:
    // 0x15d0b4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d0b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d0bc: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d0c0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d0c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d0c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d0cc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x15d0d0: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15d0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d0d4: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D0D4u;
    SET_GPR_U32(ctx, 31, 0x15D0DCu);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D0D4u, 0x15D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D0DCu;
label_15d0dc:
    // 0x15d0dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D0DCu;
    {
        const bool branch_taken_0x15d0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0dc) {
            ctx->pc = 0x15D108u;
            goto label_15d108;
        }
    }
    ctx->pc = 0x15D0E4u;
label_15d0e4:
    // 0x15d0e4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d0e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d0ec: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d0f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d0f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d0f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d0fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15d0fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15d100: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D100u;
    SET_GPR_U32(ctx, 31, 0x15D108u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D100u, 0x15D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D108u;
label_15d108:
    // 0x15d108: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x15d108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d10c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d110: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d114: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x15D114u;
    {
        const bool branch_taken_0x15d114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d114) {
            ctx->pc = 0x15D1D8u;
            goto label_15d1d8;
        }
    }
    ctx->pc = 0x15D11Cu;
    // 0x15d11c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d120: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d124: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d128: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x15d12c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x15D12Cu;
    SET_GPR_U32(ctx, 31, 0x15D134u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x15D12Cu, 0x15D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D134u;
label_15d134:
    // 0x15d134: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15d138: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15d138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15d13c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15d140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d144: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d148: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15d148u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d14c: 0x0  nop
    ctx->pc = 0x15d14cu;
    // NOP
    // 0x15d150: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x15D150u;
    {
        const bool branch_taken_0x15d150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d150) {
            ctx->pc = 0x15D1D8u;
            goto label_15d1d8;
        }
    }
    ctx->pc = 0x15D158u;
    // 0x15d158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d15c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x15d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d160: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d164: 0xc44013bc  lwc1        $f0, 0x13BC($v0)
    ctx->pc = 0x15d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d168: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15d168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d16c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15d170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d174: 0x0  nop
    ctx->pc = 0x15d174u;
    // NOP
    // 0x15d178: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x15D178u;
    {
        const bool branch_taken_0x15d178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d178) {
            ctx->pc = 0x15D1BCu;
            goto label_15d1bc;
        }
    }
    ctx->pc = 0x15D180u;
    // 0x15d180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d184: 0xc44113bc  lwc1        $f1, 0x13BC($v0)
    ctx->pc = 0x15d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d188: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d18c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x15d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15d190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15d194: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x15d198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d19c: 0xc46113bc  lwc1        $f1, 0x13BC($v1)
    ctx->pc = 0x15d19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d1a0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x15d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x15d1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d1a8: 0x0  nop
    ctx->pc = 0x15d1a8u;
    // NOP
    // 0x15d1ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15d1acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15d1b0: 0xe46013bc  swc1        $f0, 0x13BC($v1)
    ctx->pc = 0x15d1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5052), bits); }
    // 0x15d1b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15D1B4u;
    {
        const bool branch_taken_0x15d1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1b4) {
            ctx->pc = 0x15D1D8u;
            goto label_15d1d8;
        }
    }
    ctx->pc = 0x15D1BCu;
label_15d1bc:
    // 0x15d1bc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d1c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d1c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x15d1c8: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x15d1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d1d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d1d4: 0xe44013bc  swc1        $f0, 0x13BC($v0)
    ctx->pc = 0x15d1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5052), bits); }
label_15d1d8:
    // 0x15d1d8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x15d1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15d1dc: 0xc058b08  jal         func_162C20
    ctx->pc = 0x15D1DCu;
    SET_GPR_U32(ctx, 31, 0x15D1E4u);
    ctx->pc = 0x162C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C20u, 0x15D1DCu, 0x15D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1E4u;
label_15d1e4:
    // 0x15d1e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15d1e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d1e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15d1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15d1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D1F4u;
}
