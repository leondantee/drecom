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

// Function: entry_00336adc
// Address: 0x336adc - 0x336b04
void entry_00336adc_0x336adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336adc_0x336adc");
#endif

    switch (ctx->pc) {
        case 0x336ae4u: goto label_336ae4;
        default: break;
    }

    ctx->pc = 0x336adcu;

    // 0x336adc: 0xc0cc9a0  jal         func_332680
    ctx->pc = 0x336ADCu;
    SET_GPR_U32(ctx, 31, 0x336AE4u);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x336ADCu, 0x336AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336AE4u;
label_336ae4:
    // 0x336ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ae8: 0xa2026625  sb          $v0, 0x6625($s0)
    ctx->pc = 0x336ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26149), (uint8_t)GPR_U32(ctx, 2));
    // 0x336aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336af0: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x336af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x336af4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x336af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336af8: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x336af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x336afc: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x336afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x336b00: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x336b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    ctx->pc = 0x336b04u;
}
