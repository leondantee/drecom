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
// Address: 0x14af90 - 0x14b02c
void caseD_0_0x14af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14af90");
#endif

    switch (ctx->pc) {
        case 0x14afbcu: goto label_14afbc;
        case 0x14affcu: goto label_14affc;
        default: break;
    }

    ctx->pc = 0x14af90u;

    // 0x14af90: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14af94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14af98: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14af98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14af9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14afa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14afa4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14afa8: 0x24060a27  addiu       $a2, $zero, 0xA27
    ctx->pc = 0x14afa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2599));
    // 0x14afac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14afacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14afb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14afb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14afb4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14AFB4u;
    SET_GPR_U32(ctx, 31, 0x14AFBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14AFB4u, 0x14AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFBCu;
label_14afbc:
    // 0x14afbc: 0x3c02bf40  lui         $v0, 0xBF40
    ctx->pc = 0x14afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48960 << 16));
    // 0x14afc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14afc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14afc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14afc8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x14afcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14afccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14afd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14afd4: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x14afd8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14afdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14afe0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14afe0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14afe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14afe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14afec: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14aff0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14aff4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14AFF4u;
    SET_GPR_U32(ctx, 31, 0x14AFFCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14AFF4u, 0x14AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFFCu;
label_14affc:
    // 0x14affc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b000: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14b000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14b004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b008: 0x0  nop
    ctx->pc = 0x14b008u;
    // NOP
    // 0x14b00c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14b00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b010: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14b010u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14b014: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b018: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x14b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
    // 0x14b01c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b020: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14b024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b028: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14b02cu;
}
