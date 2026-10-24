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

// Function: caseD_4
// Address: 0x2e7084 - 0x2e70b4
void caseD_4_0x2e7084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2e7084");
#endif

    switch (ctx->pc) {
        case 0x2e70a4u: goto label_2e70a4;
        default: break;
    }

    ctx->pc = 0x2e7084u;

    // 0x2e7084: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e7084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7088: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e7088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e708c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e708cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e7090: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2e7090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e7094: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e7094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7098: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e7098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e709c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E709Cu;
    SET_GPR_U32(ctx, 31, 0x2E70A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E709Cu, 0x2E70A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70A4u;
label_2e70a4:
    // 0x2e70a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e70a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e70a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e70ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e70acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e70b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e70b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e70b4u;
}
