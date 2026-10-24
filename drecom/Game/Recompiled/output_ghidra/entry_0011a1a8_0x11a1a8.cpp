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

// Function: entry_0011a1a8
// Address: 0x11a1a8 - 0x11a1cc
void entry_0011a1a8_0x11a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a1a8_0x11a1a8");
#endif

    ctx->pc = 0x11a1a8u;

    // 0x11a1a8: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A1A8u;
    {
        const bool branch_taken_0x11a1a8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1A8u;
        // 0x11a1ac: 0x2bc20002  slti        $v0, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1a8) {
            ctx->pc = 0x11A1CCu;
            return;
        }
    }
    ctx->pc = 0x11A1B0u;
    // 0x11a1b0: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x11a1b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a1b4: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x11a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x11a1b8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x11a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x11a1bc: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x11a1bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11a1c0: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x11a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
    // 0x11a1c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11A1C4u;
    {
        const bool branch_taken_0x11a1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1C4u;
        // 0x11a1c8: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1c4) {
            ctx->pc = 0x11A250u;
            return;
        }
    }
    ctx->pc = 0x11A1CCu;
}
