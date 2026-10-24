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

// Function: entry_0027f4c4
// Address: 0x27f4c4 - 0x27f4c8
void entry_0027f4c4_0x27f4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f4c4_0x27f4c4");
#endif

    ctx->pc = 0x27f4c4u;

    // 0x27f4c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27f4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    ctx->pc = 0x27f4c8u;
}
