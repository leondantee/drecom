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

// Function: caseD_a
// Address: 0x146c2c - 0x146c9c
void caseD_a_0x146c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x146c2c");
#endif

    switch (ctx->pc) {
        case 0x146c78u: goto label_146c78;
        default: break;
    }

    ctx->pc = 0x146c2cu;

    // 0x146c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146c30: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146c34: 0xe4c01b50  swc1        $f0, 0x1B50($a2)
    ctx->pc = 0x146c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 6992), bits); }
    // 0x146c38: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x146c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146c3c: 0xc4e10124  lwc1        $f1, 0x124($a3)
    ctx->pc = 0x146c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146c40: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
    // 0x146c44: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x146c44u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146c48: 0x0  nop
    ctx->pc = 0x146c48u;
    // NOP
    // 0x146c4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146c50: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x146c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
    // 0x146c54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146c58: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146c58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146c5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146c5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146c60: 0x8d050368  lw          $a1, 0x368($t0)
    ctx->pc = 0x146c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
    // 0x146c64: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x146c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x146c68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146c6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146c70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x146C70u;
    SET_GPR_U32(ctx, 31, 0x146C78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146C70u, 0x146C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C78u;
label_146c78:
    // 0x146c78: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x146c78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146c7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146c80: 0x8c441b64  lw          $a0, 0x1B64($v0)
    ctx->pc = 0x146c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x146c84: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x146c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x146c88: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x146c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
    // 0x146c8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146c90: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x146c90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x146c94: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x146c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146c98: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x146c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x146c9cu;
}
