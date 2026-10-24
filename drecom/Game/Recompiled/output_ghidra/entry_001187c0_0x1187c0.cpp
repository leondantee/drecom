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

// Function: entry_001187c0
// Address: 0x1187c0 - 0x1187d0
void entry_001187c0_0x1187c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001187c0_0x1187c0");
#endif

    switch (ctx->pc) {
        case 0x1187c8u: goto label_1187c8;
        default: break;
    }

    ctx->pc = 0x1187c0u;

    // 0x1187c0: 0xc046346  jal         func_118D18
    ctx->pc = 0x1187C0u;
    SET_GPR_U32(ctx, 31, 0x1187C8u);
    ctx->pc = 0x1187C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187C0u;
    // 0x1187c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D18u;
    {
        ctx->pc = 0x1187C8u;
        ps2_stubs::__malloc_unlock(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1187C8u) { return; }
    ctx->pc = 0x1187C8u;
label_1187c8:
    // 0x1187c8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1187C8u;
    {
        const bool branch_taken_0x1187c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187C8u;
        // 0x1187cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187c8) {
            ctx->pc = 0x1188C0u;
            return;
        }
    }
    ctx->pc = 0x1187D0u;
}
