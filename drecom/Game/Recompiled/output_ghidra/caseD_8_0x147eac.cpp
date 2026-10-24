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

// Function: caseD_8
// Address: 0x147eac - 0x147ef0
void caseD_8_0x147eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x147eac");
#endif

    switch (ctx->pc) {
        case 0x147eccu: goto label_147ecc;
        default: break;
    }

    ctx->pc = 0x147eacu;

    // 0x147eac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147eb0: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x147eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147eb4: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x147eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x147eb8: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x147eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x147ebc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x147ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147ec0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147ec4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147EC4u;
    SET_GPR_U32(ctx, 31, 0x147ECCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147EC4u, 0x147ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147ECCu;
label_147ecc:
    // 0x147ecc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x147eccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147ed0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ed4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x147ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147ed8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147edc: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x147edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x147ee0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ee4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x147ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x147ee8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x147ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x147eec: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x147eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x147ef0u;
}
