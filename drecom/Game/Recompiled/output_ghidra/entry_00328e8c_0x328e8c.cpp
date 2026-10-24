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

// Function: entry_00328e8c
// Address: 0x328e8c - 0x328ea0
void entry_00328e8c_0x328e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328e8c_0x328e8c");
#endif

    ctx->pc = 0x328e8cu;

    // 0x328e8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x328e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x328e90: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x328e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x328e94: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x328e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x328e98: 0xac432834  sw          $v1, 0x2834($v0)
    ctx->pc = 0x328e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10292), GPR_U32(ctx, 3));
    // 0x328e9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x328e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x328ea0u;
}
