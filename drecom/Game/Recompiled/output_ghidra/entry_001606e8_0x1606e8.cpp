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

// Function: entry_001606e8
// Address: 0x1606e8 - 0x160704
void entry_001606e8_0x1606e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001606e8_0x1606e8");
#endif

    ctx->pc = 0x1606e8u;

    // 0x1606e8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1606e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1606ec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1606ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1606f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1606F0u;
    {
        const bool branch_taken_0x1606f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1606f0) {
            ctx->pc = 0x160704u;
            return;
        }
    }
    ctx->pc = 0x1606F8u;
    // 0x1606f8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1606f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1606fc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1606FCu;
    {
        const bool branch_taken_0x1606fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606fc) {
            ctx->pc = 0x1608B0u;
            return;
        }
    }
    ctx->pc = 0x160704u;
}
