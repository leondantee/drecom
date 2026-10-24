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

// Function: Em03_R1_mv08
// Address: 0x2c8ad0 - 0x2c95a8
void Em03_R1_mv08_0x2c8ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv08_0x2c8ad0");
#endif

    switch (ctx->pc) {
        case 0x2c8b70u: goto label_2c8b70;
        case 0x2c8c6cu: goto label_2c8c6c;
        case 0x2c8cd8u: goto label_2c8cd8;
        case 0x2c8ce4u: goto label_2c8ce4;
        case 0x2c8d44u: goto label_2c8d44;
        case 0x2c8d50u: goto label_2c8d50;
        case 0x2c8d78u: goto label_2c8d78;
        case 0x2c8da4u: goto label_2c8da4;
        case 0x2c8dd0u: goto label_2c8dd0;
        case 0x2c8e70u: goto label_2c8e70;
        case 0x2c8efcu: goto label_2c8efc;
        case 0x2c8f14u: goto label_2c8f14;
        case 0x2c8f34u: goto label_2c8f34;
        case 0x2c8f4cu: goto label_2c8f4c;
        case 0x2c8f6cu: goto label_2c8f6c;
        case 0x2c8f7cu: goto label_2c8f7c;
        case 0x2c8f88u: goto label_2c8f88;
        case 0x2c9014u: goto label_2c9014;
        case 0x2c90b0u: goto label_2c90b0;
        case 0x2c90d0u: goto label_2c90d0;
        case 0x2c90e8u: goto label_2c90e8;
        case 0x2c9108u: goto label_2c9108;
        case 0x2c9118u: goto label_2c9118;
        case 0x2c9124u: goto label_2c9124;
        case 0x2c918cu: goto label_2c918c;
        case 0x2c91c4u: goto label_2c91c4;
        case 0x2c91e4u: goto label_2c91e4;
        case 0x2c91fcu: goto label_2c91fc;
        case 0x2c9220u: goto label_2c9220;
        case 0x2c9230u: goto label_2c9230;
        case 0x2c923cu: goto label_2c923c;
        case 0x2c92d4u: goto label_2c92d4;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c9300u: goto label_2c9300;
        case 0x2c934cu: goto label_2c934c;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c9384u: goto label_2c9384;
        case 0x2c938cu: goto label_2c938c;
        case 0x2c94f4u: goto label_2c94f4;
        case 0x2c9534u: goto label_2c9534;
        case 0x2c955cu: goto label_2c955c;
        default: break;
    }

    ctx->pc = 0x2c8ad0u;

    // 0x2c8ad0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c8ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c8ad4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2c8ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2c8ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c8adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8ae0: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2c8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2c8ae4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ae8: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x2c8ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c8aec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c8aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c8af0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c8af4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2c8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2c8af8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2c8af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2c8afc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c8afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c8b00: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2c8b00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2c8b04: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b08: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2c8b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2c8b0c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2c8b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c8b10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c8b14: 0x10a30185  beq         $a1, $v1, . + 4 + (0x185 << 2)
    ctx->pc = 0x2C8B14u;
    {
        const bool branch_taken_0x2c8b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c8b14) {
            ctx->pc = 0x2C912Cu;
            goto label_2c912c;
        }
    }
    ctx->pc = 0x2C8B1Cu;
    // 0x2c8b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8b20: 0x10a3011b  beq         $a1, $v1, . + 4 + (0x11B << 2)
    ctx->pc = 0x2C8B20u;
    {
        const bool branch_taken_0x2c8b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c8b20) {
            ctx->pc = 0x2C8F90u;
            goto label_2c8f90;
        }
    }
    ctx->pc = 0x2C8B28u;
    // 0x2c8b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b2c: 0x10a40088  beq         $a1, $a0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2C8B2Cu;
    {
        const bool branch_taken_0x2c8b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c8b2c) {
            ctx->pc = 0x2C8D50u;
            goto label_2c8d50;
        }
    }
    ctx->pc = 0x2C8B34u;
    // 0x2c8b34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8B34u;
    {
        const bool branch_taken_0x2c8b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b34) {
            ctx->pc = 0x2C8B44u;
            goto label_2c8b44;
        }
    }
    ctx->pc = 0x2C8B3Cu;
    // 0x2c8b3c: 0x10000294  b           . + 4 + (0x294 << 2)
    ctx->pc = 0x2C8B3Cu;
    {
        const bool branch_taken_0x2c8b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b3c) {
            ctx->pc = 0x2C9590u;
            goto label_2c9590;
        }
    }
    ctx->pc = 0x2C8B44u;
label_2c8b44:
    // 0x2c8b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b48: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b4c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2c8b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c8b50: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b54: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8b5c: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x2c8b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x2c8b60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8b64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c8b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8b68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8B68u;
    SET_GPR_U32(ctx, 31, 0x2C8B70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8B68u, 0x2C8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B70u;
label_2c8b70:
    // 0x2c8b70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2c8b70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c8b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8b78: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8b80: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2c8b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2c8b84: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2c8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2c8b88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c8b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c8b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8b90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8b94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8b98: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x2c8b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2c8b9c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ba0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2c8ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2c8ba4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2c8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2c8ba8: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2c8ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c8bac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c8bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c8bb0: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2c8bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2c8bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c8bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8bb8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bbc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8bc0: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2c8bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2c8bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c8bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8bc8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bcc: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2c8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2c8bd0: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c8bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c8bd4: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x2c8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2c8bd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bdc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c8bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8be0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2c8be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8be8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bec: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c8becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c8bf0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8bf8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8bfc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8c00: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2c8c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2c8c04: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c8c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8c10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8c14: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2c8c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2c8c18: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8c1c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8c20: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2c8c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c8c24: 0x34a60008  ori         $a2, $a1, 0x8
    ctx->pc = 0x2c8c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x2c8c28: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x2c8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x2c8c2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8c30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8c34: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c8c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c8c38: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x2c8c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c8c3c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2c8c3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2c8c40: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2c8c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c8c44: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8C44u;
    {
        const bool branch_taken_0x2c8c44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c44) {
            ctx->pc = 0x2C8C60u;
            goto label_2c8c60;
        }
    }
    ctx->pc = 0x2C8C4Cu;
    // 0x2c8c4c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8c50: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2c8c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2c8c54: 0x80c20039  lb          $v0, 0x39($a2)
    ctx->pc = 0x2c8c54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x2c8c58: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2c8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2c8c5c: 0xa0c20039  sb          $v0, 0x39($a2)
    ctx->pc = 0x2c8c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 57), (uint8_t)GPR_U32(ctx, 2));
label_2c8c60:
    // 0x2c8c60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8c64: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C8C64u;
    SET_GPR_U32(ctx, 31, 0x2C8C6Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C8C64u, 0x2C8C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C6Cu;
label_2c8c6c:
    // 0x2c8c6c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2c8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2c8c70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c74: 0x0  nop
    ctx->pc = 0x2c8c74u;
    // NOP
    // 0x2c8c78: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c8c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c8c7c: 0x3c103e99  lui         $s0, 0x3E99
    ctx->pc = 0x2c8c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16025 << 16));
    // 0x2c8c80: 0x3602999a  ori         $v0, $s0, 0x999A
    ctx->pc = 0x2c8c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)39322);
    // 0x2c8c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c88: 0x0  nop
    ctx->pc = 0x2c8c88u;
    // NOP
    // 0x2c8c8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c8c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c8c90: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c8c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c98: 0x0  nop
    ctx->pc = 0x2c8c98u;
    // NOP
    // 0x2c8c9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c8c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c8ca0: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x2c8ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ca4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2c8ca8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2c8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c8cac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c8cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c8cb0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2c8cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2c8cb4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c8cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c8cb8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2c8cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c8cbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c8cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c8cc0: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2c8cc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c8cc4: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c8cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c8cc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8cc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8ccc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c8cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8cd0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C8CD0u;
    SET_GPR_U32(ctx, 31, 0x2C8CD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C8CD0u, 0x2C8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CD8u;
label_2c8cd8:
    // 0x2c8cd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c8cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8cdc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C8CDCu;
    SET_GPR_U32(ctx, 31, 0x2C8CE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C8CDCu, 0x2C8CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CE4u;
label_2c8ce4:
    // 0x2c8ce4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2c8ce4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8ce8: 0x3c03c220  lui         $v1, 0xC220
    ctx->pc = 0x2c8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49696 << 16));
    // 0x2c8cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8cf0: 0x0  nop
    ctx->pc = 0x2c8cf0u;
    // NOP
    // 0x2c8cf4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c8cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c8cf8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c8cfc: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x2c8cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c8d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8d04: 0x0  nop
    ctx->pc = 0x2c8d04u;
    // NOP
    // 0x2c8d08: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c8d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c8d0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8d10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c8d14: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c8d18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c8d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c8d1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c8d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c8d20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c8d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c8d24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c8d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c8d28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c8d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c8d2c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c8d2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c8d30: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c8d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c8d34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8d34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8d38: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c8d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8d3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C8D3Cu, 0x2C8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D44u;
label_2c8d44:
    // 0x2c8d44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c8d44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8d48: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C8D48u;
    SET_GPR_U32(ctx, 31, 0x2C8D50u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C8D48u, 0x2C8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D50u;
label_2c8d50:
    // 0x2c8d50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8d54: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2c8d54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c8d58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c8d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c8d5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8d5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c8d60: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c8d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c8d64: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C8D64u;
    {
        const bool branch_taken_0x2c8d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d64) {
            ctx->pc = 0x2C8E10u;
            goto label_2c8e10;
        }
    }
    ctx->pc = 0x2C8D6Cu;
    // 0x2c8d6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8d70: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C8D70u;
    SET_GPR_U32(ctx, 31, 0x2C8D78u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C8D70u, 0x2C8D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D78u;
label_2c8d78:
    // 0x2c8d78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8d7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8d84: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8d88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c8d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8d8c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2c8d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8d90: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x2c8d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8d94: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c8d94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8d98: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x2c8d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c8d9c: 0xc0c4988  jal         func_312620
    ctx->pc = 0x2C8D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C8DA4u);
    ctx->pc = 0x312620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312620u, 0x2C8D9Cu, 0x2C8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DA4u;
label_2c8da4:
    // 0x2c8da4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8da8: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8dac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8db0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c8db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8db8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2c8db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8dbc: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x2c8dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8dc0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c8dc0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8dc4: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x2c8dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c8dc8: 0xc0c4988  jal         func_312620
    ctx->pc = 0x2C8DC8u;
    SET_GPR_U32(ctx, 31, 0x2C8DD0u);
    ctx->pc = 0x312620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312620u, 0x2C8DC8u, 0x2C8DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DD0u;
label_2c8dd0:
    // 0x2c8dd0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8dd4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8dd8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2c8dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8ddc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c8de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8de4: 0x0  nop
    ctx->pc = 0x2c8de4u;
    // NOP
    // 0x2c8de8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8dec: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2c8decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2c8df0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8df4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2c8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2c8df8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2c8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8dfc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c8e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8e04: 0x0  nop
    ctx->pc = 0x2c8e04u;
    // NOP
    // 0x2c8e08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8e0c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2c8e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2c8e10:
    // 0x2c8e10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e14: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c8e14u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8e18: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8e20: 0x0  nop
    ctx->pc = 0x2c8e20u;
    // NOP
    // 0x2c8e24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8e28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e2c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c8e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c8e30: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x2c8e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8e34: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8e38: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8e3c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c8e40: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x2c8e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c8e44: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2c8e44u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c8e48: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2c8e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c8e4c: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x2c8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x2c8e50: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c8e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8e54: 0xc4ad00d0  lwc1        $f13, 0xD0($a1)
    ctx->pc = 0x2c8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8e58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e5c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c8e60: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2c8e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2c8e64: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2c8e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2c8e68: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2C8E68u;
    SET_GPR_U32(ctx, 31, 0x2C8E70u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2C8E68u, 0x2C8E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E70u;
label_2c8e70:
    // 0x2c8e70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e74: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c8e74u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8e78: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c8e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8e80: 0x0  nop
    ctx->pc = 0x2c8e80u;
    // NOP
    // 0x2c8e84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c8e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c8e88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8e8c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c8e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c8e90: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8e94: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2c8e98: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c8e9c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2c8e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8ea0: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C8EA0u;
    {
        const bool branch_taken_0x2c8ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ea0) {
            ctx->pc = 0x2C8EFCu;
            goto label_2c8efc;
        }
    }
    ctx->pc = 0x2C8EA8u;
    // 0x2c8ea8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8eac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8eb0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2c8eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8eb4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8eb8: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2c8eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c8ebc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ec0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8ec4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c8ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c8ec8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c8ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c8ecc: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c8ed0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ed4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8ed8: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x2c8ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c8edc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ee0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8ee4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8ee8: 0x24060f06  addiu       $a2, $zero, 0xF06
    ctx->pc = 0x2c8ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3846));
    // 0x2c8eec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8ef0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c8ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8ef4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8EF4u;
    SET_GPR_U32(ctx, 31, 0x2C8EFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8EF4u, 0x2C8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EFCu;
label_2c8efc:
    // 0x2c8efc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f00: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8f04: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2c8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8f08: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c8f08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8f0c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C8F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C8F14u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C8F0Cu, 0x2C8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F14u;
label_2c8f14:
    // 0x2c8f14: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f18: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c8f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c8f1c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f20: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2c8f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8f24: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8f28: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c8f28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8f2c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C8F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C8F34u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C8F2Cu, 0x2C8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F34u;
label_2c8f34:
    // 0x2c8f34: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f38: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c8f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c8f3c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8f40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8f44: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C8F44u;
    SET_GPR_U32(ctx, 31, 0x2C8F4Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C8F44u, 0x2C8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F4Cu;
label_2c8f4c:
    // 0x2c8f4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8f54: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c8f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8f58: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f5c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c8f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c8f60: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f64: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C8F64u;
    SET_GPR_U32(ctx, 31, 0x2C8F6Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C8F64u, 0x2C8F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F6Cu;
label_2c8f6c:
    // 0x2c8f6c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8f70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8f74: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C8F74u;
    SET_GPR_U32(ctx, 31, 0x2C8F7Cu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C8F74u, 0x2C8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F7Cu;
label_2c8f7c:
    // 0x2c8f7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f80: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C8F80u;
    SET_GPR_U32(ctx, 31, 0x2C8F88u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C8F80u, 0x2C8F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F88u;
label_2c8f88:
    // 0x2c8f88: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x2C8F88u;
    {
        const bool branch_taken_0x2c8f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f88) {
            ctx->pc = 0x2C9590u;
            goto label_2c9590;
        }
    }
    ctx->pc = 0x2C8F90u;
label_2c8f90:
    // 0x2c8f90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8f94: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2c8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8f98: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c8f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8fa0: 0x0  nop
    ctx->pc = 0x2c8fa0u;
    // NOP
    // 0x2c8fa4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8fa8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2c8fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2c8fac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8fb0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c8fb0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8fb4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8fbc: 0x0  nop
    ctx->pc = 0x2c8fbcu;
    // NOP
    // 0x2c8fc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8fc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c8fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c8fc8: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c8fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c8fcc: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2c8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2c8fd0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c8fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c8fd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c8fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c8fd8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8fdc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8fe0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8fe4: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2c8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2c8fe8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c8fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c8fec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2c8fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c8ff0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c8ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c8ff4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2c8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8ff8: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x2c8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8ffc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c9000: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c9000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c9004: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2c9004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2c9008: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2c9008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2c900c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2C900Cu;
    SET_GPR_U32(ctx, 31, 0x2C9014u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2C900Cu, 0x2C9014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9014u;
label_2c9014:
    // 0x2c9014: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9018: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c9018u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c901c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9024: 0x0  nop
    ctx->pc = 0x2c9024u;
    // NOP
    // 0x2c9028: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c902c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9030: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c9030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c9034: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9038: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2c9038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2c903c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C903Cu;
    {
        const bool branch_taken_0x2c903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c903c) {
            ctx->pc = 0x2C9098u;
            goto label_2c9098;
        }
    }
    ctx->pc = 0x2C9044u;
    // 0x2c9044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c9044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c9048: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c904c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c904cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9050: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2c9050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2c9054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9058: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c905c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9060: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c9060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c9064: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c9064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c9068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c906c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9070: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9074: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c9074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c9078: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c907c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9080: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c9080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c9084: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c9084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c9088: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c9088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c908c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c908cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c9090: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9094: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2c9094u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2c9098:
    // 0x2c9098: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c909c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c90a0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2c90a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c90a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c90a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c90a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C90A8u;
    SET_GPR_U32(ctx, 31, 0x2C90B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C90A8u, 0x2C90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90B0u;
label_2c90b0:
    // 0x2c90b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c90b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c90b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90bc: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2c90bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c90c0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c90c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c90c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c90c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c90c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C90C8u;
    SET_GPR_U32(ctx, 31, 0x2C90D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C90C8u, 0x2C90D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90D0u;
label_2c90d0:
    // 0x2c90d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90d4: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c90d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c90d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c90dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c90e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C90E0u;
    SET_GPR_U32(ctx, 31, 0x2C90E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C90E0u, 0x2C90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90E8u;
label_2c90e8:
    // 0x2c90e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c90f0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c90f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c90f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c90f8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c90f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c90fc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c90fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9100: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C9100u;
    SET_GPR_U32(ctx, 31, 0x2C9108u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C9100u, 0x2C9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9108u;
label_2c9108:
    // 0x2c9108: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c910c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c910cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c9110: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C9110u;
    SET_GPR_U32(ctx, 31, 0x2C9118u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C9110u, 0x2C9118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9118u;
label_2c9118:
    // 0x2c9118: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c911c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C911Cu;
    SET_GPR_U32(ctx, 31, 0x2C9124u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C911Cu, 0x2C9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9124u;
label_2c9124:
    // 0x2c9124: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x2C9124u;
    {
        const bool branch_taken_0x2c9124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9124) {
            ctx->pc = 0x2C9590u;
            goto label_2c9590;
        }
    }
    ctx->pc = 0x2C912Cu;
label_2c912c:
    // 0x2c912c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9130: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c9130u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9134: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c9134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c913c: 0x0  nop
    ctx->pc = 0x2c913cu;
    // NOP
    // 0x2c9140: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c9140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9144: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9148: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c9148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c914c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2c9150: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c9150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c9154: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c9154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c9158: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c915c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9160: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9164: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2c9164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c9168: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c9168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c916c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c9170: 0xc44d00d0  lwc1        $f13, 0xD0($v0)
    ctx->pc = 0x2c9170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c9174: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c9174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c9178: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c9178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c917c: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x2c917cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2c9180: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2c9180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2c9184: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2C9184u;
    SET_GPR_U32(ctx, 31, 0x2C918Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2C9184u, 0x2C918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C918Cu;
label_2c918c:
    // 0x2c918c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9190: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c9190u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9194: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c9194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c9198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c919c: 0x0  nop
    ctx->pc = 0x2c919cu;
    // NOP
    // 0x2c91a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c91a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c91a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c91a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c91a8: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c91a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c91ac: 0x8fb10088  lw          $s1, 0x88($sp)
    ctx->pc = 0x2c91acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91b0: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x2c91b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c91b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2c91b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c91b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c91b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c91bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C91BCu;
    SET_GPR_U32(ctx, 31, 0x2C91C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C91BCu, 0x2C91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91C4u;
label_2c91c4:
    // 0x2c91c4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c91c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91c8: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2c91c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2c91cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91d0: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x2c91d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c91d4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c91d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c91d8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c91d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c91dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C91DCu;
    SET_GPR_U32(ctx, 31, 0x2C91E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C91DCu, 0x2C91E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91E4u;
label_2c91e4:
    // 0x2c91e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91e8: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2c91e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2c91ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c91f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c91f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c91f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C91F4u;
    SET_GPR_U32(ctx, 31, 0x2C91FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C91F4u, 0x2C91FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91FCu;
label_2c91fc:
    // 0x2c91fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2c91fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c9200: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c9200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9204: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x2c9204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2c9208: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2c9208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c920c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9210: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2c9210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2c9214: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9218: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C9218u;
    SET_GPR_U32(ctx, 31, 0x2C9220u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C9218u, 0x2C9220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9220u;
label_2c9220:
    // 0x2c9220: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9224: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c9224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c9228: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C9228u;
    SET_GPR_U32(ctx, 31, 0x2C9230u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C9228u, 0x2C9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9230u;
label_2c9230:
    // 0x2c9230: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9234: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C9234u;
    SET_GPR_U32(ctx, 31, 0x2C923Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C9234u, 0x2C923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C923Cu;
label_2c923c:
    // 0x2c923c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2c923cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c9240: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2c9240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9244: 0x84c7127e  lh          $a3, 0x127E($a2)
    ctx->pc = 0x2c9244u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4734)));
    // 0x2c9248: 0x14e00053  bnez        $a3, . + 4 + (0x53 << 2)
    ctx->pc = 0x2C9248u;
    {
        const bool branch_taken_0x2c9248 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9248) {
            ctx->pc = 0x2C9398u;
            goto label_2c9398;
        }
    }
    ctx->pc = 0x2C9250u;
    // 0x2c9250: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x2c9250u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9254: 0x8d030130  lw          $v1, 0x130($t0)
    ctx->pc = 0x2c9254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x2c9258: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2c9258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c925c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2c925cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x2c9260: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9264: 0x0  nop
    ctx->pc = 0x2c9264u;
    // NOP
    // 0x2c9268: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c9268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c926c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c926cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9270: 0x0  nop
    ctx->pc = 0x2c9270u;
    // NOP
    // 0x2c9274: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c9274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c9278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c927c: 0x0  nop
    ctx->pc = 0x2c927cu;
    // NOP
    // 0x2c9280: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c9280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c9284: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c9284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c9288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c928c: 0x0  nop
    ctx->pc = 0x2c928cu;
    // NOP
    // 0x2c9290: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c9290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c9294: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c9294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c9298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c9298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c929c: 0x0  nop
    ctx->pc = 0x2c929cu;
    // NOP
    // 0x2c92a0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2c92a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c92a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c92a8: 0xa7a30064  sh          $v1, 0x64($sp)
    ctx->pc = 0x2c92a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c92ac: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x2c92acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c92b0: 0xa3a00067  sb          $zero, 0x67($sp)
    ctx->pc = 0x2c92b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c92b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c92b8: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x2c92b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2c92bc: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C92BCu;
    {
        const bool branch_taken_0x2c92bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c92bc) {
            ctx->pc = 0x2C9398u;
            goto label_2c9398;
        }
    }
    ctx->pc = 0x2C92C4u;
    // 0x2c92c4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c92c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c92c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c92c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c92cc: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2C92CCu;
    SET_GPR_U32(ctx, 31, 0x2C92D4u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2C92CCu, 0x2C92D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92D4u;
label_2c92d4:
    // 0x2c92d4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C92D4u;
    {
        const bool branch_taken_0x2c92d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c92d4) {
            ctx->pc = 0x2C9398u;
            goto label_2c9398;
        }
    }
    ctx->pc = 0x2C92DCu;
    // 0x2c92dc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2c92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2c92e0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x2c92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x2c92e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2c92e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c92e8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2C92E8u;
    SET_GPR_U32(ctx, 31, 0x2C92F0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2C92E8u, 0x2C92F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92F0u;
label_2c92f0:
    // 0x2c92f0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x2c92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x2c92f4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x2c92f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x2c92f8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2C92F8u;
    SET_GPR_U32(ctx, 31, 0x2C9300u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2C92F8u, 0x2C9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9300u;
label_2c9300:
    // 0x2c9300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9304: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9308: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2c9308u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c930c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9310: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9314: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c9314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c9318: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c931c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c931cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c9320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9324: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9328: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c932c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c932cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9330: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9334: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c9338: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c9338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c933c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2c933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c9340: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c9340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c9344: 0xc0c4c10  jal         func_313040
    ctx->pc = 0x2C9344u;
    SET_GPR_U32(ctx, 31, 0x2C934Cu);
    ctx->pc = 0x313040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313040u, 0x2C9344u, 0x2C934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C934Cu;
label_2c934c:
    // 0x2c934c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9350: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c9354: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9358: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2c9358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2c935c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c935cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c9360: 0xc0c4c10  jal         func_313040
    ctx->pc = 0x2C9360u;
    SET_GPR_U32(ctx, 31, 0x2C9368u);
    ctx->pc = 0x313040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313040u, 0x2C9360u, 0x2C9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9368u;
label_2c9368:
    // 0x2c9368: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c936c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9370: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2c9370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c9374: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2c9374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2c9378: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c9378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c937c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c937cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c9380: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x2c9380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c9384:
    // 0x2c9384: 0xc0c4c74  jal         func_3131D0
    ctx->pc = 0x2C9384u;
    SET_GPR_U32(ctx, 31, 0x2C938Cu);
    ctx->pc = 0x3131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3131D0u, 0x2C9384u, 0x2C938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C938Cu;
label_2c938c:
    // 0x2c938c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c938cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c9390: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2C9390u;
    {
        const bool branch_taken_0x2c9390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9390) {
            ctx->pc = 0x2C9384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9384;
        }
    }
    ctx->pc = 0x2C9398u;
label_2c9398:
    // 0x2c9398: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c939c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c939cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c93a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C93A0u;
    {
        const bool branch_taken_0x2c93a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c93a0) {
            ctx->pc = 0x2C93B8u;
            goto label_2c93b8;
        }
    }
    ctx->pc = 0x2C93A8u;
    // 0x2c93a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c93a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93ac: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c93acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c93b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c93b4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2c93b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2c93b8:
    // 0x2c93b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93bc: 0x24671330  addiu       $a3, $v1, 0x1330
    ctx->pc = 0x2c93bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c93c0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c93c4: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C93C4u;
    {
        const bool branch_taken_0x2c93c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c93c4) {
            ctx->pc = 0x2C9400u;
            goto label_2c9400;
        }
    }
    ctx->pc = 0x2C93CCu;
    // 0x2c93cc: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2c93ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93d0: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x2c93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2c93d4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2c93d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c93d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93dc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2c93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c93e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c93e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c93e4: 0x0  nop
    ctx->pc = 0x2c93e4u;
    // NOP
    // 0x2c93e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C93E8u;
    {
        const bool branch_taken_0x2c93e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c93e8) {
            ctx->pc = 0x2C9400u;
            goto label_2c9400;
        }
    }
    ctx->pc = 0x2C93F0u;
    // 0x2c93f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93f4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c93f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c93f8: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C93F8u;
    {
        const bool branch_taken_0x2c93f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c93f8) {
            ctx->pc = 0x2C9590u;
            goto label_2c9590;
        }
    }
    ctx->pc = 0x2C9400u;
label_2c9400:
    // 0x2c9400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9404: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9408: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c9408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c940c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c9410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9414: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9418: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c9418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c941c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9424: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c9424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9428: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c9428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c942c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c942cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c9430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9434: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9438: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c943c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c943cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c9440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9444: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x2c9444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9448: 0x24e41330  addiu       $a0, $a3, 0x1330
    ctx->pc = 0x2c9448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2c944c: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x2c944cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2c9450: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x2c9450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9454: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2c9454u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9458: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c945c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c9460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9464: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c9464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9468: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2c9468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c946c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9470: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c9470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9474: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9478: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c9478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c947c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9480: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c9480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9484: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9488: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c9488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c948c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9494: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x2c9494u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c9498: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c949c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c94a0: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2c94a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c94a4: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x2c94a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2c94a8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x2c94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x2c94ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c94acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c94b0: 0x8fa90088  lw          $t1, 0x88($sp)
    ctx->pc = 0x2c94b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94b4: 0x25221330  addiu       $v0, $t1, 0x1330
    ctx->pc = 0x2c94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4912));
    // 0x2c94b8: 0xa447000e  sh          $a3, 0xE($v0)
    ctx->pc = 0x2c94b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x2c94bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c94c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c94c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c94c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c94c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c94cc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c94ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94d0: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x2c94d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c94d4: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2c94d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94d8: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x2c94d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c94dc: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x2c94dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94e0: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x2c94e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c94e4: 0x8fa90088  lw          $t1, 0x88($sp)
    ctx->pc = 0x2c94e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94e8: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2c94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2c94ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C94ECu;
    SET_GPR_U32(ctx, 31, 0x2C94F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C94ECu, 0x2C94F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C94F4u;
label_2c94f4:
    // 0x2c94f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c94f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c94f8: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x2c94f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c94fc: 0x24620258  addiu       $v0, $v1, 0x258
    ctx->pc = 0x2c94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x2c9500: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2c9500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9504: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c9504u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c9508: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c950c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c9510: 0xa4440058  sh          $a0, 0x58($v0)
    ctx->pc = 0x2c9510u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c9514: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9518: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2c9518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c951c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9520: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2c9520u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2c9524: 0x24e50080  addiu       $a1, $a3, 0x80
    ctx->pc = 0x2c9524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x2c9528: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x2c9528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c952c: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2C952Cu;
    SET_GPR_U32(ctx, 31, 0x2C9534u);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2C952Cu, 0x2C9534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9534u;
label_2c9534:
    // 0x2c9534: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9538: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2c9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2c953c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9540: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2c9540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2c9544: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x2c9544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2c9548: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2c9548u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2c954c: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x2c954cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c9550: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2c9550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2c9554: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2C9554u;
    SET_GPR_U32(ctx, 31, 0x2C955Cu);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2C9554u, 0x2C955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C955Cu;
label_2c955c:
    // 0x2c955c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9560: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2c9560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c9564: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2c9564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2c9568: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2c956c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c956cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c9570: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2c9570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x2c9574: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c9574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c9578: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c9578u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c957c: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x2c957cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x2c9580: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c9580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c9584: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c9584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c9588: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c9588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c958c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2c958cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_2c9590:
    // 0x2c9590: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2c9590u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c959c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2c959cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c95a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C95A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C95A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C95A8u;
}
