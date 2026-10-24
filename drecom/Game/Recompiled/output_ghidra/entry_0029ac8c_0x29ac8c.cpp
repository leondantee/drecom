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

// Function: entry_0029ac8c
// Address: 0x29ac8c - 0x29ac98
void entry_0029ac8c_0x29ac8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ac8c_0x29ac8c");
#endif

    ctx->pc = 0x29ac8cu;

    // 0x29ac8c: 0x36220002  ori         $v0, $s1, 0x2
    ctx->pc = 0x29ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x29ac90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29ac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29ac94: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29ac94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x29ac98u;
}
