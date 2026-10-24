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

// Function: entry_001ec7c4
// Address: 0x1ec7c4 - 0x1ec838
void entry_001ec7c4_0x1ec7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec7c4_0x1ec7c4");
#endif

    ctx->pc = 0x1ec7c4u;

    // 0x1ec7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec7c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7cc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ec7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec7d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec7dc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ec7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ec7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec7ec: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ec7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ec7f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ec7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ec7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec7fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec800: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ec800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ec804: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ec808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec80c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec810: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec814: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ec814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ec818: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec81c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ec81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec820: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ec824: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1ec828: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ec828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec82c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ec82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ec830: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EC830u;
    SET_GPR_U32(ctx, 31, 0x1EC838u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EC830u, 0x1EC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC838u;
}
