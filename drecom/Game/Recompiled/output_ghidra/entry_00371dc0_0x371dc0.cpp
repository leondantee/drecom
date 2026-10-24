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

// Function: entry_00371dc0
// Address: 0x371dc0 - 0x371dc8
void entry_00371dc0_0x371dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371dc0_0x371dc0");
#endif

    ctx->pc = 0x371dc0u;

    // 0x371dc0: 0x24110021  addiu       $s1, $zero, 0x21
    ctx->pc = 0x371dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x371dc4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x371dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x371dc8u;
}
