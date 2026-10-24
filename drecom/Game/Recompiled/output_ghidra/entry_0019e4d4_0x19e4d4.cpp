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

// Function: entry_0019e4d4
// Address: 0x19e4d4 - 0x19e4d8
void entry_0019e4d4_0x19e4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e4d4_0x19e4d4");
#endif

    ctx->pc = 0x19e4d4u;

    // 0x19e4d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19e4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x19e4d8u;
}
