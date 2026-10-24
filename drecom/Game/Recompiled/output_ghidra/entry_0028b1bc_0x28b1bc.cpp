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

// Function: entry_0028b1bc
// Address: 0x28b1bc - 0x28b1e8
void entry_0028b1bc_0x28b1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b1bc_0x28b1bc");
#endif

    ctx->pc = 0x28b1bcu;

    // 0x28b1bc: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x28b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28b1c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b1c4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28B1C4u;
    {
        const bool branch_taken_0x28b1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b1c4) {
            ctx->pc = 0x28B260u;
            return;
        }
    }
    ctx->pc = 0x28B1CCu;
    // 0x28b1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b1d0: 0x10650015  beq         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B1D0u;
    {
        const bool branch_taken_0x28b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x28b1d0) {
            ctx->pc = 0x28B228u;
            return;
        }
    }
    ctx->pc = 0x28B1D8u;
    // 0x28b1d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B1D8u;
    {
        const bool branch_taken_0x28b1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1d8) {
            ctx->pc = 0x28B1E8u;
            return;
        }
    }
    ctx->pc = 0x28B1E0u;
    // 0x28b1e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28B1E0u;
    {
        const bool branch_taken_0x28b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1e0) {
            ctx->pc = 0x28B260u;
            return;
        }
    }
    ctx->pc = 0x28B1E8u;
}
