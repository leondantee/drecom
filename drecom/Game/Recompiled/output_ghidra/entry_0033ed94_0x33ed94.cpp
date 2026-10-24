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

// Function: entry_0033ed94
// Address: 0x33ed94 - 0x33ed98
void entry_0033ed94_0x33ed94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ed94_0x33ed94");
#endif

    ctx->pc = 0x33ed94u;

    // 0x33ed94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x33ed94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x33ed98u;
}
