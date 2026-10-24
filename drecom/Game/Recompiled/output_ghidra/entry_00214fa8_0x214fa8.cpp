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

// Function: entry_00214fa8
// Address: 0x214fa8 - 0x214fac
void entry_00214fa8_0x214fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214fa8_0x214fa8");
#endif

    ctx->pc = 0x214fa8u;

    // 0x214fa8: 0x8c44a264  lw          $a0, -0x5D9C($v0)
    ctx->pc = 0x214fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943332)));
    ctx->pc = 0x214facu;
}
