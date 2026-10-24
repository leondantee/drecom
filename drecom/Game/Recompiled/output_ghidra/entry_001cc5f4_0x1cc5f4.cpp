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

// Function: entry_001cc5f4
// Address: 0x1cc5f4 - 0x1cc600
void entry_001cc5f4_0x1cc5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc5f4_0x1cc5f4");
#endif

    ctx->pc = 0x1cc5f4u;

    // 0x1cc5f4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cc5f8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc5fc: 0xad071b60  sw          $a3, 0x1B60($t0)
    ctx->pc = 0x1cc5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 7));
    ctx->pc = 0x1cc600u;
}
