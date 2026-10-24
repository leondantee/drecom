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

// Function: entry_00104be8
// Address: 0x104be8 - 0x104bf0
void entry_00104be8_0x104be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104be8_0x104be8");
#endif

    ctx->pc = 0x104be8u;

    // 0x104be8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104bec: 0x26a541f8  addiu       $a1, $s5, 0x41F8
    ctx->pc = 0x104becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
    ctx->pc = 0x104bf0u;
}
