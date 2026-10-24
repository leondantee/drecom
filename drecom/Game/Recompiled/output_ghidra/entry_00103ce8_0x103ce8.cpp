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

// Function: entry_00103ce8
// Address: 0x103ce8 - 0x103cf0
void entry_00103ce8_0x103ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ce8_0x103ce8");
#endif

    ctx->pc = 0x103ce8u;

    // 0x103ce8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x103ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x103cec: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x103cf0u;
}
