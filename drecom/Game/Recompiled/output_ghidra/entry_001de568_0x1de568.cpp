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

// Function: entry_001de568
// Address: 0x1de568 - 0x1de598
void entry_001de568_0x1de568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de568_0x1de568");
#endif

    ctx->pc = 0x1de568u;

    // 0x1de568: 0x87a200f8  lh          $v0, 0xF8($sp)
    ctx->pc = 0x1de568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1de56c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1de56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de570: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de570u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de574: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1de574u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de578: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1de578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1de57c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de57cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de580: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE580u;
    {
        const bool branch_taken_0x1de580 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1de580) {
            ctx->pc = 0x1DE598u;
            return;
        }
    }
    ctx->pc = 0x1DE588u;
    // 0x1de588: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1de588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1de58c: 0xa7a300fa  sh          $v1, 0xFA($sp)
    ctx->pc = 0x1de58cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 3));
    // 0x1de590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE590u;
    {
        const bool branch_taken_0x1de590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de590) {
            ctx->pc = 0x1DE5A0u;
            return;
        }
    }
    ctx->pc = 0x1DE598u;
}
