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

// Function: entry_0034a988
// Address: 0x34a988 - 0x34a990
void entry_0034a988_0x34a988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a988_0x34a988");
#endif

    ctx->pc = 0x34a988u;

    // 0x34a988: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34a988u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x34a990u;
}
