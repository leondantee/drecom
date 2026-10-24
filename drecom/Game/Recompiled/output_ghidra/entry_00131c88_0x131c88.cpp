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

// Function: entry_00131c88
// Address: 0x131c88 - 0x131cc8
void entry_00131c88_0x131c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c88_0x131c88");
#endif

    switch (ctx->pc) {
        case 0x131cb8u: goto label_131cb8;
        default: break;
    }

    ctx->pc = 0x131c88u;

    // 0x131c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c8c: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x131c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131c90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c94: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x131c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x131c98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131ca0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131ca4: 0x2406031c  addiu       $a2, $zero, 0x31C
    ctx->pc = 0x131ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 796));
    // 0x131ca8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131cac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131cb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131CB0u;
    SET_GPR_U32(ctx, 31, 0x131CB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131CB0u, 0x131CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CB8u;
label_131cb8:
    // 0x131cb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131cbc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x131cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131cc4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x131cc8u;
}
