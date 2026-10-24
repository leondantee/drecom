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
// Address: 0x245c18 - 0x245ca4
void caseD_0_0x245c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x245c18");
#endif

    switch (ctx->pc) {
        case 0x245c48u: goto label_245c48;
        default: break;
    }

    ctx->pc = 0x245c18u;

    // 0x245c18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245c1c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x245c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x245c20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x245c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x245c24: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x245c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x245c28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245c2c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245c30: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x245c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x245c34: 0x24067820  addiu       $a2, $zero, 0x7820
    ctx->pc = 0x245c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30752));
    // 0x245c38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245c3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x245c40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x245C40u;
    SET_GPR_U32(ctx, 31, 0x245C48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245C40u, 0x245C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245C48u;
label_245c48:
    // 0x245c48: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245c48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x245c4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245c50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245c54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245c58: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x245c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x245c5c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x245c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x245c60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x245c60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245c64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245c68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245c6c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x245c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x245c70: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x245c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245c78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245c7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245c80: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x245c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x245c84: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x245c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245c8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245c90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245c94: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x245c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x245c98: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x245c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x245c9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245ca0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x245ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x245ca4u;
}
