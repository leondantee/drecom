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

// Function: entry_0018fb34
// Address: 0x18fb34 - 0x18fb3c
void entry_0018fb34_0x18fb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fb34_0x18fb34");
#endif

    ctx->pc = 0x18fb34u;

    // 0x18fb34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x18fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x18fb38: 0x2456e550  addiu       $s6, $v0, -0x1AB0
    ctx->pc = 0x18fb38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    ctx->pc = 0x18fb3cu;
}
