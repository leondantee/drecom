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

// Function: Em0a_R1_run
// Address: 0x364a90 - 0x364ca0
void Em0a_R1_run_0x364a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_run_0x364a90");
#endif

    switch (ctx->pc) {
        case 0x364af0u: goto label_364af0;
        case 0x364c1cu: goto label_364c1c;
        case 0x364c38u: goto label_364c38;
        case 0x364c64u: goto label_364c64;
        case 0x364c70u: goto label_364c70;
        case 0x364c80u: goto label_364c80;
        case 0x364c8cu: goto label_364c8c;
        default: break;
    }

    ctx->pc = 0x364a90u;

    // 0x364a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x364a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x364a94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x364a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x364a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x364a9c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x364a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x364aa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364aa4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x364aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x364aa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364aac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x364aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x364ab0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x364ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x364ab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364ab8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x364AB8u;
    {
        const bool branch_taken_0x364ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364ab8) {
            ctx->pc = 0x364B18u;
            goto label_364b18;
        }
    }
    ctx->pc = 0x364AC0u;
    // 0x364ac0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x364AC0u;
    {
        const bool branch_taken_0x364ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364ac0) {
            ctx->pc = 0x364AD0u;
            goto label_364ad0;
        }
    }
    ctx->pc = 0x364AC8u;
    // 0x364ac8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x364AC8u;
    {
        const bool branch_taken_0x364ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364ac8) {
            ctx->pc = 0x364C8Cu;
            goto label_364c8c;
        }
    }
    ctx->pc = 0x364AD0u;
label_364ad0:
    // 0x364ad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364ad8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x364ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x364adc: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x364adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x364ae0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x364ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364ae4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x364ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364ae8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x364AE8u;
    SET_GPR_U32(ctx, 31, 0x364AF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x364AE8u, 0x364AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AF0u;
label_364af0:
    // 0x364af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364af4: 0x0  nop
    ctx->pc = 0x364af4u;
    // NOP
    // 0x364af8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x364afc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364b00: 0x0  nop
    ctx->pc = 0x364b00u;
    // NOP
    // 0x364b04: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x364b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x364b08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364b0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x364b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x364b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x364b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x364b14: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x364b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_364b18:
    // 0x364b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364b1c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364b20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364b24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x364b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x364b28: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x364B28u;
    {
        const bool branch_taken_0x364b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b28) {
            ctx->pc = 0x364C48u;
            goto label_364c48;
        }
    }
    ctx->pc = 0x364B30u;
    // 0x364b30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364b34: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364b38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364b3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x364b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x364b40: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x364B40u;
    {
        const bool branch_taken_0x364b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364b40) {
            ctx->pc = 0x364B9Cu;
            goto label_364b9c;
        }
    }
    ctx->pc = 0x364B48u;
    // 0x364b48: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364b4c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x364b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x364b50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364b58: 0x0  nop
    ctx->pc = 0x364b58u;
    // NOP
    // 0x364b5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x364b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x364b60: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x364b64: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364b68: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x364b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x364b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364b74: 0x0  nop
    ctx->pc = 0x364b74u;
    // NOP
    // 0x364b78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x364b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364b7c: 0x0  nop
    ctx->pc = 0x364b7cu;
    // NOP
    // 0x364b80: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x364B80u;
    {
        const bool branch_taken_0x364b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x364b80) {
            ctx->pc = 0x364B9Cu;
            goto label_364b9c;
        }
    }
    ctx->pc = 0x364B88u;
    // 0x364b88: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x364b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x364b8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364b94: 0x0  nop
    ctx->pc = 0x364b94u;
    // NOP
    // 0x364b98: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_364b9c:
    // 0x364b9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364ba0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364ba8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x364ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x364bac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x364BACu;
    {
        const bool branch_taken_0x364bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364bac) {
            ctx->pc = 0x364BF8u;
            goto label_364bf8;
        }
    }
    ctx->pc = 0x364BB4u;
    // 0x364bb4: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364bb8: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x364bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x364bbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364bc4: 0x0  nop
    ctx->pc = 0x364bc4u;
    // NOP
    // 0x364bc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x364bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x364bcc: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x364bd0: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364bd8: 0x0  nop
    ctx->pc = 0x364bd8u;
    // NOP
    // 0x364bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364be0: 0x0  nop
    ctx->pc = 0x364be0u;
    // NOP
    // 0x364be4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x364BE4u;
    {
        const bool branch_taken_0x364be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364be4) {
            ctx->pc = 0x364BF8u;
            goto label_364bf8;
        }
    }
    ctx->pc = 0x364BECu;
    // 0x364bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364bf0: 0x0  nop
    ctx->pc = 0x364bf0u;
    // NOP
    // 0x364bf4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_364bf8:
    // 0x364bf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364bfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c04: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x364c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x364c08: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x364c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364c0c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x364c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x364c10: 0xc60d0064  lwc1        $f13, 0x64($s0)
    ctx->pc = 0x364c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364c14: 0xc05c848  jal         func_172120
    ctx->pc = 0x364C14u;
    SET_GPR_U32(ctx, 31, 0x364C1Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x364C14u, 0x364C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C1Cu;
label_364c1c:
    // 0x364c1c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x364c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x364c20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c24: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x364c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364c28: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x364c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364c2c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x364c2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x364c30: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x364C30u;
    SET_GPR_U32(ctx, 31, 0x364C38u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x364C30u, 0x364C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C38u;
label_364c38:
    // 0x364c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c3c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x364c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x364c40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x364C40u;
    {
        const bool branch_taken_0x364c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364c40) {
            ctx->pc = 0x364C54u;
            goto label_364c54;
        }
    }
    ctx->pc = 0x364C48u;
label_364c48:
    // 0x364c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364c4c: 0x0  nop
    ctx->pc = 0x364c4cu;
    // NOP
    // 0x364c50: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_364c54:
    // 0x364c54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364c58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364c5c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x364C5Cu;
    SET_GPR_U32(ctx, 31, 0x364C64u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x364C5Cu, 0x364C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C64u;
label_364c64:
    // 0x364c64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c68: 0xc05cd10  jal         func_173440
    ctx->pc = 0x364C68u;
    SET_GPR_U32(ctx, 31, 0x364C70u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x364C68u, 0x364C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C70u;
label_364c70:
    // 0x364c70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364c74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364c78: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x364C78u;
    SET_GPR_U32(ctx, 31, 0x364C80u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x364C78u, 0x364C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C80u;
label_364c80:
    // 0x364c80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c84: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x364C84u;
    SET_GPR_U32(ctx, 31, 0x364C8Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x364C84u, 0x364C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C8Cu;
label_364c8c:
    // 0x364c8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x364c8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364c94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x364c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x364c98: 0x3e00008  jr          $ra
    ctx->pc = 0x364C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364CA0u;
}
