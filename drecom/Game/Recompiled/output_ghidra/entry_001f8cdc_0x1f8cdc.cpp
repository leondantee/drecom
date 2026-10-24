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

// Function: entry_001f8cdc
// Address: 0x1f8cdc - 0x1f8ce4
void entry_001f8cdc_0x1f8cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8cdc_0x1f8cdc");
#endif

    ctx->pc = 0x1f8cdcu;

    // 0x1f8cdc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ce0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f8ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1f8ce4u;
}
