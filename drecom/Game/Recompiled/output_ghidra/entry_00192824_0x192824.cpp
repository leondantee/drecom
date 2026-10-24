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

// Function: entry_00192824
// Address: 0x192824 - 0x192870
void entry_00192824_0x192824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192824_0x192824");
#endif

    ctx->pc = 0x192824u;

    // 0x192824: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192828: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x192828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19282c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192834: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192838: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x19283c: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x19283cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x192840: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x192844: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x192844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x192848: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19284c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x192850: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x192850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x192854: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x192854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x192858: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x192858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19285c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19285cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x192860: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x192860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x192864: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x192864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192868: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19286c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19286cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x192870u;
}
