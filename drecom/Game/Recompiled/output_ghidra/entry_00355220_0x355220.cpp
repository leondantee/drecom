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

// Function: entry_00355220
// Address: 0x355220 - 0x355234
void entry_00355220_0x355220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355220_0x355220");
#endif

    ctx->pc = 0x355220u;

    // 0x355220: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x355220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355224: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355228: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x355228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x35522c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x35522Cu;
    {
        const bool branch_taken_0x35522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35522c) {
            ctx->pc = 0x3552F8u;
            return;
        }
    }
    ctx->pc = 0x355234u;
}
