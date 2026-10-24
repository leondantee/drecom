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

// Function: entry_00306278
// Address: 0x306278 - 0x306280
void entry_00306278_0x306278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306278_0x306278");
#endif

    ctx->pc = 0x306278u;

    // 0x306278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x306278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30627c: 0x0  nop
    ctx->pc = 0x30627cu;
    // NOP
    ctx->pc = 0x306280u;
}
