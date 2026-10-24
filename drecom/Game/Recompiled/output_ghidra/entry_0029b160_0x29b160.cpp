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

// Function: entry_0029b160
// Address: 0x29b160 - 0x29b16c
void entry_0029b160_0x29b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b160_0x29b160");
#endif

    ctx->pc = 0x29b160u;

    // 0x29b160: 0x36220020  ori         $v0, $s1, 0x20
    ctx->pc = 0x29b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
    // 0x29b164: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x29b164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29b168: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x29b168u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x29b16cu;
}
