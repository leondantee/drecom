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

// Function: entry_001104d4
// Address: 0x1104d4 - 0x1104f4
void entry_001104d4_0x1104d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001104d4_0x1104d4");
#endif

    ctx->pc = 0x1104d4u;

    // 0x1104d4: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1104d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1104d8: 0x26075280  addiu       $a3, $s0, 0x5280
    ctx->pc = 0x1104d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 21120));
    // 0x1104dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1104DCu;
    {
        const bool branch_taken_0x1104dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104DCu;
        // 0x1104e0: 0xae045280  sw          $a0, 0x5280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 21120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104dc) {
            ctx->pc = 0x1104F4u;
            return;
        }
    }
    ctx->pc = 0x1104E4u;
    // 0x1104e4: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x1104e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x1104e8: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x1104e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x1104ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1104ECu;
    {
        const bool branch_taken_0x1104ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104ECu;
        // 0x1104f0: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104ec) {
            ctx->pc = 0x110520u;
            return;
        }
    }
    ctx->pc = 0x1104F4u;
}
