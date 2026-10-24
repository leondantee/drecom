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

// Function: entry_00376180
// Address: 0x376180 - 0x376228
void entry_00376180_0x376180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376180_0x376180");
#endif

    switch (ctx->pc) {
        case 0x376190u: goto label_376190;
        case 0x3761d8u: goto label_3761d8;
        case 0x3761fcu: goto label_3761fc;
        case 0x376208u: goto label_376208;
        default: break;
    }

    ctx->pc = 0x376180u;

    // 0x376180: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376184: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376184u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376188: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376188u;
    SET_GPR_U32(ctx, 31, 0x376190u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376188u, 0x376190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376190u;
label_376190:
    // 0x376190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376194: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x376194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376198: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x376198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x37619c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37619cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3761a0: 0x0  nop
    ctx->pc = 0x3761a0u;
    // NOP
    // 0x3761a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3761a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3761a8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x3761a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x3761ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761b0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x3761b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3761b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3761b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3761bc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x3761bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3761c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3761c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3761c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761c8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3761c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3761cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3761ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3761D0u;
    SET_GPR_U32(ctx, 31, 0x3761D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3761D0u, 0x3761D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761D8u;
label_3761d8:
    // 0x3761d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3761dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3761e0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3761e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3761e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3761e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761e8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3761e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3761ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3761ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3761f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3761f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3761f4: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x3761F4u;
    SET_GPR_U32(ctx, 31, 0x3761FCu);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x3761F4u, 0x3761FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761FCu;
label_3761fc:
    // 0x3761fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3761fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376200: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376200u;
    SET_GPR_U32(ctx, 31, 0x376208u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376200u, 0x376208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376208u;
label_376208:
    // 0x376208: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37620c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x37620cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x376210: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x376210u;
    {
        const bool branch_taken_0x376210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376210) {
            ctx->pc = 0x376228u;
            return;
        }
    }
    ctx->pc = 0x376218u;
    // 0x376218: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37621c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x37621cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x376220: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x376220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x376224: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x376224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x376228u;
}
