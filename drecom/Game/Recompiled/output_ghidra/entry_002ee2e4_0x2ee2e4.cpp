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

// Function: entry_002ee2e4
// Address: 0x2ee2e4 - 0x2ee2e8
void entry_002ee2e4_0x2ee2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee2e4_0x2ee2e4");
#endif

    ctx->pc = 0x2ee2e4u;

    // 0x2ee2e4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ee2e4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2ee2e8u;
}
