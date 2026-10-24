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

// Function: entry_0020c2d4
// Address: 0x20c2d4 - 0x20c2fc
void entry_0020c2d4_0x20c2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c2d4_0x20c2d4");
#endif

    ctx->pc = 0x20c2d4u;

    // 0x20c2d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2d8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20c2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c2dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c2e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20c2e8: 0x24060a22  addiu       $a2, $zero, 0xA22
    ctx->pc = 0x20c2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2594));
    // 0x20c2ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20c2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c2f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20c2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20c2f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20C2F4u;
    SET_GPR_U32(ctx, 31, 0x20C2FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20C2F4u, 0x20C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2FCu;
}
