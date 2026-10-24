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

// Function: entry_001171bc
// Address: 0x1171bc - 0x1171c8
void entry_001171bc_0x1171bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171bc_0x1171bc");
#endif

    ctx->pc = 0x1171bcu;

    // 0x1171bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1171bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1171c0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1171C0u;
    {
        const bool branch_taken_0x1171c0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1171C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171C0u;
        // 0x1171c4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c0) {
            ctx->pc = 0x1171DCu;
            return;
        }
    }
    ctx->pc = 0x1171C8u;
}
