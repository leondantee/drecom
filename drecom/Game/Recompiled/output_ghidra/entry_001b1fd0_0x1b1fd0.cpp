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

// Function: entry_001b1fd0
// Address: 0x1b1fd0 - 0x1b1ff8
void entry_001b1fd0_0x1b1fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1fd0_0x1b1fd0");
#endif

    ctx->pc = 0x1b1fd0u;

    // 0x1b1fd0: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1b1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1b1fd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1fd8: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1B1FD8u;
    {
        const bool branch_taken_0x1b1fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1fd8) {
            ctx->pc = 0x1B2130u;
            return;
        }
    }
    ctx->pc = 0x1B1FE0u;
    // 0x1b1fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1fe4: 0x0  nop
    ctx->pc = 0x1b1fe4u;
    // NOP
    // 0x1b1fe8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1b1fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1b1fec: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b1fecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1ff0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B1FF0u;
    {
        const bool branch_taken_0x1b1ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ff0) {
            ctx->pc = 0x1B2088u;
            return;
        }
    }
    ctx->pc = 0x1B1FF8u;
}
