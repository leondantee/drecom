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

// Function: entry_001a1540
// Address: 0x1a1540 - 0x1a154c
void entry_001a1540_0x1a1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1540_0x1a1540");
#endif

    ctx->pc = 0x1a1540u;

    // 0x1a1540: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1544: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a1544u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1548: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x1a154cu;
}
