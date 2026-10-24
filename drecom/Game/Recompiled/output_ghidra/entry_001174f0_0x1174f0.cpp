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

// Function: entry_001174f0
// Address: 0x1174f0 - 0x117504
void entry_001174f0_0x1174f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001174f0_0x1174f0");
#endif

    ctx->pc = 0x1174f0u;

    // 0x1174f0: 0x91a42  srl         $v1, $t1, 9
    ctx->pc = 0x1174f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x1174f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1174F4u;
    {
        const bool branch_taken_0x1174f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1174F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174F4u;
        // 0x1174f8: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174f4) {
            ctx->pc = 0x117504u;
            return;
        }
    }
    ctx->pc = 0x1174FCu;
    // 0x1174fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1174FCu;
    {
        const bool branch_taken_0x1174fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174FCu;
        // 0x117500: 0x930c2  srl         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174fc) {
            ctx->pc = 0x117560u;
            return;
        }
    }
    ctx->pc = 0x117504u;
}
