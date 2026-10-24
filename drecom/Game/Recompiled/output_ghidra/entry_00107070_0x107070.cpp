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

// Function: entry_00107070
// Address: 0x107070 - 0x107078
void entry_00107070_0x107070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107070_0x107070");
#endif

    ctx->pc = 0x107070u;

    // 0x107070: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x107074: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x107078u;
}
