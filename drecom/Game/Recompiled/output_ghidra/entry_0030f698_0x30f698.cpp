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

// Function: entry_0030f698
// Address: 0x30f698 - 0x30f6a0
void entry_0030f698_0x30f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f698_0x30f698");
#endif

    ctx->pc = 0x30f698u;

    // 0x30f698: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x30f698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f69c: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x30f69cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30f6a0u;
}
