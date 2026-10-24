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

// Function: entry_00217670
// Address: 0x217670 - 0x21767c
void entry_00217670_0x217670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217670_0x217670");
#endif

    ctx->pc = 0x217670u;

    // 0x217670: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x217670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x217674: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x217674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x217678: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x217678u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x21767cu;
}
