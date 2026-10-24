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

// Function: entry_002d4ebc
// Address: 0x2d4ebc - 0x2d4eec
void entry_002d4ebc_0x2d4ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4ebc_0x2d4ebc");
#endif

    switch (ctx->pc) {
        case 0x2d4edcu: goto label_2d4edc;
        default: break;
    }

    ctx->pc = 0x2d4ebcu;

    // 0x2d4ebc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ec0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ec4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4ec8: 0x2406642b  addiu       $a2, $zero, 0x642B
    ctx->pc = 0x2d4ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25643));
    // 0x2d4ecc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4ed0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4ed4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4ED4u;
    SET_GPR_U32(ctx, 31, 0x2D4EDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4ED4u, 0x2D4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EDCu;
label_2d4edc:
    // 0x2d4edc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ee0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4ee8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d4eecu;
}
