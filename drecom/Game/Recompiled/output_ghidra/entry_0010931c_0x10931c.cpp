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

// Function: entry_0010931c
// Address: 0x10931c - 0x109320
void entry_0010931c_0x10931c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010931c_0x10931c");
#endif

    ctx->pc = 0x10931cu;

    // 0x10931c: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x10931cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
    ctx->pc = 0x109320u;
}
