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

// Function: entry_0030ad0c
// Address: 0x30ad0c - 0x30ad2c
void entry_0030ad0c_0x30ad0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ad0c_0x30ad0c");
#endif

    ctx->pc = 0x30ad0cu;

    // 0x30ad0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ad10: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x30ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x30ad14: 0x304201fe  andi        $v0, $v0, 0x1FE
    ctx->pc = 0x30ad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)510);
    // 0x30ad18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AD18u;
    {
        const bool branch_taken_0x30ad18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad18) {
            ctx->pc = 0x30AD2Cu;
            return;
        }
    }
    ctx->pc = 0x30AD20u;
    // 0x30ad20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ad24: 0xc0c2d3c  jal         func_30B4F0
    ctx->pc = 0x30AD24u;
    SET_GPR_U32(ctx, 31, 0x30AD2Cu);
    ctx->pc = 0x30B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B4F0u, 0x30AD24u, 0x30AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD2Cu;
}
