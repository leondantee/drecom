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

// Function: entry_001ddf0c
// Address: 0x1ddf0c - 0x1ddf3c
void entry_001ddf0c_0x1ddf0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddf0c_0x1ddf0c");
#endif

    ctx->pc = 0x1ddf0cu;

    // 0x1ddf0c: 0x87a200f2  lh          $v0, 0xF2($sp)
    ctx->pc = 0x1ddf0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 242)));
    // 0x1ddf10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddf14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddf14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddf18: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1ddf18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddf1c: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1ddf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1ddf20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddf20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddf24: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDF24u;
    {
        const bool branch_taken_0x1ddf24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ddf24) {
            ctx->pc = 0x1DDF3Cu;
            return;
        }
    }
    ctx->pc = 0x1DDF2Cu;
    // 0x1ddf2c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ddf30: 0xa7a200f4  sh          $v0, 0xF4($sp)
    ctx->pc = 0x1ddf30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ddf34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDF34u;
    {
        const bool branch_taken_0x1ddf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf34) {
            ctx->pc = 0x1DDF40u;
            return;
        }
    }
    ctx->pc = 0x1DDF3Cu;
}
