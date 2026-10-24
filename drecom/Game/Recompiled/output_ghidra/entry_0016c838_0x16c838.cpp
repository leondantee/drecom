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

// Function: entry_0016c838
// Address: 0x16c838 - 0x16c884
void entry_0016c838_0x16c838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c838_0x16c838");
#endif

    ctx->pc = 0x16c838u;

    // 0x16c838: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x16c83c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16c83cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16c840: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c844: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16c844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16c848: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c84c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c850: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x16c850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16c854: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16c858: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c85c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x16c85cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c860: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x16c860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16c864: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16c868: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c86c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C86Cu;
    {
        const bool branch_taken_0x16c86c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c86c) {
            ctx->pc = 0x16C884u;
            return;
        }
    }
    ctx->pc = 0x16C874u;
    // 0x16c874: 0x8fb400a4  lw          $s4, 0xA4($sp)
    ctx->pc = 0x16c874u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16c878: 0x8fb700b4  lw          $s7, 0xB4($sp)
    ctx->pc = 0x16c878u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16c87c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C87Cu;
    {
        const bool branch_taken_0x16c87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c87c) {
            ctx->pc = 0x16C890u;
            return;
        }
    }
    ctx->pc = 0x16C884u;
}
