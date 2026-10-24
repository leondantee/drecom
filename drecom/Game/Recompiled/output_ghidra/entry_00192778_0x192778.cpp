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

// Function: entry_00192778
// Address: 0x192778 - 0x192780
void entry_00192778_0x192778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192778_0x192778");
#endif

    ctx->pc = 0x192778u;

    // 0x192778: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x192778u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19277c: 0x0  nop
    ctx->pc = 0x19277cu;
    // NOP
    ctx->pc = 0x192780u;
}
