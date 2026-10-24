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

// Function: entry_003796c8
// Address: 0x3796c8 - 0x3796dc
void entry_003796c8_0x3796c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003796c8_0x3796c8");
#endif

    ctx->pc = 0x3796c8u;

    // 0x3796c8: 0x24047f80  addiu       $a0, $zero, 0x7F80
    ctx->pc = 0x3796c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32640));
    // 0x3796cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3796ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3796d0: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x3796d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x3796d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3796D4u;
    {
        const bool branch_taken_0x3796d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3796d4) {
            ctx->pc = 0x379758u;
            return;
        }
    }
    ctx->pc = 0x3796DCu;
}
