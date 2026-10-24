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

// Function: caseD_0
// Address: 0x14814c - 0x148190
void caseD_0_0x14814c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14814c");
#endif

    switch (ctx->pc) {
        case 0x14816cu: goto label_14816c;
        default: break;
    }

    ctx->pc = 0x14814cu;

    // 0x14814c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148150: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148154: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148158: 0x24060a25  addiu       $a2, $zero, 0xA25
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2597));
    // 0x14815c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14815cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148160: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148164: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148164u;
    SET_GPR_U32(ctx, 31, 0x14816Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148164u, 0x14816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14816Cu;
label_14816c:
    // 0x14816c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x148170: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148174: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x148174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x148178: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14817c: 0xac4013f0  sw          $zero, 0x13F0($v0)
    ctx->pc = 0x14817cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5104), GPR_U32(ctx, 0));
    // 0x148180: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148184: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14818c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14818cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x148190u;
}
