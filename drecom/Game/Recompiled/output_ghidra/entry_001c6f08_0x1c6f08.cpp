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

// Function: entry_001c6f08
// Address: 0x1c6f08 - 0x1c6f20
void entry_001c6f08_0x1c6f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6f08_0x1c6f08");
#endif

    ctx->pc = 0x1c6f08u;

    // 0x1c6f08: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6f0c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1c6f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c6f10: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1c6f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c6f14: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1c6f14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c6f18: 0x10000512  b           . + 4 + (0x512 << 2)
    ctx->pc = 0x1C6F18u;
    {
        const bool branch_taken_0x1c6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f18) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6F20u;
}
