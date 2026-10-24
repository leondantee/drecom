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

// Function: entry_0031eb20
// Address: 0x31eb20 - 0x31eb34
void entry_0031eb20_0x31eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031eb20_0x31eb20");
#endif

    ctx->pc = 0x31eb20u;

    // 0x31eb20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31eb24: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x31eb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x31eb28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31EB28u;
    {
        const bool branch_taken_0x31eb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb28) {
            ctx->pc = 0x31EB34u;
            return;
        }
    }
    ctx->pc = 0x31EB30u;
    // 0x31eb30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31eb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x31eb34u;
}
