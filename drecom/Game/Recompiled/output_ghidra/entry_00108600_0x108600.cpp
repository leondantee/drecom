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

// Function: entry_00108600
// Address: 0x108600 - 0x108604
void entry_00108600_0x108600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108600_0x108600");
#endif

    ctx->pc = 0x108600u;

    // 0x108600: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x108604u;
}
