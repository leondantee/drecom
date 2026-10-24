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

// Function: entry_001dcf94
// Address: 0x1dcf94 - 0x1dcfb4
void entry_001dcf94_0x1dcf94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf94_0x1dcf94");
#endif

    ctx->pc = 0x1dcf94u;

    // 0x1dcf94: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x1dcf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1dcf98: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1dcf98u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcf9c: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCF9Cu;
    {
        const bool branch_taken_0x1dcf9c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1dcf9c) {
            ctx->pc = 0x1DCFB4u;
            return;
        }
    }
    ctx->pc = 0x1DCFA4u;
    // 0x1dcfa4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dcfa8: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x1dcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x1dcfac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCFACu;
    {
        const bool branch_taken_0x1dcfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcfac) {
            ctx->pc = 0x1DCFB8u;
            return;
        }
    }
    ctx->pc = 0x1DCFB4u;
}
