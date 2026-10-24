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

// Function: entry_0016c988
// Address: 0x16c988 - 0x16cbe8
void entry_0016c988_0x16c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c988_0x16c988");
#endif

    switch (ctx->pc) {
        case 0x16cb48u: goto label_16cb48;
        default: break;
    }

    ctx->pc = 0x16c988u;

    // 0x16c988: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x16c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x16c98c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16c98cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16c990: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c994: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16c994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16c998: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c99c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c9a0: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x16c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16c9a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16c9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16c9a8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9ac: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x16c9acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c9b0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c9b4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c9bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c9c0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c9c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c9c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c9c8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9cc: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x16c9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c9d0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16c9d8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16c9dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c9e0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c9e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c9e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c9e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9ec: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x16c9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c9f0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c9f4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c9f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c9fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ca00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca08: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca0c: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x16ca0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca10: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16ca14: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ca1c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ca20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca28: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca2c: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x16ca2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca30: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ca38: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ca3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ca40: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca48: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca4c: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x16ca4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca50: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16ca58: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16ca5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ca60: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca68: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca6c: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x16ca6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca70: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16ca74: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ca7c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ca80: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16ca84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16ca84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16ca88: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca8c: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x16ca8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ca90: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16ca94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ca98: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16ca9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16caa0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16caa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16caa4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16caa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16caa8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16caac: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x16caacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cab0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cab4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16cab8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x16cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16cabc: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x16cabcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cac0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x16cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16cac4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cac8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cacc: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x16caccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cad0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x16cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16cad4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cadc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cae0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cae4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cae4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cae8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16caec: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x16caecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x16caf0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16caf4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16caf8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16cafc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16cb00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cb04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cb04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cb08: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb0c: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x16cb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cb10: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb14: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16cb18: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16cb1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16cb20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16cb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16cb24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16cb24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16cb28: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb2c: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x16cb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cb30: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16cb34: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16cb38: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16cb3c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16cb40: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x16CB40u;
    SET_GPR_U32(ctx, 31, 0x16CB48u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x16CB40u, 0x16CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB48u;
label_16cb48:
    // 0x16cb48: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x16cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb4c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb50: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x16cb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x16cb54: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x16cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb58: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb5c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x16cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x16cb60: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x16cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb64: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x16cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb68: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x16cb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x16cb6c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x16cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb70: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cb74: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x16cb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x16cb78: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x16cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb7c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cb80: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x16cb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x16cb84: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x16cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb88: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cb8c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x16cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x16cb90: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cb94: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x16cb94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16cb98: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x16cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cb9c: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x16cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x16cba0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cba4: 0x94430014  lhu         $v1, 0x14($v0)
    ctx->pc = 0x16cba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16cba8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbac: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x16cbacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x16cbb0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cbb4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x16cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16cbb8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbbc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x16cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x16cbc0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cbc4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x16cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x16cbc8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbcc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x16cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x16cbd0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16cbd4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x16cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x16cbd8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbdc: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x16cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x16cbe0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16cbe4: 0x0  nop
    ctx->pc = 0x16cbe4u;
    // NOP
    ctx->pc = 0x16cbe8u;
}
