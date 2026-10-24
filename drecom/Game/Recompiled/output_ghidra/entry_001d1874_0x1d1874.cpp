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

// Function: entry_001d1874
// Address: 0x1d1874 - 0x1d1880
void entry_001d1874_0x1d1874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1874_0x1d1874");
#endif

    ctx->pc = 0x1d1874u;

    // 0x1d1874: 0x36840004  ori         $a0, $s4, 0x4
    ctx->pc = 0x1d1874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
    // 0x1d1878: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1d1878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d187c: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x1d187cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1d1880u;
}
