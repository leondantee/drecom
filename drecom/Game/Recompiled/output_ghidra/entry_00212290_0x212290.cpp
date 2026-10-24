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

// Function: entry_00212290
// Address: 0x212290 - 0x2122b8
void entry_00212290_0x212290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212290_0x212290");
#endif

    ctx->pc = 0x212290u;

    // 0x212290: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x212290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x212294: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x212294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x212298: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x212298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x21229c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x21229cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2122a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2122a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2122a4: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2122A4u;
    {
        const bool branch_taken_0x2122a4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2122a4) {
            ctx->pc = 0x2122D0u;
            return;
        }
    }
    ctx->pc = 0x2122ACu;
    // 0x2122ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2122acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2122b0: 0xc084a54  jal         func_212950
    ctx->pc = 0x2122B0u;
    SET_GPR_U32(ctx, 31, 0x2122B8u);
    ctx->pc = 0x212950u;
    {
        ctx->pc = 0x2122B8u;
        ps2_syscalls::WakeupThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2122B8u) { return; }
    ctx->pc = 0x2122B8u;
}
