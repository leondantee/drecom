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

// Function: Em03_R0_init
// Address: 0x2c4c40 - 0x2c5338
void Em03_R0_init_0x2c4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R0_init_0x2c4c40");
#endif

    switch (ctx->pc) {
        case 0x2c4cbcu: goto label_2c4cbc;
        case 0x2c4d90u: goto label_2c4d90;
        case 0x2c4da4u: goto label_2c4da4;
        case 0x2c4dccu: goto label_2c4dcc;
        case 0x2c4e20u: goto label_2c4e20;
        case 0x2c4f14u: goto label_2c4f14;
        case 0x2c4f34u: goto label_2c4f34;
        case 0x2c4f44u: goto label_2c4f44;
        case 0x2c4f50u: goto label_2c4f50;
        case 0x2c51ecu: goto label_2c51ec;
        case 0x2c5200u: goto label_2c5200;
        case 0x2c5214u: goto label_2c5214;
        case 0x2c5258u: goto label_2c5258;
        default: break;
    }

    ctx->pc = 0x2c4c40u;

    // 0x2c4c40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c4c44: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2c4c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x2c4c48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c4c4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c4c50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c4c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4c54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4c60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4c64: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2c4c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2c4c68: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c4c68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4c6c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4c70: 0xa0730000  sb          $s3, 0x0($v1)
    ctx->pc = 0x2c4c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x2c4c74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4c78: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c4c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4c7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4c80: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2c4c80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4c84: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4c88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c4c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4c8c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4c90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c4c94: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2c4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2c4c98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c4c98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4c9c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ca0: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c4ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c4ca4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2c4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2c4ca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c4ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4cac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4cb0: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x2c4cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x2c4cb4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C4CB4u;
    SET_GPR_U32(ctx, 31, 0x2C4CBCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C4CB4u, 0x2C4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CBCu;
label_2c4cbc:
    // 0x2c4cbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c4cbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c4cc0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2c4cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c4cc4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2c4cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2c4cc8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2c4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c4ccc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2c4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2c4cd0: 0x24647ff0  addiu       $a0, $v1, 0x7FF0
    ctx->pc = 0x2c4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32752));
    // 0x2c4cd4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2c4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c4cd8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2c4cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4cdc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ce0: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2c4ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c4ce4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c4ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ce8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c4cec: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2c4cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2c4cf0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c4cf4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4cf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4cfc: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x2c4cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4d00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4d04: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4d0c: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x2c4d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c4d10: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d14: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4d18: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2c4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2c4d1c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4d24: 0xa0600038  sb          $zero, 0x38($v1)
    ctx->pc = 0x2c4d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d2c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4d34: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2c4d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2c4d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d3c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d40: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2c4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2c4d44: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x2c4d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2c4d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d4c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d50: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4d54: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c4d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c4d58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d5c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4d64: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c4d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2c4d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d6c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4d74: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c4d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c4d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4d7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4d80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4d84: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c4d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c4d88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C4D88u;
    SET_GPR_U32(ctx, 31, 0x2C4D90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C4D88u, 0x2C4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D90u;
label_2c4d90:
    // 0x2c4d90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c4d94: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c4d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c4d98: 0x24560002  addiu       $s6, $v0, 0x2
    ctx->pc = 0x2c4d98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2c4d9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C4D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C4DA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C4D9Cu, 0x2C4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DA4u;
label_2c4da4:
    // 0x2c4da4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c4da8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c4da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c4dac: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2c4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2c4db0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2c4db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c4db4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c4db4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c4db8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4dbc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4dc0: 0xa0430039  sb          $v1, 0x39($v0)
    ctx->pc = 0x2c4dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4dc4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C4DC4u;
    SET_GPR_U32(ctx, 31, 0x2C4DCCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C4DC4u, 0x2C4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DCCu;
label_2c4dcc:
    // 0x2c4dcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c4dd0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2c4dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c4dd4: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x2c4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2c4dd8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c4dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c4ddc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c4ddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c4de0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4de4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4de8: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x2c4de8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c4dec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4df0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4df4: 0xa440005a  sh          $zero, 0x5A($v0)
    ctx->pc = 0x2c4df4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4df8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x2c4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c4dfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4e00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4e04: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x2c4e04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c4e08: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4e0c: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x2c4e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2c4e10: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2c4e10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2c4e14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c4e14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c4e18: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x2C4E18u;
    SET_GPR_U32(ctx, 31, 0x2C4E20u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x2C4E18u, 0x2C4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E20u;
label_2c4e20:
    // 0x2c4e20: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c4e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e28: 0x0  nop
    ctx->pc = 0x2c4e28u;
    // NOP
    // 0x2c4e2c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x2c4e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x2c4e30: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x2c4e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x2c4e34: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c4e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e3c: 0x0  nop
    ctx->pc = 0x2c4e3cu;
    // NOP
    // 0x2c4e40: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x2c4e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x2c4e44: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4e48: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2c4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2c4e4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2c4e50: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2c4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2c4e54: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4e58: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2c4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2c4e5c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2c4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2c4e60: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2c4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2c4e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e68: 0x0  nop
    ctx->pc = 0x2c4e68u;
    // NOP
    // 0x2c4e6c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2c4e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c4e70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4e74: 0x0  nop
    ctx->pc = 0x2c4e74u;
    // NOP
    // 0x2c4e78: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2c4e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c4e7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4e80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c4e84: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2c4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2c4e88: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2c4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2c4e8c: 0x24438010  addiu       $v1, $v0, -0x7FF0
    ctx->pc = 0x2c4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934544));
    // 0x2c4e90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4e94: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x2c4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x2c4e98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c4e9c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ea0: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x2c4ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x2c4ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4ea8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4eac: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x2c4eacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4eb0: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x2c4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x2c4eb4: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x2c4eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x2c4eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ebc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ec0: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x2c4ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x2c4ec4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ec8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2c4ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4ecc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ed0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2c4ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4ed4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ed8: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2c4ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4edc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ee0: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2c4ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4ee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ee8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4eec: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c4eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c4ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4ef4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4ef8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2c4ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2c4efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4f00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f04: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c4f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c4f08: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c4f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f0c: 0xc0b3928  jal         func_2CE4A0
    ctx->pc = 0x2C4F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F14u);
    ctx->pc = 0x2CE4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE4A0u, 0x2C4F0Cu, 0x2C4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F14u;
label_2c4f14:
    // 0x2c4f14: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f18: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c4f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c4f20: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2c4f20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c4f24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c4f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4f28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c4f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c4f2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C4F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C4F2Cu, 0x2C4F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F34u;
label_2c4f34:
    // 0x2c4f34: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c4f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c4f3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C4F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C4F3Cu, 0x2C4F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F44u;
label_2c4f44:
    // 0x2c4f44: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C4F48u;
    SET_GPR_U32(ctx, 31, 0x2C4F50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C4F48u, 0x2C4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F50u;
label_2c4f50:
    // 0x2c4f50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4f58: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c4f58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c4f5c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c4f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c4f60: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c4f60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c4f64: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2c4f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4f68: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2c4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2c4f6c: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2c4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2c4f70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c4f74: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c4f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4f78: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4f80: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2c4f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x2c4f84: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4f88: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2c4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c4f8c: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2c4f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2c4f90: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2c4f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2c4f94: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2c4f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2c4f98: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2c4f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c4f9c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4fa0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4fa4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2c4fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4fa8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2c4fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2c4fac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4fb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4fb4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2c4fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4fb8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2c4fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2c4fbc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4fc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4fc4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2c4fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4fc8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2c4fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2c4fcc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4fd0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2c4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c4fd4: 0x24701770  addiu       $s0, $v1, 0x1770
    ctx->pc = 0x2c4fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x2c4fd8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2c4fd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2c4fdc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2c4fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2c4fe0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2c4fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c4fe4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c4fe8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4fec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4ff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c4ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4ff4: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c4ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4ff8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c4ff8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c4ffc: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2c4ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2c5000: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5004: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c5004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5008: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c5008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c500c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c500cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5010: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c5010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5014: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c5014u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c5018: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2c5018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2c501c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5020: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c5020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5024: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c5024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5028: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c5028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c502c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5030: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c5030u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c5034: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2c5034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2c5038: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c503c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2c503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c5040: 0x24701db0  addiu       $s0, $v1, 0x1DB0
    ctx->pc = 0x2c5040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 7600));
    // 0x2c5044: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2c5044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2c5048: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2c5048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2c504c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2c504cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5050: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5054: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c5054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5058: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c5058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c505c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c505cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5060: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c5060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5064: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c5064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c5068: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2c5068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2c506c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5070: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c5070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5074: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c5074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5078: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c5078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c507c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5080: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c5080u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c5084: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2c5084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2c5088: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c508c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5090: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c5090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5094: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c5094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5098: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c5098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c509c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c509cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c50a0: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2c50a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2c50a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c50a8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2c50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c50ac: 0x24702580  addiu       $s0, $v1, 0x2580
    ctx->pc = 0x2c50acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x2c50b0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2c50b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2c50b4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2c50b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2c50b8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2c50b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c50bc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c50c0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c50c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c50c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c50c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c50cc: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c50ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c50d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c50d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c50d4: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2c50d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2c50d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c50dc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c50e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c50e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c50e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c50e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c50e8: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c50e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c50ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c50ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c50f0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2c50f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2c50f4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c50f8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c50fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5100: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c5100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5104: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c5104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5108: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c5108u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c510c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2c510cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2c5110: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5114: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2c5114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c5118: 0x24702bc0  addiu       $s0, $v1, 0x2BC0
    ctx->pc = 0x2c5118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x2c511c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2c511cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2c5120: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2c5120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2c5124: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2c5124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5128: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c512c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5130: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c5130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5134: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c5134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5138: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c5138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c513c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c513cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c5140: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2c5140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2c5144: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5148: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c5148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c514c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c514cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5150: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c5150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5154: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c5154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5158: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c5158u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c515c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2c515cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2c5160: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5164: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5168: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c5168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c516c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c516cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5170: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2c5170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5174: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2c5174u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c5178: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2c5178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2c517c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5180: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x2c5180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x2c5184: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c5184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c5188: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2c5188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2c518c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C518Cu;
    {
        const bool branch_taken_0x2c518c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c518c) {
            ctx->pc = 0x2C51C0u;
            goto label_2c51c0;
        }
    }
    ctx->pc = 0x2C5194u;
    // 0x2c5194: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c5194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c5198: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c5198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c519c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c519cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c51a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51a4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c51a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c51a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c51acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c51b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c51b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c51b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c51bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c51c0:
    // 0x2c51c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51c4: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x2c51c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x2c51c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c51c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c51cc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2c51ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c51d0: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2C51D0u;
    {
        const bool branch_taken_0x2c51d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c51d0) {
            ctx->pc = 0x2C530Cu;
            goto label_2c530c;
        }
    }
    ctx->pc = 0x2C51D8u;
    // 0x2c51d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51dc: 0x24440234  addiu       $a0, $v0, 0x234
    ctx->pc = 0x2c51dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
    // 0x2c51e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c51e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c51e4: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2C51E4u;
    SET_GPR_U32(ctx, 31, 0x2C51ECu);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2C51E4u, 0x2C51ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51ECu;
label_2c51ec:
    // 0x2c51ec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c51f0: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x2c51f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x2c51f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c51f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c51f8: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2C51F8u;
    SET_GPR_U32(ctx, 31, 0x2C5200u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2C51F8u, 0x2C5200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5200u;
label_2c5200:
    // 0x2c5200: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c5200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5204: 0x24440244  addiu       $a0, $v0, 0x244
    ctx->pc = 0x2c5204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 580));
    // 0x2c5208: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c5208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c520c: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x2C520Cu;
    SET_GPR_U32(ctx, 31, 0x2C5214u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x2C520Cu, 0x2C5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5214u;
label_2c5214:
    // 0x2c5214: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5218: 0x8c540244  lw          $s4, 0x244($v0)
    ctx->pc = 0x2c5218u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x2c521c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c5220: 0x8c550248  lw          $s5, 0x248($v0)
    ctx->pc = 0x2c5220u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x2c5224: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x2c5224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2c5228: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2c5228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2c522c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2c522cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c5230: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x2c5230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x2c5234: 0x34472030  ori         $a3, $v0, 0x2030
    ctx->pc = 0x2c5234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8240);
    // 0x2c5238: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2c5238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2c523c: 0x34488080  ori         $t0, $v0, 0x8080
    ctx->pc = 0x2c523cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2c5240: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2c5240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x2c5244: 0x34492030  ori         $t1, $v0, 0x2030
    ctx->pc = 0x2c5244u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8240);
    // 0x2c5248: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2c524c: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x2c524cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2c5250: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x2C5250u;
    SET_GPR_U32(ctx, 31, 0x2C5258u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x2C5250u, 0x2C5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5258u;
label_2c5258:
    // 0x2c5258: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x2c5258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2c525c: 0x8eb30008  lw          $s3, 0x8($s5)
    ctx->pc = 0x2c525cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2c5260: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2c5260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2c5264: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c5264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c5268: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c5268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c526c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x2c526cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x2c5270: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x2c5270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x2c5274: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c5274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c5278: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x2c5278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2c527c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2c527cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2c5280: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2c5280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2c5284: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c5284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c5288: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c5288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c528c: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x2c528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x2c5290: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c5290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c5294: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x2c5294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x2c5298: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2c5298u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2c529c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2c529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c52a0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c52a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c52a4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2c52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2c52a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c52a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c52ac: 0xfe440020  sd          $a0, 0x20($s2)
    ctx->pc = 0x2c52acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 4));
    // 0x2c52b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2c52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c52b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c52b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c52b8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x2c52b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2c52bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c52bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c52c0: 0xfe630020  sd          $v1, 0x20($s3)
    ctx->pc = 0x2c52c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 3));
    // 0x2c52c4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2c52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2c52c8: 0x34633001  ori         $v1, $v1, 0x3001
    ctx->pc = 0x2c52c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x2c52cc: 0xfe430030  sd          $v1, 0x30($s2)
    ctx->pc = 0x2c52ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 3));
    // 0x2c52d0: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2c52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2c52d4: 0x34643001  ori         $a0, $v1, 0x3001
    ctx->pc = 0x2c52d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x2c52d8: 0xfe640030  sd          $a0, 0x30($s3)
    ctx->pc = 0x2c52d8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 4));
    // 0x2c52dc: 0x3c03612e  lui         $v1, 0x612E
    ctx->pc = 0x2c52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24878 << 16));
    // 0x2c52e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c52e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c52e4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c52e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c52e8: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x2c52e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x2c52ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c52ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c52f0: 0xfe430070  sd          $v1, 0x70($s2)
    ctx->pc = 0x2c52f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 3));
    // 0x2c52f4: 0x3c03612e  lui         $v1, 0x612E
    ctx->pc = 0x2c52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24878 << 16));
    // 0x2c52f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c52fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c52fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c5300: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x2c5300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x2c5304: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c5304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c5308: 0xfe630070  sd          $v1, 0x70($s3)
    ctx->pc = 0x2c5308u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 3));
label_2c530c:
    // 0x2c530c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2c530cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c5310: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c5310u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5314: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c5314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5318: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c5318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c531c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c531cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c532c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2c532cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c5330: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5338u;
}
