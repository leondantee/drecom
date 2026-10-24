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

// Function: entry_0010467c
// Address: 0x10467c - 0x104684
void entry_0010467c_0x10467c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010467c_0x10467c");
#endif

    ctx->pc = 0x10467cu;

    // 0x10467c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104680: 0x8c443c10  lw          $a0, 0x3C10($v0)
    ctx->pc = 0x104680u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C10u));
    ctx->pc = 0x104684u;
}
