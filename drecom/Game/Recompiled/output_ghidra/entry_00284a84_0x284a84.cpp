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

// Function: entry_00284a84
// Address: 0x284a84 - 0x284a90
void entry_00284a84_0x284a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284a84_0x284a84");
#endif

    ctx->pc = 0x284a84u;

    // 0x284a84: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x284a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
    // 0x284a88: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x284a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x284a8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x284a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x284a90u;
}
