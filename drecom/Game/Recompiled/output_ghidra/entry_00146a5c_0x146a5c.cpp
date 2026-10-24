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

// Function: entry_00146a5c
// Address: 0x146a5c - 0x146a70
void entry_00146a5c_0x146a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146a5c_0x146a5c");
#endif

    ctx->pc = 0x146a5cu;

    // 0x146a5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x146a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x146a60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146a64: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x146a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x146a68: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x146A68u;
    {
        const bool branch_taken_0x146a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a68) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146A70u;
}
