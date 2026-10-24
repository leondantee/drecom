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

// Function: entry_0015f7ec
// Address: 0x15f7ec - 0x15f80c
void entry_0015f7ec_0x15f7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f7ec_0x15f7ec");
#endif

    ctx->pc = 0x15f7ecu;

    // 0x15f7ec: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f7f0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x15f7f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f7f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F7F8u;
    {
        const bool branch_taken_0x15f7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7f8) {
            ctx->pc = 0x15F80Cu;
            return;
        }
    }
    ctx->pc = 0x15F800u;
    // 0x15f800: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f800u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f804: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15F804u;
    {
        const bool branch_taken_0x15f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f804) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F80Cu;
}
