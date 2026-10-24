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

// Function: entry_0010dc58
// Address: 0x10dc58 - 0x10dc5c
void entry_0010dc58_0x10dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc58_0x10dc58");
#endif

    ctx->pc = 0x10dc58u;

    // 0x10dc58: 0x8c4445b8  lw          $a0, 0x45B8($v0)
    ctx->pc = 0x10dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->pc = 0x10dc5cu;
}
