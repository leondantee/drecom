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
// Address: 0x14a860 - 0x14a8fc
void caseD_0_0x14a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14a860");
#endif

    switch (ctx->pc) {
        case 0x14a88cu: goto label_14a88c;
        case 0x14a8ccu: goto label_14a8cc;
        default: break;
    }

    ctx->pc = 0x14a860u;

    // 0x14a860: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14a864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a868: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14a868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a86c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a874: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a878: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x14a878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x14a87c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14a87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a880: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a884: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A884u;
    SET_GPR_U32(ctx, 31, 0x14A88Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A884u, 0x14A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A88Cu;
label_14a88c:
    // 0x14a88c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x14a890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a898: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14a898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x14a89c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14a89cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a8a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a8a4: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14a8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x14a8a8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14a8ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a8b0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14a8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a8b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a8b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a8bc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a8c0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a8c4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14A8C4u;
    SET_GPR_U32(ctx, 31, 0x14A8CCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14A8C4u, 0x14A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A8CCu;
label_14a8cc:
    // 0x14a8cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a8d0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14a8d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14a8d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14a8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a8d8: 0x0  nop
    ctx->pc = 0x14a8d8u;
    // NOP
    // 0x14a8dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14a8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14a8e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14a8e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14a8e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a8e8: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x14a8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
    // 0x14a8ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a8f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a8f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14a8f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a8f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14a8fcu;
}
