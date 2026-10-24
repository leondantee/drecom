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

// Function: entry_0028f5c8
// Address: 0x28f5c8 - 0x28f5d0
void entry_0028f5c8_0x28f5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f5c8_0x28f5c8");
#endif

    ctx->pc = 0x28f5c8u;

    // 0x28f5c8: 0x24651740  addiu       $a1, $v1, 0x1740
    ctx->pc = 0x28f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x28f5cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28f5ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28f5d0u;
}
