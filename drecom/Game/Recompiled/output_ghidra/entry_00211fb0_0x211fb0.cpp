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

// Function: entry_00211fb0
// Address: 0x211fb0 - 0x211fb8
void entry_00211fb0_0x211fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211fb0_0x211fb0");
#endif

    ctx->pc = 0x211fb0u;

    // 0x211fb0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x211fb0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211fb4: 0x0  nop
    ctx->pc = 0x211fb4u;
    // NOP
    ctx->pc = 0x211fb8u;
}
