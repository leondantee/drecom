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

// Function: entry_0016baf8
// Address: 0x16baf8 - 0x16bd14
void entry_0016baf8_0x16baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016baf8_0x16baf8");
#endif

    switch (ctx->pc) {
        case 0x16bcd0u: goto label_16bcd0;
        default: break;
    }

    ctx->pc = 0x16baf8u;

    // 0x16baf8: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x16baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x16bafc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16bafcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16bb00: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb04: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16bb08: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bb10: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x16bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16bb14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16bb18: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb1c: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x16bb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb20: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x16bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x16bb24: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb28: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x16bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x16bb2c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16bb30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb34: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x16bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x16bb38: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16bb3c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bb44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bb48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bb4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bb4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bb50: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb54: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x16bb54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bb60: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16bb64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bb68: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bb6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bb6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bb70: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb74: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x16bb74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb78: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb7c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bb80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16bb84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bb88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bb8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bb8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bb90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb94: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x16bb94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb98: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16bb9c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bba4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bba8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bbac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bbacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bbb0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbb4: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x16bbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bbb8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bbc0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16bbc4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bbc8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bbcc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bbccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bbd0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbd4: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x16bbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bbd8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbdc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bbe0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16bbe4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bbe8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bbec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bbecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bbf0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbf4: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x16bbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bbf8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16bbfc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bc04: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bc08: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc10: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc14: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x16bc14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc18: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bc20: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16bc24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bc28: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc34: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x16bc34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc38: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc3c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bc40: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16bc44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bc48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc50: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc54: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x16bc54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc58: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16bc5c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bc64: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bc68: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc70: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc74: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x16bc74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc78: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bc80: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16bc84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bc88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc94: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x16bc94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc98: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc9c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bca0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bca4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bca8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bcac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bcacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bcb0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcb4: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x16bcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bcb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16bcbc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16bcc0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16bcc4: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x16bcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x16bcc8: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x16BCC8u;
    SET_GPR_U32(ctx, 31, 0x16BCD0u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x16BCC8u, 0x16BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCD0u;
label_16bcd0:
    // 0x16bcd0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x16bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bcd4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcd8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x16bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x16bcdc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x16bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bce0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bce4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x16bce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x16bce8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bcec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcf0: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x16bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x16bcf4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcf8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x16bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x16bcfc: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x16bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16bd00: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BD00u;
    {
        const bool branch_taken_0x16bd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd00) {
            ctx->pc = 0x16BD14u;
            return;
        }
    }
    ctx->pc = 0x16BD08u;
    // 0x16bd08: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x16bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16bd0c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bd10: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x16bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    ctx->pc = 0x16bd14u;
}
