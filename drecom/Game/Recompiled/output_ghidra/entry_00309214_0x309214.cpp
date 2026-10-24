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

// Function: entry_00309214
// Address: 0x309214 - 0x30929c
void entry_00309214_0x309214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309214_0x309214");
#endif

    switch (ctx->pc) {
        case 0x309240u: goto label_309240;
        case 0x309254u: goto label_309254;
        case 0x30926cu: goto label_30926c;
        case 0x309278u: goto label_309278;
        case 0x309288u: goto label_309288;
        case 0x309294u: goto label_309294;
        default: break;
    }

    ctx->pc = 0x309214u;

    // 0x309214: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x309214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x309218: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x309218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x30921c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30921cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309220: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309224: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309228: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30922c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x309230: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x309230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309234: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x309234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x309238: 0xc05c848  jal         func_172120
    ctx->pc = 0x309238u;
    SET_GPR_U32(ctx, 31, 0x309240u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x309238u, 0x309240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309240u;
label_309240:
    // 0x309240: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309244: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x309244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309248: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x309248u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30924c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30924Cu;
    SET_GPR_U32(ctx, 31, 0x309254u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30924Cu, 0x309254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309254u;
label_309254:
    // 0x309254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309258: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x309258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30925c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309260: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309264: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x309264u;
    SET_GPR_U32(ctx, 31, 0x30926Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x309264u, 0x30926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30926Cu;
label_30926c:
    // 0x30926c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309270: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309270u;
    SET_GPR_U32(ctx, 31, 0x309278u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309270u, 0x309278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309278u;
label_309278:
    // 0x309278: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30927c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309280: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x309280u;
    SET_GPR_U32(ctx, 31, 0x309288u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309280u, 0x309288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309288u;
label_309288:
    // 0x309288: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30928c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30928Cu;
    SET_GPR_U32(ctx, 31, 0x309294u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30928Cu, 0x309294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309294u;
label_309294:
    // 0x309294: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x309294u;
    {
        const bool branch_taken_0x309294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309294) {
            ctx->pc = 0x30938Cu;
            return;
        }
    }
    ctx->pc = 0x30929Cu;
}
