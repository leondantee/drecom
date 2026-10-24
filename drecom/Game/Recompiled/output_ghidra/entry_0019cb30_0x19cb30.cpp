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

// Function: entry_0019cb30
// Address: 0x19cb30 - 0x19cb38
void entry_0019cb30_0x19cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb30_0x19cb30");
#endif

    ctx->pc = 0x19cb30u;

    // 0x19cb30: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x19cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 2));
    // 0x19cb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19cb38u;
}
