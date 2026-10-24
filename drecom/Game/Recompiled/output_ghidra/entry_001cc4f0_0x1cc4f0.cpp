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

// Function: entry_001cc4f0
// Address: 0x1cc4f0 - 0x1cc4fc
void entry_001cc4f0_0x1cc4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc4f0_0x1cc4f0");
#endif

    ctx->pc = 0x1cc4f0u;

    // 0x1cc4f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cc4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cc4f4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc4f8: 0xacc51b60  sw          $a1, 0x1B60($a2)
    ctx->pc = 0x1cc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7008), GPR_U32(ctx, 5));
    ctx->pc = 0x1cc4fcu;
}
