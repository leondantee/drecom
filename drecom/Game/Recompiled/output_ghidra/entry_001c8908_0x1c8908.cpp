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

// Function: entry_001c8908
// Address: 0x1c8908 - 0x1c8920
void entry_001c8908_0x1c8908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8908_0x1c8908");
#endif

    ctx->pc = 0x1c8908u;

    // 0x1c8908: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c890c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8910: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c8910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c8914: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c8914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8918: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x1C8918u;
    {
        const bool branch_taken_0x1c8918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8918) {
            ctx->pc = 0x1C8F88u;
            return;
        }
    }
    ctx->pc = 0x1C8920u;
}
