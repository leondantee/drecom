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

// Function: entry_001f38fc
// Address: 0x1f38fc - 0x1f3928
void entry_001f38fc_0x1f38fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f38fc_0x1f38fc");
#endif

    ctx->pc = 0x1f38fcu;

    // 0x1f38fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3904: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f3904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f3908: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f390c: 0x3446b400  ori         $a2, $v0, 0xB400
    ctx->pc = 0x1f390cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1f3910: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3914: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f3914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f3918: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f391c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f391cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3920: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3920u;
    SET_GPR_U32(ctx, 31, 0x1F3928u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3920u, 0x1F3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3928u;
}
