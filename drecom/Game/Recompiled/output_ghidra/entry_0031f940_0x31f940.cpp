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

// Function: entry_0031f940
// Address: 0x31f940 - 0x31f948
void entry_0031f940_0x31f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f940_0x31f940");
#endif

    ctx->pc = 0x31f940u;

    // 0x31f940: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x31f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f944: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x31f944u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x31f948u;
}
