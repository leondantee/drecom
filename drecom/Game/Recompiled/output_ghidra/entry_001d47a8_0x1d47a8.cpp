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

// Function: entry_001d47a8
// Address: 0x1d47a8 - 0x1d47bc
void entry_001d47a8_0x1d47a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d47a8_0x1d47a8");
#endif

    ctx->pc = 0x1d47a8u;

    // 0x1d47a8: 0x8fb00180  lw          $s0, 0x180($sp)
    ctx->pc = 0x1d47a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d47ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d47b0: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1d47b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1d47b4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1D47B4u;
    {
        const bool branch_taken_0x1d47b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47b4) {
            ctx->pc = 0x1D48A0u;
            return;
        }
    }
    ctx->pc = 0x1D47BCu;
}
