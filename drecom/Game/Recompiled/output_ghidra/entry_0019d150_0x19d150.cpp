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

// Function: entry_0019d150
// Address: 0x19d150 - 0x19d178
void entry_0019d150_0x19d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d150_0x19d150");
#endif

    ctx->pc = 0x19d150u;

    // 0x19d150: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x19d150u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19d154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19d158: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x19d158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d15c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19d15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d160: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19d160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d164: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19D164u;
    {
        const bool branch_taken_0x19d164 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19d164) {
            ctx->pc = 0x19D190u;
            return;
        }
    }
    ctx->pc = 0x19D16Cu;
    // 0x19d16c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d170: 0xc084a54  jal         func_212950
    ctx->pc = 0x19D170u;
    SET_GPR_U32(ctx, 31, 0x19D178u);
    ctx->pc = 0x212950u;
    {
        ctx->pc = 0x19D178u;
        ps2_syscalls::WakeupThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D178u) { return; }
    ctx->pc = 0x19D178u;
}
