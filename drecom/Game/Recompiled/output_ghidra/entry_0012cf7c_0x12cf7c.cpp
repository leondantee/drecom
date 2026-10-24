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

// Function: entry_0012cf7c
// Address: 0x12cf7c - 0x12cf90
void entry_0012cf7c_0x12cf7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cf7c_0x12cf7c");
#endif

    ctx->pc = 0x12cf7cu;

    // 0x12cf7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cf80: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12cf84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12cf88: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x12CF88u;
    {
        const bool branch_taken_0x12cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf88) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CF90u;
}
