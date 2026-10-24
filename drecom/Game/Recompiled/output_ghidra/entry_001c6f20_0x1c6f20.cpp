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

// Function: entry_001c6f20
// Address: 0x1c6f20 - 0x1c6f34
void entry_001c6f20_0x1c6f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6f20_0x1c6f20");
#endif

    ctx->pc = 0x1c6f20u;

    // 0x1c6f20: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1c6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6f24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6f28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c6f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6f2c: 0x1000050d  b           . + 4 + (0x50D << 2)
    ctx->pc = 0x1C6F2Cu;
    {
        const bool branch_taken_0x1c6f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f2c) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6F34u;
}
