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

// Function: entry_003552d4
// Address: 0x3552d4 - 0x3552f8
void entry_003552d4_0x3552d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003552d4_0x3552d4");
#endif

    ctx->pc = 0x3552d4u;

    // 0x3552d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3552d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3552d8: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3552D8u;
    {
        const bool branch_taken_0x3552d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3552d8) {
            ctx->pc = 0x3552F8u;
            return;
        }
    }
    ctx->pc = 0x3552E0u;
    // 0x3552e0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3552e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3552e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3552e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3552e8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3552e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3552ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3552ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3552f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3552f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3552f4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3552f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3552f8u;
}
