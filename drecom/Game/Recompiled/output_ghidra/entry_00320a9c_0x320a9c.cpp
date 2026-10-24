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

// Function: entry_00320a9c
// Address: 0x320a9c - 0x320ab4
void entry_00320a9c_0x320a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320a9c_0x320a9c");
#endif

    ctx->pc = 0x320a9cu;

    // 0x320a9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320aa0: 0x9085034f  lbu         $a1, 0x34F($a0)
    ctx->pc = 0x320aa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x320aa4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x320aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x320aa8: 0xa083034f  sb          $v1, 0x34F($a0)
    ctx->pc = 0x320aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x320aac: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x320AACu;
    {
        const bool branch_taken_0x320aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320aac) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320AB4u;
}
