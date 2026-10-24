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

// Function: entry_0019330c
// Address: 0x19330c - 0x193318
void entry_0019330c_0x19330c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019330c_0x19330c");
#endif

    ctx->pc = 0x19330cu;

    // 0x19330c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x19330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x193310: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x193314: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x193314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->pc = 0x193318u;
}
