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

// Function: Em02_R0_init
// Address: 0x29d970 - 0x29dd38
void Em02_R0_init_0x29d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R0_init_0x29d970");
#endif

    switch (ctx->pc) {
        case 0x29d9d8u: goto label_29d9d8;
        case 0x29da48u: goto label_29da48;
        case 0x29dac4u: goto label_29dac4;
        case 0x29dbb8u: goto label_29dbb8;
        case 0x29dcc0u: goto label_29dcc0;
        case 0x29dcd0u: goto label_29dcd0;
        case 0x29dcdcu: goto label_29dcdc;
        default: break;
    }

    ctx->pc = 0x29d970u;

    // 0x29d970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29d974: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x29d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x29d978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d980: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x29d980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x29d984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d988: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d98c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29d98cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29d990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d994: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x29d994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d998: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d99c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29d99cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d9a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d9a4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29d9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d9a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d9ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29d9b0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x29d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x29d9b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d9b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d9bc: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x29d9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x29d9c0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x29d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x29d9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d9c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d9cc: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x29d9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x29d9d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29D9D0u;
    SET_GPR_U32(ctx, 31, 0x29D9D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29D9D0u, 0x29D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9D8u;
label_29d9d8:
    // 0x29d9d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d9dc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x29d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x29d9e0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29d9e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x29d9e8: 0x24426a60  addiu       $v0, $v0, 0x6A60
    ctx->pc = 0x29d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27232));
    // 0x29d9ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d9f0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x29d9f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d9f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d9f8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x29d9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x29d9fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da00: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29da04: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x29da04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x29da08: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x29da08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x29da0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da14: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x29da14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x29da18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da20: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x29da20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x29da24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da2c: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x29da2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x29da30: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x29da30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x29da34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da38: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da3c: 0xa4430040  sh          $v1, 0x40($v0)
    ctx->pc = 0x29da3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x29da40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29DA40u;
    SET_GPR_U32(ctx, 31, 0x29DA48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29DA40u, 0x29DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA48u;
label_29da48:
    // 0x29da48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29da4c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x29da4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x29da50: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x29da50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x29da54: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x29da54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29da58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da60: 0xa4430042  sh          $v1, 0x42($v0)
    ctx->pc = 0x29da60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x29da64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da6c: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x29da6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x29da70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da78: 0xa440004a  sh          $zero, 0x4A($v0)
    ctx->pc = 0x29da78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x29da7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da84: 0xa4400050  sh          $zero, 0x50($v0)
    ctx->pc = 0x29da84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x29da88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da90: 0xa0400052  sb          $zero, 0x52($v0)
    ctx->pc = 0x29da90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x29da94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da98: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29da98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29da9c: 0xa4400044  sh          $zero, 0x44($v0)
    ctx->pc = 0x29da9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x29daa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29daa4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29daa8: 0xa4400048  sh          $zero, 0x48($v0)
    ctx->pc = 0x29daa8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x29daac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dab0: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x29dab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x29dab4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x29dab4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x29dab8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29dab8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29dabc: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x29DABCu;
    SET_GPR_U32(ctx, 31, 0x29DAC4u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x29DABCu, 0x29DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAC4u;
label_29dac4:
    // 0x29dac4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x29dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x29dac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29dac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29dacc: 0x0  nop
    ctx->pc = 0x29daccu;
    // NOP
    // 0x29dad0: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x29dad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x29dad4: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x29dad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x29dad8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x29dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x29dadc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29dadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29dae0: 0x0  nop
    ctx->pc = 0x29dae0u;
    // NOP
    // 0x29dae4: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x29dae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x29dae8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29daec: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x29daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29daf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29daf4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x29daf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dafc: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x29dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x29db00: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x29db00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x29db04: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x29db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x29db08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29db08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29db0c: 0x0  nop
    ctx->pc = 0x29db0cu;
    // NOP
    // 0x29db10: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x29db10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x29db14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29db14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29db18: 0x0  nop
    ctx->pc = 0x29db18u;
    // NOP
    // 0x29db1c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x29db1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x29db20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db24: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29db28: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29db28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x29db2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x29db30: 0x24436a80  addiu       $v1, $v0, 0x6A80
    ctx->pc = 0x29db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27264));
    // 0x29db34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db38: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x29db38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x29db3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29db40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db44: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x29db44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x29db48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29db4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db50: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x29db50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x29db54: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x29db54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x29db58: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x29db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x29db5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29db5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29db60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db64: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x29db64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x29db68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db6c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x29db6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x29db70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db74: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x29db74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x29db78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db7c: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x29db7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x29db80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db84: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x29db84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x29db88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29db88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29db8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db90: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x29db90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x29db94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29db94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29db98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29db9c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x29db9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x29dba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29dba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29dba4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dba8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x29dba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x29dbac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dbb0: 0xc0b3928  jal         func_2CE4A0
    ctx->pc = 0x29DBB0u;
    SET_GPR_U32(ctx, 31, 0x29DBB8u);
    ctx->pc = 0x2CE4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE4A0u, 0x29DBB0u, 0x29DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBB8u;
label_29dbb8:
    // 0x29dbb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dbbc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29dbc0: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x29dbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x29dbc4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29dbc8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x29dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x29dbcc: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x29dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x29dbd0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x29dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x29dbd4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x29dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x29dbd8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x29dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x29dbdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dbe0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29dbe4: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x29dbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x29dbe8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29dbec: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x29dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x29dbf0: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x29dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x29dbf4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x29dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x29dbf8: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x29dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x29dbfc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x29dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x29dc00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dc04: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29dc08: 0x24500360  addiu       $s0, $v0, 0x360
    ctx->pc = 0x29dc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x29dc0c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc10: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x29dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x29dc14: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc18: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x29dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x29dc1c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc20: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x29dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x29dc24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dc28: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29dc2c: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x29dc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x29dc30: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc34: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x29dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x29dc38: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc3c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x29dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x29dc40: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc44: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x29dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x29dc48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dc4c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29dc50: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x29dc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x29dc54: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc58: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x29dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x29dc5c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x29dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x29dc64: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc68: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x29dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x29dc6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dc70: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29dc74: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x29dc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x29dc78: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc7c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x29dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x29dc80: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc84: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x29dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x29dc88: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x29dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dc8c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x29dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x29dc90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dc94: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29dc98: 0x24500ab0  addiu       $s0, $v0, 0xAB0
    ctx->pc = 0x29dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x29dc9c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x29dc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dca0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dca4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dca8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29dca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29dcac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x29dcacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29dcb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29dcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dcb4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29dcb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29dcb8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29DCB8u;
    SET_GPR_U32(ctx, 31, 0x29DCC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29DCB8u, 0x29DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCC0u;
label_29dcc0:
    // 0x29dcc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dcc4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29dcc8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29DCC8u;
    SET_GPR_U32(ctx, 31, 0x29DCD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29DCC8u, 0x29DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCD0u;
label_29dcd0:
    // 0x29dcd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dcd4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x29DCD4u;
    SET_GPR_U32(ctx, 31, 0x29DCDCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x29DCD4u, 0x29DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCDCu;
label_29dcdc:
    // 0x29dcdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dce0: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x29dce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x29dce4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29dce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29dce8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x29dce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x29dcec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x29DCECu;
    {
        const bool branch_taken_0x29dcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dcec) {
            ctx->pc = 0x29DD20u;
            goto label_29dd20;
        }
    }
    ctx->pc = 0x29DCF4u;
    // 0x29dcf4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29dcf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dcfc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29dcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29dd00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dd04: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x29dd04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dd08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dd0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29dd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dd10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dd14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29dd14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dd18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dd1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29dd20:
    // 0x29dd20: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29dd20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dd24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29dd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dd28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29dd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dd2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29dd2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29dd30: 0x3e00008  jr          $ra
    ctx->pc = 0x29DD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DD38u;
}
