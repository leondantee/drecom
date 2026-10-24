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

// Function: entry_002f71cc
// Address: 0x2f71cc - 0x2f71d4
void entry_002f71cc_0x2f71cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f71cc_0x2f71cc");
#endif

    ctx->pc = 0x2f71ccu;

    // 0x2f71cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f71ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f71d0: 0x71209e28  paddub      $s3, $t1, $zero
    ctx->pc = 0x2f71d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f71d4u;
}
