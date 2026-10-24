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

// Function: entry_001b00b8
// Address: 0x1b00b8 - 0x1b0180
void entry_001b00b8_0x1b00b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b00b8_0x1b00b8");
#endif

    ctx->pc = 0x1b00b8u;

    // 0x1b00b8: 0x8ee60a68  lw          $a2, 0xA68($s7)
    ctx->pc = 0x1b00b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b00bc: 0xafa604b4  sw          $a2, 0x4B4($sp)
    ctx->pc = 0x1b00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 6));
    // 0x1b00c0: 0x8fa504c8  lw          $a1, 0x4C8($sp)
    ctx->pc = 0x1b00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1b00c4: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x1b00c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b00c8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b00cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b00d0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b00d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b00d4: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1b00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1b00d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b00dc: 0xac660050  sw          $a2, 0x50($v1)
    ctx->pc = 0x1b00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 6));
    // 0x1b00e0: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b00e4: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x1b00e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b00e8: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b00ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b00f0: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b00f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b00f4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b00f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b00f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b00fc: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b00fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0100: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1b0100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1b0104: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b010c: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0110: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1b0114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0118: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b011c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1b011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1b0120: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0124: 0xa0600019  sb          $zero, 0x19($v1)
    ctx->pc = 0x1b0124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0128: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x1b0128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1b012c: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0130: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1b0130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b0134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0138: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b013c: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1b0140: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0144: 0xa060001b  sb          $zero, 0x1B($v1)
    ctx->pc = 0x1b0144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0148: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x1b0148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1b014c: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0150: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x1b0150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b0154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0158: 0x8fa304b4  lw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b015c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1b015cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1b0160: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1b0160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1b0164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0168: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x1b0168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1b016c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b016cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b0170: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b0174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0178: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
    // 0x1b017c: 0x0  nop
    ctx->pc = 0x1b017cu;
    // NOP
    ctx->pc = 0x1b0180u;
}
