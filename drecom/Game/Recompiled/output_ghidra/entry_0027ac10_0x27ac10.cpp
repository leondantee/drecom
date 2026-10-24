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

// Function: entry_0027ac10
// Address: 0x27ac10 - 0x27ac34
void entry_0027ac10_0x27ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ac10_0x27ac10");
#endif

    ctx->pc = 0x27ac10u;

    // 0x27ac10: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x27ac10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27ac14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27ac18: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AC18u;
    {
        const bool branch_taken_0x27ac18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27ac18) {
            ctx->pc = 0x27AC34u;
            return;
        }
    }
    ctx->pc = 0x27AC20u;
    // 0x27ac20: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x27ac20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27ac24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27ac28: 0xa2020062  sb          $v0, 0x62($s0)
    ctx->pc = 0x27ac28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 2));
    // 0x27ac2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27AC2Cu;
    {
        const bool branch_taken_0x27ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ac2c) {
            ctx->pc = 0x27AC38u;
            return;
        }
    }
    ctx->pc = 0x27AC34u;
}
