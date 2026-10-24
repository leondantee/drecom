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

// Function: entry_001dcf48
// Address: 0x1dcf48 - 0x1dcf58
void entry_001dcf48_0x1dcf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf48_0x1dcf48");
#endif

    ctx->pc = 0x1dcf48u;

    // 0x1dcf48: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dcf4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dcf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dcf50: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1dcf50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcf54: 0x0  nop
    ctx->pc = 0x1dcf54u;
    // NOP
    ctx->pc = 0x1dcf58u;
}
