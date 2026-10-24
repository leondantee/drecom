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

// Function: entry_0010ab4c
// Address: 0x10ab4c - 0x10ab54
void entry_0010ab4c_0x10ab4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab4c_0x10ab4c");
#endif

    ctx->pc = 0x10ab4cu;

    // 0x10ab4c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10ab50: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x10ab50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x10ab54u;
}
