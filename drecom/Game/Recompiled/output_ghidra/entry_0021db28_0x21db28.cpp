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

// Function: entry_0021db28
// Address: 0x21db28 - 0x21db40
void entry_0021db28_0x21db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021db28_0x21db28");
#endif

    ctx->pc = 0x21db28u;

    // 0x21db28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x21db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db2c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x21db2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x21db30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21db34: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x21db34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x21db38: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x21DB38u;
    {
        const bool branch_taken_0x21db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21db38) {
            ctx->pc = 0x21DD28u;
            return;
        }
    }
    ctx->pc = 0x21DB40u;
}
