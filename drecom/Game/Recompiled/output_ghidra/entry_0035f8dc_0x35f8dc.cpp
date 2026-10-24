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

// Function: entry_0035f8dc
// Address: 0x35f8dc - 0x35f904
void entry_0035f8dc_0x35f8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f8dc_0x35f8dc");
#endif

    switch (ctx->pc) {
        case 0x35f8e8u: goto label_35f8e8;
        default: break;
    }

    ctx->pc = 0x35f8dcu;

    // 0x35f8dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f8e0: 0xc0d7ca4  jal         func_35F290
    ctx->pc = 0x35F8E0u;
    SET_GPR_U32(ctx, 31, 0x35F8E8u);
    ctx->pc = 0x35F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F290u, 0x35F8E0u, 0x35F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8E8u;
label_35f8e8:
    // 0x35f8e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f8ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f8f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f8f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f8f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35f8fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f900: 0xac431290  sw          $v1, 0x1290($v0)
    ctx->pc = 0x35f900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 3));
    ctx->pc = 0x35f904u;
}
