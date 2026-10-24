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

// Function: entry_001ddfe0
// Address: 0x1ddfe0 - 0x1ddff0
void entry_001ddfe0_0x1ddfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddfe0_0x1ddfe0");
#endif

    ctx->pc = 0x1ddfe0u;

    // 0x1ddfe0: 0x87a200f6  lh          $v0, 0xF6($sp)
    ctx->pc = 0x1ddfe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 246)));
    // 0x1ddfe4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddfe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddfe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddfec: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ddfecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ddff0u;
}
