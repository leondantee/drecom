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

// Function: entry_0015da20
// Address: 0x15da20 - 0x15da48
void entry_0015da20_0x15da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015da20_0x15da20");
#endif

    ctx->pc = 0x15da20u;

    // 0x15da20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15da24: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15da24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15da28: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15da28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15da2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DA2Cu;
    {
        const bool branch_taken_0x15da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da2c) {
            ctx->pc = 0x15DA48u;
            return;
        }
    }
    ctx->pc = 0x15DA34u;
    // 0x15da34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15da38: 0xac4013fc  sw          $zero, 0x13FC($v0)
    ctx->pc = 0x15da38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5116), GPR_U32(ctx, 0));
    // 0x15da3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15da40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15DA40u;
    {
        const bool branch_taken_0x15da40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da40) {
            ctx->pc = 0x15DA7Cu;
            return;
        }
    }
    ctx->pc = 0x15DA48u;
}
