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

// Function: Em03_R1_mv06
// Address: 0x2c7cc0 - 0x2c8428
void Em03_R1_mv06_0x2c7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv06_0x2c7cc0");
#endif

    switch (ctx->pc) {
        case 0x2c7d50u: goto label_2c7d50;
        case 0x2c7d58u: goto label_2c7d58;
        case 0x2c7e04u: goto label_2c7e04;
        case 0x2c7ea8u: goto label_2c7ea8;
        case 0x2c7ec4u: goto label_2c7ec4;
        case 0x2c7f24u: goto label_2c7f24;
        case 0x2c7f38u: goto label_2c7f38;
        case 0x2c7f9cu: goto label_2c7f9c;
        case 0x2c7fbcu: goto label_2c7fbc;
        case 0x2c7fccu: goto label_2c7fcc;
        case 0x2c7fd8u: goto label_2c7fd8;
        case 0x2c8034u: goto label_2c8034;
        case 0x2c80d8u: goto label_2c80d8;
        case 0x2c80fcu: goto label_2c80fc;
        case 0x2c8108u: goto label_2c8108;
        case 0x2c8114u: goto label_2c8114;
        case 0x2c81a4u: goto label_2c81a4;
        case 0x2c8324u: goto label_2c8324;
        case 0x2c8390u: goto label_2c8390;
        case 0x2c839cu: goto label_2c839c;
        case 0x2c83f8u: goto label_2c83f8;
        case 0x2c8404u: goto label_2c8404;
        default: break;
    }

    ctx->pc = 0x2c7cc0u;

    // 0x2c7cc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c7cc4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2c7cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2c7cc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c7cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c7ccc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c7cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c7cd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7cd8: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2c7cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2c7cdc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ce0: 0x8c7302d0  lw          $s3, 0x2D0($v1)
    ctx->pc = 0x2c7ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c7ce4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ce8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7cec: 0x8c700060  lw          $s0, 0x60($v1)
    ctx->pc = 0x2c7cecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c7cf0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7cf4: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x2c7cf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c7cf8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2c7cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c7cfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7d00: 0x108300fa  beq         $a0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x2C7D00u;
    {
        const bool branch_taken_0x2c7d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c7d00) {
            ctx->pc = 0x2C80ECu;
            goto label_2c80ec;
        }
    }
    ctx->pc = 0x2C7D08u;
    // 0x2c7d08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7d0c: 0x1083005c  beq         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2C7D0Cu;
    {
        const bool branch_taken_0x2c7d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c7d0c) {
            ctx->pc = 0x2C7E80u;
            goto label_2c7e80;
        }
    }
    ctx->pc = 0x2C7D14u;
    // 0x2c7d14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7D14u;
    {
        const bool branch_taken_0x2c7d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d14) {
            ctx->pc = 0x2C7D24u;
            goto label_2c7d24;
        }
    }
    ctx->pc = 0x2C7D1Cu;
    // 0x2c7d1c: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x2C7D1Cu;
    {
        const bool branch_taken_0x2c7d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d1c) {
            ctx->pc = 0x2C8408u;
            goto label_2c8408;
        }
    }
    ctx->pc = 0x2C7D24u;
label_2c7d24:
    // 0x2c7d24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7d28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d2c: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x2c7d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c7d30: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2c7d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d34: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d38: 0x8cc50368  lw          $a1, 0x368($a2)
    ctx->pc = 0x2c7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 872)));
    // 0x2c7d3c: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c7d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c7d40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7d44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c7d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c7d48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C7D48u;
    SET_GPR_U32(ctx, 31, 0x2C7D50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C7D48u, 0x2C7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D50u;
label_2c7d50:
    // 0x2c7d50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7D50u;
    SET_GPR_U32(ctx, 31, 0x2C7D58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7D50u, 0x2C7D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D58u;
label_2c7d58:
    // 0x2c7d58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c7d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7d5c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c7d60: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x2c7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x2c7d64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c7d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c7d68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c7d68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c7d6c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d70: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c7d70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c7d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7d78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7d80: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c7d84: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c7d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7d8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7d90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7d94: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c7d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c7d98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7da0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7da4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7da8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c7dac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7db0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c7db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7db4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c7db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c7db8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c7dbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c7dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7dc0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c7dc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7dc8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7dcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7dd0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c7dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c7dd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7dd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ddc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7de0: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c7de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c7de4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7de8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7dec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c7decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c7df0: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c7df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c7df4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c7df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7df8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c7df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c7dfc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C7DFCu;
    SET_GPR_U32(ctx, 31, 0x2C7E04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C7DFCu, 0x2C7E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E04u;
label_2c7e04:
    // 0x2c7e04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7e0c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7e10: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7e18: 0x0  nop
    ctx->pc = 0x2c7e18u;
    // NOP
    // 0x2c7e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c7e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7e20: 0x0  nop
    ctx->pc = 0x2c7e20u;
    // NOP
    // 0x2c7e24: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7E24u;
    {
        const bool branch_taken_0x2c7e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7e24) {
            ctx->pc = 0x2C7E40u;
            goto label_2c7e40;
        }
    }
    ctx->pc = 0x2C7E2Cu;
    // 0x2c7e2c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c7e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7e34: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e38: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7e3c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c7e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_2c7e40:
    // 0x2c7e40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e44: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x2c7e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2c7e48: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c7e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7e50: 0x0  nop
    ctx->pc = 0x2c7e50u;
    // NOP
    // 0x2c7e54: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x2c7e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x2c7e58: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x2c7e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x2c7e5c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c7e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7e64: 0x0  nop
    ctx->pc = 0x2c7e64u;
    // NOP
    // 0x2c7e68: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x2c7e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x2c7e6c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7e74: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c7e78: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c7e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c7e7c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2c7e80:
    // 0x2c7e80: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e84: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e88: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2c7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2c7e8c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c7e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c7e90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c7e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c7e94: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c7e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c7e98: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c7e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7e9c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2c7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2c7ea0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C7EA0u;
    SET_GPR_U32(ctx, 31, 0x2C7EA8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C7EA0u, 0x2C7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EA8u;
label_2c7ea8:
    // 0x2c7ea8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2c7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2c7eac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7eb0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7eb4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2c7eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7eb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c7eb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c7ebc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C7EBCu;
    SET_GPR_U32(ctx, 31, 0x2C7EC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C7EBCu, 0x2C7EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7EC4u;
label_2c7ec4:
    // 0x2c7ec4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ec8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c7ecc: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x2c7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ed0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ed4: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x2c7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ed8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7edc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2c7edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c7ee0: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x2c7ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7ee4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2c7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2c7ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7eec: 0x0  nop
    ctx->pc = 0x2c7eecu;
    // NOP
    // 0x2c7ef0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c7ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7ef4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7ef8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c7ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7efc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f00: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2c7f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2c7f04: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2c7f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f08: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f0c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x2c7f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f14: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2c7f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c7f18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c7f1c: 0xc067588  jal         func_19D620
    ctx->pc = 0x2C7F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F24u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2C7F1Cu, 0x2C7F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F24u;
label_2c7f24:
    // 0x2c7f24: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c7f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2c7f28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c7f2c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2c7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c7f30: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C7F30u;
    SET_GPR_U32(ctx, 31, 0x2C7F38u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C7F38u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C7F38u) { return; }
    ctx->pc = 0x2C7F38u;
label_2c7f38:
    // 0x2c7f38: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7f40: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2c7f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f44: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f50: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c7f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c7f54: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7f5c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2c7f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f60: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f68: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f6c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2c7f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2c7f70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7f78: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2c7f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7f7c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7f80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c7f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c7f84: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f88: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c7f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c7f8c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7f90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c7f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c7f94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C7F94u;
    SET_GPR_U32(ctx, 31, 0x2C7F9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C7F94u, 0x2C7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F9Cu;
label_2c7f9c:
    // 0x2c7f9c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fa0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fa4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fa8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c7fac: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2c7facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2c7fb0: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2c7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2c7fb4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2C7FB4u;
    SET_GPR_U32(ctx, 31, 0x2C7FBCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2C7FB4u, 0x2C7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FBCu;
label_2c7fbc:
    // 0x2c7fbc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c7fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7fc4: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C7FC4u;
    SET_GPR_U32(ctx, 31, 0x2C7FCCu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C7FC4u, 0x2C7FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FCCu;
label_2c7fcc:
    // 0x2c7fcc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fd0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C7FD0u;
    SET_GPR_U32(ctx, 31, 0x2C7FD8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C7FD0u, 0x2C7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FD8u;
label_2c7fd8:
    // 0x2c7fd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7fdc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7fe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7fe4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2c7fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c7fe8: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2c7fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7fec: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2c7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2c7ff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7ff4: 0x0  nop
    ctx->pc = 0x2c7ff4u;
    // NOP
    // 0x2c7ff8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c7ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7ffc: 0x0  nop
    ctx->pc = 0x2c7ffcu;
    // NOP
    // 0x2c8000: 0x45000101  bc1f        . + 4 + (0x101 << 2)
    ctx->pc = 0x2C8000u;
    {
        const bool branch_taken_0x2c8000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8000) {
            ctx->pc = 0x2C8408u;
            goto label_2c8408;
        }
    }
    ctx->pc = 0x2C8008u;
    // 0x2c8008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c800c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8010: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c8010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8014: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8018: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c801c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c801cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8020: 0x24061e09  addiu       $a2, $zero, 0x1E09
    ctx->pc = 0x2c8020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7689));
    // 0x2c8024: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8028: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c8028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c802c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C802Cu;
    SET_GPR_U32(ctx, 31, 0x2C8034u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C802Cu, 0x2C8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8034u;
label_2c8034:
    // 0x2c8034: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8038: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c803c: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c803cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c8040: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2c8040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c8044: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c8044u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c8048: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c8048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c804c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c804cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8050: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2c8050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2c8054: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c8054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c8058: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c8058u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c805c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8060: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c8060u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8064: 0x8e1302d0  lw          $s3, 0x2D0($s0)
    ctx->pc = 0x2c8064u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2c8068: 0x8e120130  lw          $s2, 0x130($s0)
    ctx->pc = 0x2c8068u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2c806c: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x2c806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8070: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8074: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x2c8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c8078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c807c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8080: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8084: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2c8084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2c8088: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2c8088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c808c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8090: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c8090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c8094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c8098: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c809c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c80a0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2c80a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2c80a4: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2c80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80ac: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x2c80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c80b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c80b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c80bc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2c80bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2c80c0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2c80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c80c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80c8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c80c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c80cc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2c80ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c80d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C80D0u;
    SET_GPR_U32(ctx, 31, 0x2C80D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C80D0u, 0x2C80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80D8u;
label_2c80d8:
    // 0x2c80d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c80e0: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x2c80e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x2c80e4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2C80E4u;
    {
        const bool branch_taken_0x2c80e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80e4) {
            ctx->pc = 0x2C8408u;
            goto label_2c8408;
        }
    }
    ctx->pc = 0x2C80ECu;
label_2c80ec:
    // 0x2c80ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c80f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c80f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c80f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C80F4u;
    SET_GPR_U32(ctx, 31, 0x2C80FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C80F4u, 0x2C80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C80FCu;
label_2c80fc:
    // 0x2c80fc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c80fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8100: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C8100u;
    SET_GPR_U32(ctx, 31, 0x2C8108u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C8100u, 0x2C8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8108u;
label_2c8108:
    // 0x2c8108: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c810c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C810Cu;
    SET_GPR_U32(ctx, 31, 0x2C8114u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C810Cu, 0x2C8114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8114u;
label_2c8114:
    // 0x2c8114: 0x8e120130  lw          $s2, 0x130($s0)
    ctx->pc = 0x2c8114u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2c8118: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c811c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8120: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2c8120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8124: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2c8124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8128: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c8128u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c812c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8130: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2c8130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2c8134: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8138: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c813c: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2c813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8140: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2c8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8144: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c8144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8148: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c814c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2c814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2c8150: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8154: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8158: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2c8158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c815c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2c815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8160: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c8160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8164: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8168: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2c8168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2c816c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8170: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8174: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2c8174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8178: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2c8178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c817c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c817cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8180: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8184: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2c8184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2c8188: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c818c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8190: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2c8190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8194: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x2c8194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8198: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2c8198u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c819c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C819Cu;
    SET_GPR_U32(ctx, 31, 0x2C81A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C819Cu, 0x2C81A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C81A4u;
label_2c81a4:
    // 0x2c81a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81a8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2c81a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2c81ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c81acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81b0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2c81b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2c81b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c81b8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2c81b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c81bc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C81BCu;
    {
        const bool branch_taken_0x2c81bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c81bc) {
            ctx->pc = 0x2C8248u;
            goto label_2c8248;
        }
    }
    ctx->pc = 0x2C81C4u;
    // 0x2c81c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c81cc: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c81ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c81d0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c81d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c81d4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c81d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c81d8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C81D8u;
    {
        const bool branch_taken_0x2c81d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c81d8) {
            ctx->pc = 0x2C8204u;
            goto label_2c8204;
        }
    }
    ctx->pc = 0x2C81E0u;
    // 0x2c81e0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81e4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c81e8: 0x80830039  lb          $v1, 0x39($a0)
    ctx->pc = 0x2c81e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x2c81ec: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2c81f0: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x2c81f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c81f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c81f8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c81f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c81fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c8200: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2c8200u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2c8204:
    // 0x2c8204: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8208: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c8208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c820c: 0x80830039  lb          $v1, 0x39($a0)
    ctx->pc = 0x2c820cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x2c8210: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2c8210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2c8214: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x2c8214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8218: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c821c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8220: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c8220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c8224: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c8224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c8228: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c8228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c822c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x2c822cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2c8230: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8230u;
    {
        const bool branch_taken_0x2c8230 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8230) {
            ctx->pc = 0x2C8248u;
            goto label_2c8248;
        }
    }
    ctx->pc = 0x2C8238u;
    // 0x2c8238: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c8238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c823c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8240: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8244: 0xa0640039  sb          $a0, 0x39($v1)
    ctx->pc = 0x2c8244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 4));
label_2c8248:
    // 0x2c8248: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c824c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2c824cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2c8250: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2C8250u;
    {
        const bool branch_taken_0x2c8250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8250) {
            ctx->pc = 0x2C8408u;
            goto label_2c8408;
        }
    }
    ctx->pc = 0x2C8258u;
    // 0x2c8258: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c825c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2c825cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2c8260: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c8260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c8264: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2c8264u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8268: 0x14800067  bnez        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2C8268u;
    {
        const bool branch_taken_0x2c8268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8268) {
            ctx->pc = 0x2C8408u;
            goto label_2c8408;
        }
    }
    ctx->pc = 0x2C8270u;
    // 0x2c8270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8274: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8278: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c8278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c827c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8280: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c8280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8284: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8288: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c8288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c828c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8290: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c8290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8294: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8298: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c8298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c829c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2c829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c82a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c82a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c82a8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2c82a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c82ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c82acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c82b0: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x2c82b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2c82b4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c82b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c82b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c82bc: 0x0  nop
    ctx->pc = 0x2c82bcu;
    // NOP
    // 0x2c82c0: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x2c82c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x2c82c4: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x2c82c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x2c82c8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c82cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c82ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c82d0: 0x0  nop
    ctx->pc = 0x2c82d0u;
    // NOP
    // 0x2c82d4: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x2c82d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x2c82d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c82dc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c82dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c82e0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c82e4: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x2c82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x2c82e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c82e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c82ec: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c82f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c82f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c82f8: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x2c82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c82fc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2c82fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c8300: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2c8300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2c8304: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c8304u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c8308: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c830c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2c830cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c8310: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2c8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2c8314: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c8314u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c8318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2c8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c831c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C831Cu;
    SET_GPR_U32(ctx, 31, 0x2C8324u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C831Cu, 0x2C8324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8324u;
label_2c8324:
    // 0x2c8324: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2c8324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2c8328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c832c: 0x0  nop
    ctx->pc = 0x2c832cu;
    // NOP
    // 0x2c8330: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c8330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c8334: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c8334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c8338: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c8338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c833c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c833cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8340: 0x0  nop
    ctx->pc = 0x2c8340u;
    // NOP
    // 0x2c8344: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c8344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c8348: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c8348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c834c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8350: 0x0  nop
    ctx->pc = 0x2c8350u;
    // NOP
    // 0x2c8354: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c8354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c8358: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c835c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c8360: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c8360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c8364: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c8364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c8368: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c8368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c836c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c8370: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c8370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c8374: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c8374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c8378: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c8378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c837c: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c837cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c8380: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8380u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8384: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c8384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c8388: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C8388u;
    SET_GPR_U32(ctx, 31, 0x2C8390u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C8388u, 0x2C8390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8390u;
label_2c8390:
    // 0x2c8390: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c8390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8394: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C8394u;
    SET_GPR_U32(ctx, 31, 0x2C839Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C8394u, 0x2C839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C839Cu;
label_2c839c:
    // 0x2c839c: 0x3c03c220  lui         $v1, 0xC220
    ctx->pc = 0x2c839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49696 << 16));
    // 0x2c83a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c83a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c83a4: 0x0  nop
    ctx->pc = 0x2c83a4u;
    // NOP
    // 0x2c83a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c83a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c83ac: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2c83acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2c83b0: 0x3473999a  ori         $s3, $v1, 0x999A
    ctx->pc = 0x2c83b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2c83b4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2c83b4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c83b8: 0x0  nop
    ctx->pc = 0x2c83b8u;
    // NOP
    // 0x2c83bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c83bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c83c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c83c4: 0x8c700130  lw          $s0, 0x130($v1)
    ctx->pc = 0x2c83c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2c83c8: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x2c83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2c83cc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2c83ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c83d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2c83d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2c83d4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2c83d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c83d8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2c83d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2c83dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c83dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c83e0: 0xa33824  and         $a3, $a1, $v1
    ctx->pc = 0x2c83e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2c83e4: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c83e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c83e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c83e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c83ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c83ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c83f0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C83F0u;
    SET_GPR_U32(ctx, 31, 0x2C83F8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C83F0u, 0x2C83F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83F8u;
label_2c83f8:
    // 0x2c83f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c83f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c83fc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C83FCu;
    SET_GPR_U32(ctx, 31, 0x2C8404u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C83FCu, 0x2C8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8404u;
label_2c8404:
    // 0x2c8404: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2c8404u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c8408:
    // 0x2c8408: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2c8408u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c840c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c840cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c841c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2c841cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c8420: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8428u;
}
