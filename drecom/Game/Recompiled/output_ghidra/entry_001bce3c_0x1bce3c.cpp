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

// Function: entry_001bce3c
// Address: 0x1bce3c - 0x1bce4c
void entry_001bce3c_0x1bce3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bce3c_0x1bce3c");
#endif

    ctx->pc = 0x1bce3cu;

    // 0x1bce3c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1bce3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bce40: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x1bce40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1bce44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bce48: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x1bce48u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bce4cu;
}
