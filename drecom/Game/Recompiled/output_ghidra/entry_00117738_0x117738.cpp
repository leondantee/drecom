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

// Function: entry_00117738
// Address: 0x117738 - 0x117748
void entry_00117738_0x117738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117738_0x117738");
#endif

    switch (ctx->pc) {
        case 0x117740u: goto label_117740;
        default: break;
    }

    ctx->pc = 0x117738u;

    // 0x117738: 0xc046346  jal         func_118D18
    ctx->pc = 0x117738u;
    SET_GPR_U32(ctx, 31, 0x117740u);
    ctx->pc = 0x11773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117738u;
    // 0x11773c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D18u;
    {
        ctx->pc = 0x117740u;
        ps2_stubs::__malloc_unlock(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117740u) { return; }
    ctx->pc = 0x117740u;
label_117740:
    // 0x117740: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x117740u;
    {
        const bool branch_taken_0x117740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117740u;
        // 0x117744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117740) {
            ctx->pc = 0x11777Cu;
            return;
        }
    }
    ctx->pc = 0x117748u;
}
