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

// Function: entry_0017e250
// Address: 0x17e250 - 0x17e258
void entry_0017e250_0x17e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e250_0x17e250");
#endif

    ctx->pc = 0x17e250u;

    // 0x17e250: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x17e250u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
    // 0x17e254: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17e254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x17e258u;
}
