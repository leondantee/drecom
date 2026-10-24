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

// Function: entry_0021399c
// Address: 0x21399c - 0x2139a4
void entry_0021399c_0x21399c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021399c_0x21399c");
#endif

    ctx->pc = 0x21399cu;

    // 0x21399c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x21399cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2139a0: 0x8c649ce8  lw          $a0, -0x6318($v1)
    ctx->pc = 0x2139a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619CE8u));
    ctx->pc = 0x2139a4u;
}
