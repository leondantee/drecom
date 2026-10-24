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

// Function: entry_001f6c28
// Address: 0x1f6c28 - 0x1f6c40
void entry_001f6c28_0x1f6c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6c28_0x1f6c28");
#endif

    ctx->pc = 0x1f6c28u;

    // 0x1f6c28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c2c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c30: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f6c34: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f6c38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6c3c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1f6c40u;
}
