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

// Function: entry_0014157c
// Address: 0x14157c - 0x141580
void entry_0014157c_0x14157c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014157c_0x14157c");
#endif

    ctx->pc = 0x14157cu;

    // 0x14157c: 0xa020ec68  sb          $zero, -0x1398($at)
    ctx->pc = 0x14157cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962280), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x141580u;
}
