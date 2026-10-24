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

// Function: entry_002f77f8
// Address: 0x2f77f8 - 0x2f7800
void entry_002f77f8_0x2f77f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f77f8_0x2f77f8");
#endif

    ctx->pc = 0x2f77f8u;

    // 0x2f77f8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2f77f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f77fc: 0x7140b628  paddub      $s6, $t2, $zero
    ctx->pc = 0x2f77fcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f7800u;
}
