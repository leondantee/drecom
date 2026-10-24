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

// Function: entry_00162a24
// Address: 0x162a24 - 0x162a30
void entry_00162a24_0x162a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162a24_0x162a24");
#endif

    ctx->pc = 0x162a24u;

    // 0x162a24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162a28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x162A28u;
    {
        const bool branch_taken_0x162a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a28) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162A30u;
}
