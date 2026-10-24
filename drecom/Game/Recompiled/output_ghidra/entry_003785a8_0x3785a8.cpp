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

// Function: entry_003785a8
// Address: 0x3785a8 - 0x3785b0
void entry_003785a8_0x3785a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003785a8_0x3785a8");
#endif

    ctx->pc = 0x3785a8u;

    // 0x3785a8: 0xac301a48  sw          $s0, 0x1A48($at)
    ctx->pc = 0x3785a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 16));
    // 0x3785ac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3785acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3785b0u;
}
