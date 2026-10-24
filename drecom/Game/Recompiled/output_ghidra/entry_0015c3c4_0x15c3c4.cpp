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

// Function: entry_0015c3c4
// Address: 0x15c3c4 - 0x15c3ec
void entry_0015c3c4_0x15c3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c3c4_0x15c3c4");
#endif

    ctx->pc = 0x15c3c4u;

    // 0x15c3c4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x15C3C4u;
    {
        const bool branch_taken_0x15c3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3c4) {
            ctx->pc = 0x15C3F4u;
            return;
        }
    }
    ctx->pc = 0x15C3CCu;
    // 0x15c3cc: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x15c3d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15c3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c3d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c3d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15c3d8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C3D8u;
    {
        const bool branch_taken_0x15c3d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15c3d8) {
            ctx->pc = 0x15C3F4u;
            return;
        }
    }
    ctx->pc = 0x15C3E0u;
    // 0x15c3e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c3e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c3e4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15C3E4u;
    {
        const bool branch_taken_0x15c3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c3e4) {
            ctx->pc = 0x15C474u;
            return;
        }
    }
    ctx->pc = 0x15C3ECu;
}
