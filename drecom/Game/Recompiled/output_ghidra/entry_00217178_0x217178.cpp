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

// Function: entry_00217178
// Address: 0x217178 - 0x217180
void entry_00217178_0x217178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217178_0x217178");
#endif

    ctx->pc = 0x217178u;

    // 0x217178: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x217178u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x21717c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x21717cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x217180u;
}
