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

// Function: entry_001f163c
// Address: 0x1f163c - 0x1f169c
void entry_001f163c_0x1f163c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f163c_0x1f163c");
#endif

    ctx->pc = 0x1f163cu;

    // 0x1f163c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f1640: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f1640u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f1644: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f1644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f1648: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f1648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f164c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F164Cu;
    {
        const bool branch_taken_0x1f164c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f164c) {
            ctx->pc = 0x1F169Cu;
            return;
        }
    }
    ctx->pc = 0x1F1654u;
    // 0x1f1654: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1658: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1f1658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1f165c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f1660: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1f1660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1f1664: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1664u;
    {
        const bool branch_taken_0x1f1664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1664) {
            ctx->pc = 0x1F169Cu;
            return;
        }
    }
    ctx->pc = 0x1F166Cu;
    // 0x1f166c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1670: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1674: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f1674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f1678: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1f1678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f167c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1680: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f1680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f1684: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1688: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1f1688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f168c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1690: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f1690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1694: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1698: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f1698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1f169cu;
}
