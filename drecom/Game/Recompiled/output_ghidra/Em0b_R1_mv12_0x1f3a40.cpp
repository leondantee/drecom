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

// Function: Em0b_R1_mv12
// Address: 0x1f3a40 - 0x1f3e54
void Em0b_R1_mv12_0x1f3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv12_0x1f3a40");
#endif

    switch (ctx->pc) {
        case 0x1f3b48u: goto label_1f3b48;
        case 0x1f3bc8u: goto label_1f3bc8;
        case 0x1f3bf0u: goto label_1f3bf0;
        case 0x1f3c30u: goto label_1f3c30;
        case 0x1f3c58u: goto label_1f3c58;
        case 0x1f3c7cu: goto label_1f3c7c;
        case 0x1f3cd4u: goto label_1f3cd4;
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3d3cu: goto label_1f3d3c;
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d60u: goto label_1f3d60;
        case 0x1f3db0u: goto label_1f3db0;
        case 0x1f3e18u: goto label_1f3e18;
        default: break;
    }

    ctx->pc = 0x1f3a40u;

    // 0x1f3a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f3a44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1f3a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f3a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f3a4c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1f3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1f3a50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3a54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3a58: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1f3a58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1f3a5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3a60: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f3a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f3a64: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f3a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f3a68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3a6c: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x1F3A6Cu;
    {
        const bool branch_taken_0x1f3a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f3a6c) {
            ctx->pc = 0x1F3C7Cu;
            goto label_1f3c7c;
        }
    }
    ctx->pc = 0x1F3A74u;
    // 0x1f3a74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3A74u;
    {
        const bool branch_taken_0x1f3a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a74) {
            ctx->pc = 0x1F3A84u;
            goto label_1f3a84;
        }
    }
    ctx->pc = 0x1F3A7Cu;
    // 0x1f3a7c: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1F3A7Cu;
    {
        const bool branch_taken_0x1f3a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a7c) {
            ctx->pc = 0x1F3E40u;
            goto label_1f3e40;
        }
    }
    ctx->pc = 0x1F3A84u;
label_1f3a84:
    // 0x1f3a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3a88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3a8c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3a90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3a94: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f3a94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3a98: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f3a9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3aa0: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1f3aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3aa4: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1f3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1f3aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3aac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ab0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3ab4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f3ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f3ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3abc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ac0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3ac4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f3ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f3ac8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f3acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ad4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3ad8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f3ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f3adc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ae4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ae8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3aec: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f3aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f3af0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1f3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1f3af4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f3af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f3af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3afc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3b04: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f3b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f3b08: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1f3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1f3b0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f3b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3b14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3b1c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f3b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f3b20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3b24: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x1f3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f3b28: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f3b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f3b2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F3B2Cu;
    {
        const bool branch_taken_0x1f3b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b2c) {
            ctx->pc = 0x1F3B78u;
            goto label_1f3b78;
        }
    }
    ctx->pc = 0x1F3B34u;
    // 0x1f3b34: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1f3b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1f3b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b3c: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1f3b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3b40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3B40u;
    SET_GPR_U32(ctx, 31, 0x1F3B48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3B40u, 0x1F3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B48u;
label_1f3b48:
    // 0x1f3b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f3b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f3b50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3B50u;
    {
        const bool branch_taken_0x1f3b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b50) {
            ctx->pc = 0x1F3B78u;
            goto label_1f3b78;
        }
    }
    ctx->pc = 0x1F3B58u;
    // 0x1f3b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b60: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1f3b60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3b64: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1f3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1f3b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3b6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3b74: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f3b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1f3b78:
    // 0x1f3b78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b7c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f3b80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f3b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f3b84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f3b84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f3b88: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F3B88u;
    {
        const bool branch_taken_0x1f3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b88) {
            ctx->pc = 0x1F3BF8u;
            goto label_1f3bf8;
        }
    }
    ctx->pc = 0x1F3B90u;
    // 0x1f3b90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3b98: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3b9c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f3b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f3ba0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3BA0u;
    {
        const bool branch_taken_0x1f3ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ba0) {
            ctx->pc = 0x1F3BD0u;
            goto label_1f3bd0;
        }
    }
    ctx->pc = 0x1F3BA8u;
    // 0x1f3ba8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bb0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3bb4: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x1f3bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x1f3bb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3bbc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3bc0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3BC0u;
    SET_GPR_U32(ctx, 31, 0x1F3BC8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3BC0u, 0x1F3BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BC8u;
label_1f3bc8:
    // 0x1f3bc8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F3BC8u;
    {
        const bool branch_taken_0x1f3bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3bc8) {
            ctx->pc = 0x1F3C58u;
            goto label_1f3c58;
        }
    }
    ctx->pc = 0x1F3BD0u;
label_1f3bd0:
    // 0x1f3bd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bd8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3bdc: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x1f3bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x1f3be0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3be4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3be8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3BE8u;
    SET_GPR_U32(ctx, 31, 0x1F3BF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3BE8u, 0x1F3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BF0u;
label_1f3bf0:
    // 0x1f3bf0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F3BF0u;
    {
        const bool branch_taken_0x1f3bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3bf0) {
            ctx->pc = 0x1F3C58u;
            goto label_1f3c58;
        }
    }
    ctx->pc = 0x1F3BF8u;
label_1f3bf8:
    // 0x1f3bf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bfc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3c00: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3c04: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f3c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f3c08: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3C08u;
    {
        const bool branch_taken_0x1f3c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c08) {
            ctx->pc = 0x1F3C38u;
            goto label_1f3c38;
        }
    }
    ctx->pc = 0x1F3C10u;
    // 0x1f3c10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3c1c: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x1f3c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x1f3c20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3c24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3c28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3C28u;
    SET_GPR_U32(ctx, 31, 0x1F3C30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3C28u, 0x1F3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C30u;
label_1f3c30:
    // 0x1f3c30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3C30u;
    {
        const bool branch_taken_0x1f3c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c30) {
            ctx->pc = 0x1F3C58u;
            goto label_1f3c58;
        }
    }
    ctx->pc = 0x1F3C38u;
label_1f3c38:
    // 0x1f3c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3c44: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x1f3c48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3c4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3c50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3C50u;
    SET_GPR_U32(ctx, 31, 0x1F3C58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3C50u, 0x1F3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C58u;
label_1f3c58:
    // 0x1f3c58: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f3c5c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f3c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f3c60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f3c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f3c64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c68: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1f3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1f3c6c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f3c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f3c70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f3c70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f3c74: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F3C74u;
    SET_GPR_U32(ctx, 31, 0x1F3C7Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F3C74u, 0x1F3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C7Cu;
label_1f3c7c:
    // 0x1f3c7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3c80: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x1f3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f3c84: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f3c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f3c88: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F3C88u;
    {
        const bool branch_taken_0x1f3c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c88) {
            ctx->pc = 0x1F3D44u;
            goto label_1f3d44;
        }
    }
    ctx->pc = 0x1F3C90u;
    // 0x1f3c90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3c98: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3c9c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f3c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f3ca0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F3CA0u;
    {
        const bool branch_taken_0x1f3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ca0) {
            ctx->pc = 0x1F3CE0u;
            goto label_1f3ce0;
        }
    }
    ctx->pc = 0x1F3CA8u;
    // 0x1f3ca8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3cac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f3cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3cb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3cb4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3cb8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f3cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f3cbc: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f3cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3cc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f3cc4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f3cc8: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f3ccc: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F3CCCu;
    SET_GPR_U32(ctx, 31, 0x1F3CD4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F3CCCu, 0x1F3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CD4u;
label_1f3cd4:
    // 0x1f3cd4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f3cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f3cd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F3CD8u;
    {
        const bool branch_taken_0x1f3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3cd8) {
            ctx->pc = 0x1F3D24u;
            goto label_1f3d24;
        }
    }
    ctx->pc = 0x1F3CE0u;
label_1f3ce0:
    // 0x1f3ce0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ce4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f3ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3ce8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f3cec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f3cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f3cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3cf4: 0x0  nop
    ctx->pc = 0x1f3cf4u;
    // NOP
    // 0x1f3cf8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f3cf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f3cfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d04: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3d08: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f3d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f3d0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f3d10: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f3d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f3d14: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f3d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f3d18: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F3D18u;
    SET_GPR_U32(ctx, 31, 0x1F3D20u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F3D18u, 0x1F3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D20u;
label_1f3d20:
    // 0x1f3d20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f3d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1f3d24:
    // 0x1f3d24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d28: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3d2c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3d30: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f3d30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f3d34: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F3D34u;
    SET_GPR_U32(ctx, 31, 0x1F3D3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F3D34u, 0x1F3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D3Cu;
label_1f3d3c:
    // 0x1f3d3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d40: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f3d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1f3d44:
    // 0x1f3d44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f3d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f3d4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F3D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F3D4Cu, 0x1F3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D54u;
label_1f3d54:
    // 0x1f3d54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F3D58u;
    SET_GPR_U32(ctx, 31, 0x1F3D60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F3D58u, 0x1F3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D60u;
label_1f3d60:
    // 0x1f3d60: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d64: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x1f3d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x1f3d68: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f3d6c: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x1f3d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3d70: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F3D70u;
    {
        const bool branch_taken_0x1f3d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d70) {
            ctx->pc = 0x1F3E40u;
            goto label_1f3e40;
        }
    }
    ctx->pc = 0x1F3D78u;
    // 0x1f3d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3d7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f3d80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3d84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f3d88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d8c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f3d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3d90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d94: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f3d94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3d98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d9c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f3d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3da0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3da4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f3da8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3DA8u;
    SET_GPR_U32(ctx, 31, 0x1F3DB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3DA8u, 0x1F3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DB0u;
label_1f3db0:
    // 0x1f3db0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f3db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3db4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f3db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f3db8: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x1f3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x1f3dbc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f3dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f3dc0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3dc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3dc8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f3dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f3dcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3dd0: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f3dd4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f3dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f3dd8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F3DD8u;
    {
        const bool branch_taken_0x1f3dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3dd8) {
            ctx->pc = 0x1F3E40u;
            goto label_1f3e40;
        }
    }
    ctx->pc = 0x1F3DE0u;
    // 0x1f3de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3de4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3de8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f3de8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3df4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f3df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3df8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3dfc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f3dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3e00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e04: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f3e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3e08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f3e10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3E10u;
    SET_GPR_U32(ctx, 31, 0x1F3E18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3E10u, 0x1F3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E18u;
label_1f3e18:
    // 0x1f3e18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f3e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3e1c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f3e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f3e20: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1f3e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1f3e24: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f3e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f3e28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f3e28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3e2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e30: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f3e30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f3e34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3e3c: 0xa460005c  sh          $zero, 0x5C($v1)
    ctx->pc = 0x1f3e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 0));
label_1f3e40:
    // 0x1f3e40: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1f3e40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3e48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f3e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f3e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3E54u;
}
