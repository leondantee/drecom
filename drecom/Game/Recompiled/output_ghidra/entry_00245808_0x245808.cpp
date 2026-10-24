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

// Function: entry_00245808
// Address: 0x245808 - 0x245890
void entry_00245808_0x245808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245808_0x245808");
#endif

    switch (ctx->pc) {
        case 0x245844u: goto label_245844;
        default: break;
    }

    ctx->pc = 0x245808u;

    // 0x245808: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24580c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x24580cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x245810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245814: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x245814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x245818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24581c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x24581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245820: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x245820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x245824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x245828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24582c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x24582cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x245830: 0x2406781e  addiu       $a2, $zero, 0x781E
    ctx->pc = 0x245830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30750));
    // 0x245834: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245838: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24583c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x24583Cu;
    SET_GPR_U32(ctx, 31, 0x245844u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x24583Cu, 0x245844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245844u;
label_245844:
    // 0x245844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245848: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24584c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245850: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x245850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x245854: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x245854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x245858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24585c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x24585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245860: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245864: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x245864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x245868: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x245868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x24586c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24586cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245870: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245874: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245878: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x245878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x24587c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x24587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x245880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245884: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245888: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24588c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x24588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x245890u;
}
