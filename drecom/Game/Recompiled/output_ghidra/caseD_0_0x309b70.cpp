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

// Function: caseD_0
// Address: 0x309b70 - 0x309bac
void caseD_0_0x309b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x309b70");
#endif

    switch (ctx->pc) {
        case 0x309b90u: goto label_309b90;
        default: break;
    }

    ctx->pc = 0x309b70u;

    // 0x309b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309b74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309b78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x309b7c: 0x24062839  addiu       $a2, $zero, 0x2839
    ctx->pc = 0x309b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10297));
    // 0x309b80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309b84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309b88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309B88u;
    SET_GPR_U32(ctx, 31, 0x309B90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309B88u, 0x309B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B90u;
label_309b90:
    // 0x309b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309b94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309b98: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x309b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x309b9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309ba0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x309ba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309ba8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x309bacu;
}
