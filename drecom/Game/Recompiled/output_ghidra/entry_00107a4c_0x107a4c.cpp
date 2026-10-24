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

// Function: entry_00107a4c
// Address: 0x107a4c - 0x107a54
void entry_00107a4c_0x107a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a4c_0x107a4c");
#endif

    ctx->pc = 0x107a4cu;

    // 0x107a4c: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x107a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x107a50: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x107a50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x107a54u;
}
