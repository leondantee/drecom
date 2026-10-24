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

// Function: Em1c_R1_atk_punch_r
// Address: 0x36eac0 - 0x36ec64
void Em1c_R1_atk_punch_r_0x36eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_atk_punch_r_0x36eac0");
#endif

    switch (ctx->pc) {
        case 0x36eb28u: goto label_36eb28;
        case 0x36eb8cu: goto label_36eb8c;
        case 0x36ebc0u: goto label_36ebc0;
        case 0x36ebf4u: goto label_36ebf4;
        case 0x36ec2cu: goto label_36ec2c;
        case 0x36ec3cu: goto label_36ec3c;
        case 0x36ec48u: goto label_36ec48;
        case 0x36ec54u: goto label_36ec54;
        default: break;
    }

    ctx->pc = 0x36eac0u;

    // 0x36eac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36eac4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36eac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36eac8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x36eacc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36ead0: 0x2463b3d0  addiu       $v1, $v1, -0x4C30
    ctx->pc = 0x36ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947792));
    // 0x36ead4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ead8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x36ead8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AB3D0u));
    // 0x36eadc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x36eae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eae4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36eae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36eae8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36eae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36eaec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eaf0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36EAF0u;
    {
        const bool branch_taken_0x36eaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36eaf0) {
            ctx->pc = 0x36EB40u;
            goto label_36eb40;
        }
    }
    ctx->pc = 0x36EAF8u;
    // 0x36eaf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36EAF8u;
    {
        const bool branch_taken_0x36eaf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eaf8) {
            ctx->pc = 0x36EB08u;
            goto label_36eb08;
        }
    }
    ctx->pc = 0x36EB00u;
    // 0x36eb00: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x36EB00u;
    {
        const bool branch_taken_0x36eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eb00) {
            ctx->pc = 0x36EC54u;
            goto label_36ec54;
        }
    }
    ctx->pc = 0x36EB08u;
label_36eb08:
    // 0x36eb08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb10: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36eb14: 0x24065a0d  addiu       $a2, $zero, 0x5A0D
    ctx->pc = 0x36eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23053));
    // 0x36eb18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36eb18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eb1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36eb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36eb20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36EB20u;
    SET_GPR_U32(ctx, 31, 0x36EB28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36EB20u, 0x36EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB28u;
label_36eb28:
    // 0x36eb28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb2c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36eb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36eb30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36eb34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36eb38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eb3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36eb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36eb40:
    // 0x36eb40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb44: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36eb44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36eb48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36eb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36eb4c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36eb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36eb50: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x36EB50u;
    {
        const bool branch_taken_0x36eb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eb50) {
            ctx->pc = 0x36EBF4u;
            goto label_36ebf4;
        }
    }
    ctx->pc = 0x36EB58u;
    // 0x36eb58: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x36eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x36eb5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36eb5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36eb60: 0x0  nop
    ctx->pc = 0x36eb60u;
    // NOP
    // 0x36eb64: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36eb68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36eb70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eb74: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36eb78: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36eb7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36eb80: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36eb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36eb84: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36EB84u;
    SET_GPR_U32(ctx, 31, 0x36EB8Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36EB84u, 0x36EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB8Cu;
label_36eb8c:
    // 0x36eb8c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x36eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x36eb90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36eb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36eb94: 0x0  nop
    ctx->pc = 0x36eb94u;
    // NOP
    // 0x36eb98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36eb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36eb9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eba0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36eba4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36eba8: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36ebac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36ebacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ebb0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36ebb4: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36ebb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36ebb8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36EBB8u;
    SET_GPR_U32(ctx, 31, 0x36EBC0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36EBB8u, 0x36EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EBC0u;
label_36ebc0:
    // 0x36ebc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36ebc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ebc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ebc8: 0x0  nop
    ctx->pc = 0x36ebc8u;
    // NOP
    // 0x36ebcc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36ebccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ebd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ebd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36ebd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ebdc: 0x24450340  addiu       $a1, $v0, 0x340
    ctx->pc = 0x36ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x36ebe0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x36ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ebe4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36ebe8: 0x24478e48  addiu       $a3, $v0, -0x71B8
    ctx->pc = 0x36ebe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938184));
    // 0x36ebec: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x36EBECu;
    SET_GPR_U32(ctx, 31, 0x36EBF4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36EBECu, 0x36EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EBF4u;
label_36ebf4:
    // 0x36ebf4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x36ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x36ebf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36ebf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ebfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36ec00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36ec00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36ec04: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x36ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x36ec08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x36ec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36ec0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ec10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36ec14: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36ec14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ec18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ec18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ec1c: 0x24460370  addiu       $a2, $v0, 0x370
    ctx->pc = 0x36ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    // 0x36ec20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x36ec20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ec24: 0xc086488  jal         func_219220
    ctx->pc = 0x36EC24u;
    SET_GPR_U32(ctx, 31, 0x36EC2Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x36EC24u, 0x36EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC2Cu;
label_36ec2c:
    // 0x36ec2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ec30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ec30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ec34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36EC34u;
    SET_GPR_U32(ctx, 31, 0x36EC3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36EC34u, 0x36EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC3Cu;
label_36ec3c:
    // 0x36ec3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ec40: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36EC40u;
    SET_GPR_U32(ctx, 31, 0x36EC48u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36EC40u, 0x36EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC48u;
label_36ec48:
    // 0x36ec48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ec4c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36EC4Cu;
    SET_GPR_U32(ctx, 31, 0x36EC54u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36EC4Cu, 0x36EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC54u;
label_36ec54:
    // 0x36ec54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36ec54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ec58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36ec58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36ec5c: 0x3e00008  jr          $ra
    ctx->pc = 0x36EC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EC64u;
}
