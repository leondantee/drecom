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

// Function: caseD_2
// Address: 0x14823c - 0x1482b4
void caseD_2_0x14823c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14823c");
#endif

    switch (ctx->pc) {
        case 0x14825cu: goto label_14825c;
        default: break;
    }

    ctx->pc = 0x14823cu;

    // 0x14823c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148240: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148244: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148248: 0x2406141b  addiu       $a2, $zero, 0x141B
    ctx->pc = 0x148248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5147));
    // 0x14824c: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x14824cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x148250: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148254: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148254u;
    SET_GPR_U32(ctx, 31, 0x14825Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148254u, 0x14825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14825Cu;
label_14825c:
    // 0x14825c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x148260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148264: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148268: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x148268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x14826c: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x14826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
    // 0x148270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148274: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148278: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x148278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14827c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148280: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x148280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148284: 0x3c0243cd  lui         $v0, 0x43CD
    ctx->pc = 0x148284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17357 << 16));
    // 0x148288: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x148288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x14828c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14828cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148290: 0x0  nop
    ctx->pc = 0x148290u;
    // NOP
    // 0x148294: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x148294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x148298: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x148298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x14829c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1482a0: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x1482a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1482a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1482a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1482a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1482a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1482ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1482acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1482b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1482b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1482b4u;
}
