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

// Function: entry_0036685c
// Address: 0x36685c - 0x366898
void entry_0036685c_0x36685c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036685c_0x36685c");
#endif

    switch (ctx->pc) {
        case 0x36687cu: goto label_36687c;
        default: break;
    }

    ctx->pc = 0x36685cu;

    // 0x36685c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366860: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366864: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366868: 0x24060a0d  addiu       $a2, $zero, 0xA0D
    ctx->pc = 0x366868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    // 0x36686c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36686cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366870: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366874: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366874u;
    SET_GPR_U32(ctx, 31, 0x36687Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366874u, 0x36687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36687Cu;
label_36687c:
    // 0x36687c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x36687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x366880: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366884: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x366888: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36688c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36688cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366894: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x366898u;
}
