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

// Function: entry_0023894c
// Address: 0x23894c - 0x2389c8
void entry_0023894c_0x23894c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023894c_0x23894c");
#endif

    ctx->pc = 0x23894cu;

    // 0x23894c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x238950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238954: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x238954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x238958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23895c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238960: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238964: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x238964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x238968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23896c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238970: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238974: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x238974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x238978: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23897c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238984: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x238984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238988: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23898c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23898cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x238990: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x238990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x238994: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x238994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23899c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2389a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2389a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2389a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2389a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2389a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2389acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2389b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2389b4: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x2389b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x2389b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2389b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2389bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2389bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2389c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2389C0u;
    SET_GPR_U32(ctx, 31, 0x2389C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2389C0u, 0x2389C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389C8u;
}
