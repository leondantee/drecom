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
// Address: 0x26ca64 - 0x26cadc
void caseD_0_0x26ca64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x26ca64");
#endif

    switch (ctx->pc) {
        case 0x26ca90u: goto label_26ca90;
        default: break;
    }

    ctx->pc = 0x26ca64u;

    // 0x26ca64: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x26ca64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26ca68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ca6c: 0xa04710a8  sb          $a3, 0x10A8($v0)
    ctx->pc = 0x26ca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 7));
    // 0x26ca70: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ca74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ca78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26ca78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26ca7c: 0x24060a64  addiu       $a2, $zero, 0xA64
    ctx->pc = 0x26ca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2660));
    // 0x26ca80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26ca80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ca84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26ca84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26ca88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26CA88u;
    SET_GPR_U32(ctx, 31, 0x26CA90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26CA88u, 0x26CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA90u;
label_26ca90:
    // 0x26ca90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ca90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ca94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ca98: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x26ca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x26ca9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ca9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26caa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26caa4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x26caa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x26caa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26caa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26caac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cab0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26cab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26cab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cab8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cabc: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x26cac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cac4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cac8: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26cac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x26cacc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cad0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26cad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26cad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26cad8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26cad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26cadcu;
}
