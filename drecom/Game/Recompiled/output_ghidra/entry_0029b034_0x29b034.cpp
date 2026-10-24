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

// Function: entry_0029b034
// Address: 0x29b034 - 0x29b040
void entry_0029b034_0x29b034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b034_0x29b034");
#endif

    ctx->pc = 0x29b034u;

    // 0x29b034: 0x36230010  ori         $v1, $s1, 0x10
    ctx->pc = 0x29b034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
    // 0x29b038: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x29b038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29b03c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29b03cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x29b040u;
}
