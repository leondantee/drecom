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

// Function: entry_001314a8
// Address: 0x1314a8 - 0x131508
void entry_001314a8_0x1314a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001314a8_0x1314a8");
#endif

    switch (ctx->pc) {
        case 0x1314f8u: goto label_1314f8;
        default: break;
    }

    ctx->pc = 0x1314a8u;

    // 0x1314a8: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1314a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1314ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1314acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1314b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314b4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1314b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1314b8: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1314b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1314bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1314bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1314c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314c4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1314c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1314c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314cc: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x1314ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1314d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1314d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1314d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1314dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1314e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1314e4: 0x2406031c  addiu       $a2, $zero, 0x31C
    ctx->pc = 0x1314e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 796));
    // 0x1314e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1314e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1314ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1314ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1314f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1314F0u;
    SET_GPR_U32(ctx, 31, 0x1314F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1314F0u, 0x1314F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314F8u;
label_1314f8:
    // 0x1314f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1314f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314fc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1314fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131504: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x131508u;
}
