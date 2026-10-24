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

// Function: entry_0018d620
// Address: 0x18d620 - 0x18d628
void entry_0018d620_0x18d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d620_0x18d620");
#endif

    ctx->pc = 0x18d620u;

    // 0x18d620: 0x26020b30  addiu       $v0, $s0, 0xB30
    ctx->pc = 0x18d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
    // 0x18d624: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18d624u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18d628u;
}
