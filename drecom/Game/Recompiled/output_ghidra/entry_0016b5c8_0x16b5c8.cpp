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

// Function: entry_0016b5c8
// Address: 0x16b5c8 - 0x16b804
void entry_0016b5c8_0x16b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b5c8_0x16b5c8");
#endif

    switch (ctx->pc) {
        case 0x16b7c0u: goto label_16b7c0;
        default: break;
    }

    ctx->pc = 0x16b5c8u;

    // 0x16b5c8: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x16b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x16b5cc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16b5ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16b5d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5d4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16b5d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b5e0: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x16b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16b5e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16b5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16b5e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5ec: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x16b5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b5f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5f4: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x16b5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x16b5f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b5fc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b600: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x16b600u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b604: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b608: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b60c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x16b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x16b610: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x16b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x16b614: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b618: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x16b618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x16b61c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x16b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16b620: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b624: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x16b624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x16b628: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16b628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b62c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b634: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b638: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b63c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b63cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b640: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b644: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x16b644u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b648: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b64c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b650: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b654: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b658: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b65c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b65cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b660: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b664: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x16b664u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b668: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b66c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b670: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16b674: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b678: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b67c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b67cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b680: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b684: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x16b684u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b688: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b68c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b694: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b698: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b69c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b69cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b6a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6a4: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x16b6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b6a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b6b0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b6b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b6b8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b6bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b6bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b6c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6c4: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x16b6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b6c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b6d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16b6d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b6d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b6dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b6dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b6e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6e4: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x16b6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b6e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b6ec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b6f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b6f8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b6fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b6fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b700: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b704: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x16b704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b708: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b70c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b710: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16b714: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b718: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b71c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b71cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b720: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b724: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x16b724u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b728: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b72c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b730: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16b734: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b738: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b73c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b73cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b740: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b744: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x16b744u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b748: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b74c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b754: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b758: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b75c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b75cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b760: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b764: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x16b764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b768: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b76c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b770: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16b774: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b778: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b77c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b77cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b780: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b784: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x16b784u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b788: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b78c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b790: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16b794: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b798: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b79c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b79cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b7a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7a4: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x16b7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b7a8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16b7ac: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16b7b0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x16b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16b7b4: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x16b7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x16b7b8: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x16B7B8u;
    SET_GPR_U32(ctx, 31, 0x16B7C0u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x16B7B8u, 0x16B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7C0u;
label_16b7c0:
    // 0x16b7c0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x16b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7c4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7c8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x16b7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x16b7cc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x16b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7d0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7d4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x16b7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x16b7d8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7dc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7e0: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x16b7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x16b7e4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7e8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x16b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x16b7ec: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x16b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16b7f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B7F0u;
    {
        const bool branch_taken_0x16b7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7f0) {
            ctx->pc = 0x16B804u;
            return;
        }
    }
    ctx->pc = 0x16B7F8u;
    // 0x16b7f8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x16b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16b7fc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b800: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x16b800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    ctx->pc = 0x16b804u;
}
