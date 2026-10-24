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

// Function: entry_0011a324
// Address: 0x11a324 - 0x11a338
void entry_0011a324_0x11a324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a324_0x11a324");
#endif

    ctx->pc = 0x11a324u;

    // 0x11a324: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x11a324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a328: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x11a328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11a32c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x11A32Cu;
    {
        const bool branch_taken_0x11a32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A32Cu;
        // 0x11a330: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a32c) {
            ctx->pc = 0x11A3F0u;
            return;
        }
    }
    ctx->pc = 0x11A334u;
    // 0x11a334: 0x0  nop
    ctx->pc = 0x11a334u;
    // NOP
    ctx->pc = 0x11a338u;
}
