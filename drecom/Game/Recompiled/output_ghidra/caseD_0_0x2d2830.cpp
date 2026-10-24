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
// Address: 0x2d2830 - 0x2d2890
void caseD_0_0x2d2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2d2830");
#endif

    switch (ctx->pc) {
        case 0x2d2864u: goto label_2d2864;
        default: break;
    }

    ctx->pc = 0x2d2830u;

    // 0x2d2830: 0x3c0240ac  lui         $v0, 0x40AC
    ctx->pc = 0x2d2830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16556 << 16));
    // 0x2d2834: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x2d2834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x2d2838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d283c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2840: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2d2840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2d2844: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2848: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d284c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d2850: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x2d2850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
    // 0x2d2854: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2858: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d285c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D285Cu;
    SET_GPR_U32(ctx, 31, 0x2D2864u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D285Cu, 0x2D2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2864u;
label_2d2864:
    // 0x2d2864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d2864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d286c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d2870: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d2870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d2874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2878: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d287c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2d287cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2d2880: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d2880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2884: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d288c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d288cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d2890u;
}
