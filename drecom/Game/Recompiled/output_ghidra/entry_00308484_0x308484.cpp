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

// Function: entry_00308484
// Address: 0x308484 - 0x3084b4
void entry_00308484_0x308484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308484_0x308484");
#endif

    switch (ctx->pc) {
        case 0x3084a4u: goto label_3084a4;
        default: break;
    }

    ctx->pc = 0x308484u;

    // 0x308484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308488: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30848c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30848cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x308490: 0x24062844  addiu       $a2, $zero, 0x2844
    ctx->pc = 0x308490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10308));
    // 0x308494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x308498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30849c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30849Cu;
    SET_GPR_U32(ctx, 31, 0x3084A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30849Cu, 0x3084A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084A4u;
label_3084a4:
    // 0x3084a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3084a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3084a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3084a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3084ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3084acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3084b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3084b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3084b4u;
}
