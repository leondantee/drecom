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

// Function: entry_002675a8
// Address: 0x2675a8 - 0x2675c0
void entry_002675a8_0x2675a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002675a8_0x2675a8");
#endif

    ctx->pc = 0x2675a8u;

    // 0x2675a8: 0x8e021240  lw          $v0, 0x1240($s0)
    ctx->pc = 0x2675a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x2675ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2675ACu;
    {
        const bool branch_taken_0x2675ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2675ac) {
            ctx->pc = 0x2675C0u;
            return;
        }
    }
    ctx->pc = 0x2675B4u;
    // 0x2675b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2675b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2675b8: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x2675b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x2675bc: 0x0  nop
    ctx->pc = 0x2675bcu;
    // NOP
    ctx->pc = 0x2675c0u;
}
