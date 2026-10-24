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

// Function: caseD_c
// Address: 0x146d14 - 0x146d54
void caseD_c_0x146d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x146d14");
#endif

    switch (ctx->pc) {
        case 0x146d34u: goto label_146d34;
        default: break;
    }

    ctx->pc = 0x146d14u;

    // 0x146d14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146d18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146d1c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x146d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x146d20: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x146d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x146d24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146d28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146d2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x146D2Cu;
    SET_GPR_U32(ctx, 31, 0x146D34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146D2Cu, 0x146D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D34u;
label_146d34:
    // 0x146d34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146d38: 0x8c851b64  lw          $a1, 0x1B64($a0)
    ctx->pc = 0x146d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
    // 0x146d3c: 0x24a6fffe  addiu       $a2, $a1, -0x2
    ctx->pc = 0x146d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x146d40: 0xac861b64  sw          $a2, 0x1B64($a0)
    ctx->pc = 0x146d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7012), GPR_U32(ctx, 6));
    // 0x146d44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146d48: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x146d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x146d4c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x146d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146d50: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x146d50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x146d54u;
}
