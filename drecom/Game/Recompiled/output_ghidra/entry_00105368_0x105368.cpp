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

// Function: entry_00105368
// Address: 0x105368 - 0x105370
void entry_00105368_0x105368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105368_0x105368");
#endif

    ctx->pc = 0x105368u;

    // 0x105368: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x105368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10536c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x10536cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x105370u;
}
