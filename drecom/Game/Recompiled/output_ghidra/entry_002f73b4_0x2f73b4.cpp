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

// Function: entry_002f73b4
// Address: 0x2f73b4 - 0x2f73bc
void entry_002f73b4_0x2f73b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f73b4_0x2f73b4");
#endif

    ctx->pc = 0x2f73b4u;

    // 0x2f73b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f73b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f73b8: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x2f73b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f73bcu;
}
