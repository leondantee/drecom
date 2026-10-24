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

// Function: entry_0031b168
// Address: 0x31b168 - 0x31b17c
void entry_0031b168_0x31b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b168_0x31b168");
#endif

    ctx->pc = 0x31b168u;

    // 0x31b168: 0x2e03001d  sltiu       $v1, $s0, 0x1D
    ctx->pc = 0x31b168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x31b16c: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31B16Cu;
    {
        const bool branch_taken_0x31b16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b16c) {
            ctx->pc = 0x31B0E4u;
            return;
        }
    }
    ctx->pc = 0x31B174u;
    // 0x31b174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31b178: 0xac6012a0  sw          $zero, 0x12A0($v1)
    ctx->pc = 0x31b178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 0));
    ctx->pc = 0x31b17cu;
}
