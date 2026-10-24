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

// Function: entry_00104d40
// Address: 0x104d40 - 0x104d48
void entry_00104d40_0x104d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104d40_0x104d40");
#endif

    ctx->pc = 0x104d40u;

    // 0x104d40: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x104d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104d44: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x104d44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x104d48u;
}
