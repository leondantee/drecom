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

// Function: entry_001d00fc
// Address: 0x1d00fc - 0x1d0100
void entry_001d00fc_0x1d00fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d00fc_0x1d00fc");
#endif

    ctx->pc = 0x1d00fcu;

    // 0x1d00fc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d00fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1d0100u;
}
