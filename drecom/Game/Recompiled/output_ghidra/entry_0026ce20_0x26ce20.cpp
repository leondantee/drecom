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

// Function: entry_0026ce20
// Address: 0x26ce20 - 0x26ce28
void entry_0026ce20_0x26ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ce20_0x26ce20");
#endif

    ctx->pc = 0x26ce20u;

    // 0x26ce20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ce24: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x26ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x26ce28u;
}
