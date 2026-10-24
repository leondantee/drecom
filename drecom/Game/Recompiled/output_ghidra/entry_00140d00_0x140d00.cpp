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

// Function: entry_00140d00
// Address: 0x140d00 - 0x140d04
void entry_00140d00_0x140d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140d00_0x140d00");
#endif

    ctx->pc = 0x140d00u;

    // 0x140d00: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x140d00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x140d04u;
}
