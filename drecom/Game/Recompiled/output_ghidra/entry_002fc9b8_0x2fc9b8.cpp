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

// Function: entry_002fc9b8
// Address: 0x2fc9b8 - 0x2fc9c0
void entry_002fc9b8_0x2fc9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc9b8_0x2fc9b8");
#endif

    ctx->pc = 0x2fc9b8u;

    // 0x2fc9b8: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2fc9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc9bc: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2fc9bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fc9c0u;
}
