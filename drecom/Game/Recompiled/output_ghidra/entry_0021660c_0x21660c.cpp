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

// Function: entry_0021660c
// Address: 0x21660c - 0x216614
void entry_0021660c_0x21660c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021660c_0x21660c");
#endif

    ctx->pc = 0x21660cu;

    // 0x21660c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x21660cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x216610: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x216610u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x216614u;
}
