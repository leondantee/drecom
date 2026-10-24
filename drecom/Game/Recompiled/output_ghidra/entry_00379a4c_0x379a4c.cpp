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

// Function: entry_00379a4c
// Address: 0x379a4c - 0x379a54
void entry_00379a4c_0x379a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379a4c_0x379a4c");
#endif

    ctx->pc = 0x379a4cu;

    // 0x379a4c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x379a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379a50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x379a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x379a54u;
}
