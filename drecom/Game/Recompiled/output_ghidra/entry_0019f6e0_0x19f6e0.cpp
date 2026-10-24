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

// Function: entry_0019f6e0
// Address: 0x19f6e0 - 0x19f704
void entry_0019f6e0_0x19f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6e0_0x19f6e0");
#endif

    ctx->pc = 0x19f6e0u;

    // 0x19f6e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f6e4: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x19f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x19f6e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19f6ec: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x19f6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19f6f0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F6F0u;
    {
        const bool branch_taken_0x19f6f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f6f0) {
            ctx->pc = 0x19F704u;
            return;
        }
    }
    ctx->pc = 0x19F6F8u;
    // 0x19f6f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19f6fc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19F6FCu;
    {
        const bool branch_taken_0x19f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6fc) {
            ctx->pc = 0x19F774u;
            return;
        }
    }
    ctx->pc = 0x19F704u;
}
