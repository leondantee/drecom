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

// Function: entry_00119b5c
// Address: 0x119b5c - 0x119b64
void entry_00119b5c_0x119b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119b5c_0x119b5c");
#endif

    ctx->pc = 0x119b5cu;

    // 0x119b5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x119b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119b60: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x119b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x119b64u;
}
