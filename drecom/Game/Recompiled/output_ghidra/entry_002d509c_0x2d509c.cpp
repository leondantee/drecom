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

// Function: entry_002d509c
// Address: 0x2d509c - 0x2d50dc
void entry_002d509c_0x2d509c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d509c_0x2d509c");
#endif

    switch (ctx->pc) {
        case 0x2d50bcu: goto label_2d50bc;
        default: break;
    }

    ctx->pc = 0x2d509cu;

    // 0x2d509c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d50a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d50a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d50a8: 0x2406641a  addiu       $a2, $zero, 0x641A
    ctx->pc = 0x2d50a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25626));
    // 0x2d50ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d50acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d50b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d50b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d50b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D50B4u;
    SET_GPR_U32(ctx, 31, 0x2D50BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D50B4u, 0x2D50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50BCu;
label_2d50bc:
    // 0x2d50bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50c0: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x2d50c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2d50c4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2d50c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2d50c8: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x2d50c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d50cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d50d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d50d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d50d8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d50d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d50dcu;
}
