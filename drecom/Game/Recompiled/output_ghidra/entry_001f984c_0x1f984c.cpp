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

// Function: entry_001f984c
// Address: 0x1f984c - 0x1f987c
void entry_001f984c_0x1f984c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f984c_0x1f984c");
#endif

    ctx->pc = 0x1f984cu;

    // 0x1f984c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9850: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9854: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1f9854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f9858: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9858u;
    {
        const bool branch_taken_0x1f9858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9858) {
            ctx->pc = 0x1F987Cu;
            return;
        }
    }
    ctx->pc = 0x1F9860u;
    // 0x1f9860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f9860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9864: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9868: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x1f9868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f986c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f986cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f9870: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1f9870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1f9874: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x1f9874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x1f9878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1f987cu;
}
