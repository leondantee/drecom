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

// Function: entry_0022fb30
// Address: 0x22fb30 - 0x22fb48
void entry_0022fb30_0x22fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fb30_0x22fb30");
#endif

    ctx->pc = 0x22fb30u;

    // 0x22fb30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb34: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fb38: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22fb3c: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22fb40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22fb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22fb44: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x22fb48u;
}
