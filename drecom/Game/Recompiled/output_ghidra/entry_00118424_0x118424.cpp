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

// Function: entry_00118424
// Address: 0x118424 - 0x118438
void entry_00118424_0x118424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118424_0x118424");
#endif

    ctx->pc = 0x118424u;

    // 0x118424: 0x81a42  srl         $v1, $t0, 9
    ctx->pc = 0x118424u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
    // 0x118428: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118428u;
    {
        const bool branch_taken_0x118428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118428u;
        // 0x11842c: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118428) {
            ctx->pc = 0x118438u;
            return;
        }
    }
    ctx->pc = 0x118430u;
    // 0x118430: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x118430u;
    {
        const bool branch_taken_0x118430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118430u;
        // 0x118434: 0x830c2  srl         $a2, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118430) {
            ctx->pc = 0x118494u;
            return;
        }
    }
    ctx->pc = 0x118438u;
}
