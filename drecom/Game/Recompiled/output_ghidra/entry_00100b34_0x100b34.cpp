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

// Function: entry_00100b34
// Address: 0x100b34 - 0x100b3c
void entry_00100b34_0x100b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b34_0x100b34");
#endif

    ctx->pc = 0x100b34u;

    // 0x100b34: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b38: 0x2484c1a0  addiu       $a0, $a0, -0x3E60
    ctx->pc = 0x100b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951328));
    ctx->pc = 0x100b3cu;
}
