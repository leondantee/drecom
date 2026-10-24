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

// Function: entry_00198e14
// Address: 0x198e14 - 0x198e6c
void entry_00198e14_0x198e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198e14_0x198e14");
#endif

    switch (ctx->pc) {
        case 0x198e34u: goto label_198e34;
        default: break;
    }

    ctx->pc = 0x198e14u;

    // 0x198e14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x198e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x198e20: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x198e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x198e24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198e28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x198e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x198e2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x198E2Cu;
    SET_GPR_U32(ctx, 31, 0x198E34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x198E2Cu, 0x198E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E34u;
label_198e34:
    // 0x198e34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e3c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x198e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x198e40: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x198e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e4c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x198e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x198e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x198e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198e54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e58: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x198e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x198e5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198e60: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x198e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198e64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198e68: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x198e68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x198e6cu;
}
