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

// Function: Em1a_R0_init
// Address: 0x35ff20 - 0x3600a0
void Em1a_R0_init_0x35ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_R0_init_0x35ff20");
#endif

    switch (ctx->pc) {
        case 0x35ff78u: goto label_35ff78;
        default: break;
    }

    ctx->pc = 0x35ff20u;

    // 0x35ff20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ff24: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35ff28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ff2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ff30: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x35ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x35ff34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ff38: 0x24511330  addiu       $s1, $v0, 0x1330
    ctx->pc = 0x35ff38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35ff3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ff40: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x35ff40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x35ff44: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x35ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x35ff48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ff48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ff4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ff50: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x35ff50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x35ff54: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x35ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x35ff58: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35ff5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ff5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ff60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ff64: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x35ff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x35ff68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x35ff68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35ff6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35ff6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ff70: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x35FF70u;
    SET_GPR_U32(ctx, 31, 0x35FF78u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x35FF70u, 0x35FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF78u;
label_35ff78:
    // 0x35ff78: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x35ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x35ff7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ff7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ff80: 0x0  nop
    ctx->pc = 0x35ff80u;
    // NOP
    // 0x35ff84: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x35ff84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x35ff88: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x35ff88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x35ff8c: 0x3c0343e7  lui         $v1, 0x43E7
    ctx->pc = 0x35ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17383 << 16));
    // 0x35ff90: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x35ff90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x35ff94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ff94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ff98: 0x0  nop
    ctx->pc = 0x35ff98u;
    // NOP
    // 0x35ff9c: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x35ff9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x35ffa0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x35ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x35ffa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ffa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ffa8: 0x0  nop
    ctx->pc = 0x35ffa8u;
    // NOP
    // 0x35ffac: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x35ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x35ffb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ffb4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x35ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x35ffb8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x35ffbc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x35ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x35ffc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ffc4: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x35ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x35ffc8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x35ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x35ffcc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35ffd0: 0x2464ab50  addiu       $a0, $v1, -0x54B0
    ctx->pc = 0x35ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945616));
    // 0x35ffd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ffd8: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x35ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x35ffdc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x35ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x35ffe0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ffe4: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x35ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x35ffe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ffec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35fff0: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x35fff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fff4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35fff8: 0x2464abd0  addiu       $a0, $v1, -0x5430
    ctx->pc = 0x35fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945744));
    // 0x35fffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360000: 0xac640354  sw          $a0, 0x354($v1)
    ctx->pc = 0x360000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 852), GPR_U32(ctx, 4));
    // 0x360004: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x360004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360008: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x360008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36000c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x36000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x360010: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x360010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x360014: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x360014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x360018: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x360018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x36001c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36001cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360024: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x360024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x360028: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x360028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x36002c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x36002cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x360030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360038: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x360038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x36003c: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x36003cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x360040: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x360040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x360044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36004c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x36004cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x360050: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x360050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x360054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360058: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x360058u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x36005c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36005cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360064: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360068: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36006c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36006cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360070: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360074: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360078: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36007c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36007cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360080: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360084: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x360088: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x360088u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36008c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36008cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360094: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x360094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360098: 0x3e00008  jr          $ra
    ctx->pc = 0x360098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3600A0u;
}
