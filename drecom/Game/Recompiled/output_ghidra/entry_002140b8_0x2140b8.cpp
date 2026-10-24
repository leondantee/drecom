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

// Function: entry_002140b8
// Address: 0x2140b8 - 0x2140c4
void entry_002140b8_0x2140b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002140b8_0x2140b8");
#endif

    ctx->pc = 0x2140b8u;

    // 0x2140b8: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x2140b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2140bc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2140BCu;
    {
        const bool branch_taken_0x2140bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2140C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140BCu;
        // 0x2140c0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140bc) {
            ctx->pc = 0x214050u;
            return;
        }
    }
    ctx->pc = 0x2140C4u;
}
