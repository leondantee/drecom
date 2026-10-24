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

// Function: entry_0036c0f8
// Address: 0x36c0f8 - 0x36c128
void entry_0036c0f8_0x36c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c0f8_0x36c0f8");
#endif

    switch (ctx->pc) {
        case 0x36c118u: goto label_36c118;
        default: break;
    }

    ctx->pc = 0x36c0f8u;

    // 0x36c0f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x36c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c0fc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c100: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36c100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36c104: 0x24065a06  addiu       $a2, $zero, 0x5A06
    ctx->pc = 0x36c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23046));
    // 0x36c108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36c108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c10c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36c10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c110: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36C110u;
    SET_GPR_U32(ctx, 31, 0x36C118u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36C110u, 0x36C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C118u;
label_36c118:
    // 0x36c118: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c11c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36c11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36c124: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36c124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36c128u;
}
