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

// Function: entry_001522fc
// Address: 0x1522fc - 0x152300
void entry_001522fc_0x1522fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001522fc_0x1522fc");
#endif

    ctx->pc = 0x1522fcu;

    // 0x1522fc: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x1522fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    ctx->pc = 0x152300u;
}
