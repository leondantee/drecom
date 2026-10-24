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

// Function: entry_001a78cc
// Address: 0x1a78cc - 0x1a78d8
void entry_001a78cc_0x1a78cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a78cc_0x1a78cc");
#endif

    ctx->pc = 0x1a78ccu;

    // 0x1a78cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a78d0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1a78d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a78d4: 0x0  nop
    ctx->pc = 0x1a78d4u;
    // NOP
    ctx->pc = 0x1a78d8u;
}
