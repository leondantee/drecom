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

// Function: entry_0031b018
// Address: 0x31b018 - 0x31b030
void entry_0031b018_0x31b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b018_0x31b018");
#endif

    ctx->pc = 0x31b018u;

    // 0x31b018: 0x2e02001d  sltiu       $v0, $s0, 0x1D
    ctx->pc = 0x31b018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x31b01c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x31B01Cu;
    {
        const bool branch_taken_0x31b01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b01c) {
            ctx->pc = 0x31AF98u;
            return;
        }
    }
    ctx->pc = 0x31B024u;
    // 0x31b024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b028: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31b02c: 0xac4312a0  sw          $v1, 0x12A0($v0)
    ctx->pc = 0x31b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4768), GPR_U32(ctx, 3));
    ctx->pc = 0x31b030u;
}
