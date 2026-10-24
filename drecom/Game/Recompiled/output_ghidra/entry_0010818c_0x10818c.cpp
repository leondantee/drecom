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

// Function: entry_0010818c
// Address: 0x10818c - 0x108194
void entry_0010818c_0x10818c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010818c_0x10818c");
#endif

    ctx->pc = 0x10818cu;

    // 0x10818c: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x10818cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x108190: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x108190u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x108194u;
}
