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

// Function: entry_00308c74
// Address: 0x308c74 - 0x308cb8
void entry_00308c74_0x308c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308c74_0x308c74");
#endif

    switch (ctx->pc) {
        case 0x308c94u: goto label_308c94;
        default: break;
    }

    ctx->pc = 0x308c74u;

    // 0x308c74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x308c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x308c80: 0x24062836  addiu       $a2, $zero, 0x2836
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10294));
    // 0x308c84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308c88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x308c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x308c8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x308C8Cu;
    SET_GPR_U32(ctx, 31, 0x308C94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x308C8Cu, 0x308C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C94u;
label_308c94:
    // 0x308c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x308c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308c98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c9c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x308c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x308ca0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ca4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x308ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x308ca8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308cac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x308cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308cb4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x308cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x308cb8u;
}
