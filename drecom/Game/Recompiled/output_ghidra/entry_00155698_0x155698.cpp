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

// Function: entry_00155698
// Address: 0x155698 - 0x1556b8
void entry_00155698_0x155698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155698_0x155698");
#endif

    ctx->pc = 0x155698u;

    // 0x155698: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15569c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1556a0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1556a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1556a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1556A4u;
    {
        const bool branch_taken_0x1556a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556a4) {
            ctx->pc = 0x1556B8u;
            return;
        }
    }
    ctx->pc = 0x1556ACu;
    // 0x1556ac: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1556acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1556b0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1556B0u;
    {
        const bool branch_taken_0x1556b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556b0) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x1556B8u;
}
