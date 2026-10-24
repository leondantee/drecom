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

// Function: entry_001dcfb8
// Address: 0x1dcfb8 - 0x1dcfd8
void entry_001dcfb8_0x1dcfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcfb8_0x1dcfb8");
#endif

    ctx->pc = 0x1dcfb8u;

    // 0x1dcfb8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x1dcfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1dcfbc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1dcfbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1dcfc0: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCFC0u;
    {
        const bool branch_taken_0x1dcfc0 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1dcfc0) {
            ctx->pc = 0x1DCFD8u;
            return;
        }
    }
    ctx->pc = 0x1DCFC8u;
    // 0x1dcfc8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dcfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dcfcc: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x1dcfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x1dcfd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCFD0u;
    {
        const bool branch_taken_0x1dcfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcfd0) {
            ctx->pc = 0x1DCFDCu;
            return;
        }
    }
    ctx->pc = 0x1DCFD8u;
}
