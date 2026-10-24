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

// Function: entry_0010635c
// Address: 0x10635c - 0x106384
void entry_0010635c_0x10635c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010635c_0x10635c");
#endif

    ctx->pc = 0x10635cu;

    // 0x10635c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x10635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x106360: 0x266541f8  addiu       $a1, $s3, 0x41F8
    ctx->pc = 0x106360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16888));
    // 0x106364: 0x8ca30280  lw          $v1, 0x280($a1)
    ctx->pc = 0x106364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x106368: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x106368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10636c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106370: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x106370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x106374: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x106374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x106378: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x106378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x10637c: 0x1000ffa0  b           . + 4 + (-0x60 << 2)
    ctx->pc = 0x10637Cu;
    {
        const bool branch_taken_0x10637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10637Cu;
        // 0x106380: 0xaca30280  sw          $v1, 0x280($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10637c) {
            ctx->pc = 0x106200u;
            return;
        }
    }
    ctx->pc = 0x106384u;
}
