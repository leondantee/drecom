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

// Function: entry_001cc3f8
// Address: 0x1cc3f8 - 0x1cc404
void entry_001cc3f8_0x1cc3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc3f8_0x1cc3f8");
#endif

    ctx->pc = 0x1cc3f8u;

    // 0x1cc3f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cc3fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc400: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x1cc400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
    ctx->pc = 0x1cc404u;
}
