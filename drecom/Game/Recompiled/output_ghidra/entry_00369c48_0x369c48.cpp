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

// Function: entry_00369c48
// Address: 0x369c48 - 0x369c60
void entry_00369c48_0x369c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369c48_0x369c48");
#endif

    ctx->pc = 0x369c48u;

    // 0x369c48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c4c: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x369c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x369c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x369c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369c54: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x369c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x369c58: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x369C58u;
    {
        const bool branch_taken_0x369c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369c58) {
            ctx->pc = 0x369F7Cu;
            return;
        }
    }
    ctx->pc = 0x369C60u;
}
