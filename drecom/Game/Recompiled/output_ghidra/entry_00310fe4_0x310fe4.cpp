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

// Function: entry_00310fe4
// Address: 0x310fe4 - 0x311014
void entry_00310fe4_0x310fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310fe4_0x310fe4");
#endif

    switch (ctx->pc) {
        case 0x311004u: goto label_311004;
        default: break;
    }

    ctx->pc = 0x310fe4u;

    // 0x310fe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310fe8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310fec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x310fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x310ff0: 0x24062835  addiu       $a2, $zero, 0x2835
    ctx->pc = 0x310ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10293));
    // 0x310ff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x310ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310ff8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x310ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310ffc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x310FFCu;
    SET_GPR_U32(ctx, 31, 0x311004u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x310FFCu, 0x311004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311004u;
label_311004:
    // 0x311004: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x311004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311008: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x311008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31100c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x311010: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x311010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x311014u;
}
