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

// Function: entry_00305604
// Address: 0x305604 - 0x305634
void entry_00305604_0x305604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305604_0x305604");
#endif

    switch (ctx->pc) {
        case 0x305624u: goto label_305624;
        default: break;
    }

    ctx->pc = 0x305604u;

    // 0x305604: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305608: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30560c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30560cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x305610: 0x24062828  addiu       $a2, $zero, 0x2828
    ctx->pc = 0x305610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10280));
    // 0x305614: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305618: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30561c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30561Cu;
    SET_GPR_U32(ctx, 31, 0x305624u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30561Cu, 0x305624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305624u;
label_305624:
    // 0x305624: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305628: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30562c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305630: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x305634u;
}
