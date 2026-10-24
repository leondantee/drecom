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

// Function: entry_001fe4a0
// Address: 0x1fe4a0 - 0x1fe4b8
void entry_001fe4a0_0x1fe4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe4a0_0x1fe4a0");
#endif

    ctx->pc = 0x1fe4a0u;

    // 0x1fe4a0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4a4: 0x90a4034f  lbu         $a0, 0x34F($a1)
    ctx->pc = 0x1fe4a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 847)));
    // 0x1fe4a8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe4ac: 0xa0a3034f  sb          $v1, 0x34F($a1)
    ctx->pc = 0x1fe4acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe4b0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1FE4B0u;
    {
        const bool branch_taken_0x1fe4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4b0) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE4B8u;
}
