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

// Function: entry_00189398
// Address: 0x189398 - 0x1893b4
void entry_00189398_0x189398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189398_0x189398");
#endif

    ctx->pc = 0x189398u;

    // 0x189398: 0x8e100120  lw          $s0, 0x120($s0)
    ctx->pc = 0x189398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x18939c: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18939Cu;
    {
        const bool branch_taken_0x18939c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18939c) {
            ctx->pc = 0x189348u;
            return;
        }
    }
    ctx->pc = 0x1893A4u;
    // 0x1893a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1893a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1893a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1893ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1893acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1893b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1893b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1893b4u;
}
