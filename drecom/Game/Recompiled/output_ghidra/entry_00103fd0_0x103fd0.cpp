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

// Function: entry_00103fd0
// Address: 0x103fd0 - 0x103fe8
void entry_00103fd0_0x103fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103fd0_0x103fd0");
#endif

    ctx->pc = 0x103fd0u;

    // 0x103fd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x103fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103fd4: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103FD4u;
    {
        const bool branch_taken_0x103fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x103fd4) {
            ctx->pc = 0x103FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103FD4u;
            // 0x103fd8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103FE8u;
            return;
        }
    }
    ctx->pc = 0x103FDCu;
    // 0x103fdc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x103fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x103fe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103FE0u;
    {
        const bool branch_taken_0x103fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE0u;
        // 0x103fe4: 0x8c423e4c  lw          $v0, 0x3E4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fe0) {
            ctx->pc = 0x103FECu;
            return;
        }
    }
    ctx->pc = 0x103FE8u;
}
