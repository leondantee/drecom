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

// Function: entry_003283c8
// Address: 0x3283c8 - 0x328480
void entry_003283c8_0x3283c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003283c8_0x3283c8");
#endif

    switch (ctx->pc) {
        case 0x3283d0u: goto label_3283d0;
        case 0x32840cu: goto label_32840c;
        case 0x328448u: goto label_328448;
        default: break;
    }

    ctx->pc = 0x3283c8u;

    // 0x3283c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x3283C8u;
    SET_GPR_U32(ctx, 31, 0x3283D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3283C8u, 0x3283D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283D0u;
label_3283d0:
    // 0x3283d0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3283d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3283d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3283d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3283d8: 0x0  nop
    ctx->pc = 0x3283d8u;
    // NOP
    // 0x3283dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3283dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3283e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3283e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3283e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3283e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3283e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3283e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3283ec: 0xc4400480  lwc1        $f0, 0x480($v0)
    ctx->pc = 0x3283ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3283f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3283f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3283f4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3283f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3283f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3283f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3283fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3283fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328400: 0xe4400480  swc1        $f0, 0x480($v0)
    ctx->pc = 0x328400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1152), bits); }
    // 0x328404: 0xc067648  jal         func_19D920
    ctx->pc = 0x328404u;
    SET_GPR_U32(ctx, 31, 0x32840Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328404u, 0x32840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32840Cu;
label_32840c:
    // 0x32840c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32840cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x328410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x328410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x328414: 0x0  nop
    ctx->pc = 0x328414u;
    // NOP
    // 0x328418: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32841c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32841cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328420: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x328420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328428: 0xc4400484  lwc1        $f0, 0x484($v0)
    ctx->pc = 0x328428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32842c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32842cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x328430: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x328434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32843c: 0xe4400484  swc1        $f0, 0x484($v0)
    ctx->pc = 0x32843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1156), bits); }
    // 0x328440: 0xc067648  jal         func_19D920
    ctx->pc = 0x328440u;
    SET_GPR_U32(ctx, 31, 0x328448u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328440u, 0x328448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328448u;
label_328448:
    // 0x328448: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x328448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x32844c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32844cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x328450: 0x0  nop
    ctx->pc = 0x328450u;
    // NOP
    // 0x328454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x328458: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x328458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32845c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x32845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328464: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x328464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328468: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x328468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32846c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32846cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328470: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x328470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328474: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328478: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x328478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x32847c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32847cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x328480u;
}
