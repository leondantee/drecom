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

// Function: entry_0019c4fc
// Address: 0x19c4fc - 0x19c500
void entry_0019c4fc_0x19c4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c4fc_0x19c4fc");
#endif

    ctx->pc = 0x19c4fcu;

    // 0x19c4fc: 0xac201a5c  sw          $zero, 0x1A5C($at)
    ctx->pc = 0x19c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6748), GPR_U32(ctx, 0));
    ctx->pc = 0x19c500u;
}
