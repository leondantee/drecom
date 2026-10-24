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

// Function: entry_00351f18
// Address: 0x351f18 - 0x351f4c
void entry_00351f18_0x351f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00351f18_0x351f18");
#endif

    switch (ctx->pc) {
        case 0x351f34u: goto label_351f34;
        default: break;
    }

    ctx->pc = 0x351f18u;

    // 0x351f18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f1c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x351f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x351f20: 0x24060f01  addiu       $a2, $zero, 0xF01
    ctx->pc = 0x351f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3841));
    // 0x351f24: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x351f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x351f28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x351f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x351f2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x351F2Cu;
    SET_GPR_U32(ctx, 31, 0x351F34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x351F2Cu, 0x351F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F34u;
label_351f34:
    // 0x351f34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x351f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x351f38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f3c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x351f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x351f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x351f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351f44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x351f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f48: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x351f48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x351f4cu;
}
