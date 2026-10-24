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

// Function: entry_00137430
// Address: 0x137430 - 0x137438
void entry_00137430_0x137430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137430_0x137430");
#endif

    ctx->pc = 0x137430u;

    // 0x137430: 0x26d50001  addiu       $s5, $s6, 0x1
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x137434: 0x72a0b628  paddub      $s6, $s5, $zero
    ctx->pc = 0x137434u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x137438u;
}
