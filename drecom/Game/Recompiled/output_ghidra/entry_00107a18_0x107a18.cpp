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

// Function: entry_00107a18
// Address: 0x107a18 - 0x107a1c
void entry_00107a18_0x107a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a18_0x107a18");
#endif

    ctx->pc = 0x107a18u;

    // 0x107a18: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x107a18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x107a1cu;
}
