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

// Function: caseD_10
// Address: 0x146e80 - 0x146ed4
void caseD_10_0x146e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x146e80");
#endif

    switch (ctx->pc) {
        case 0x146ea4u: goto label_146ea4;
        default: break;
    }

    ctx->pc = 0x146e80u;

    // 0x146e80: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146e84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146e88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x146e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x146e8c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x146e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x146e90: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x146e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x146e94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146e98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146e9c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x146E9Cu;
    SET_GPR_U32(ctx, 31, 0x146EA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146E9Cu, 0x146EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EA4u;
label_146ea4:
    // 0x146ea4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x146ea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146ea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146eac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146eb0: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x146eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x146eb4: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x146eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x146eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146ec0: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x146ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x146ec4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146ec8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x146ec8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x146ecc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x146eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146ed0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x146ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x146ed4u;
}
