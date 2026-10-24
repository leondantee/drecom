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

// Function: entry_00118210
// Address: 0x118210 - 0x118224
void entry_00118210_0x118210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118210_0x118210");
#endif

    ctx->pc = 0x118210u;

    // 0x118210: 0x111a42  srl         $v1, $s1, 9
    ctx->pc = 0x118210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
    // 0x118214: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118214u;
    {
        const bool branch_taken_0x118214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118214u;
        // 0x118218: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118214) {
            ctx->pc = 0x118224u;
            return;
        }
    }
    ctx->pc = 0x11821Cu;
    // 0x11821c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11821Cu;
    {
        const bool branch_taken_0x11821c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11821Cu;
        // 0x118220: 0x1158c2  srl         $t3, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11821c) {
            ctx->pc = 0x118280u;
            return;
        }
    }
    ctx->pc = 0x118224u;
}
