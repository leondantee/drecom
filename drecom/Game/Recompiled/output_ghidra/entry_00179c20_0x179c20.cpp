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

// Function: entry_00179c20
// Address: 0x179c20 - 0x179c38
void entry_00179c20_0x179c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179c20_0x179c20");
#endif

    ctx->pc = 0x179c20u;

    // 0x179c20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c24: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x179c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x179c28: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x179c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179c2c: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x179c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x179c30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x179C30u;
    {
        const bool branch_taken_0x179c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c30) {
            ctx->pc = 0x179C78u;
            return;
        }
    }
    ctx->pc = 0x179C38u;
}
