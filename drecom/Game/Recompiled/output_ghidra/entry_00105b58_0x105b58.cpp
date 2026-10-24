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

// Function: entry_00105b58
// Address: 0x105b58 - 0x105b5c
void entry_00105b58_0x105b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105b58_0x105b58");
#endif

    ctx->pc = 0x105b58u;

    // 0x105b58: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x105b58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x105b5cu;
}
