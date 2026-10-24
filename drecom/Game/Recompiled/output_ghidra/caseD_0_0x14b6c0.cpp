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
// Address: 0x14b6c0 - 0x14b75c
void caseD_0_0x14b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14b6c0");
#endif

    switch (ctx->pc) {
        case 0x14b6ecu: goto label_14b6ec;
        case 0x14b72cu: goto label_14b72c;
        default: break;
    }

    ctx->pc = 0x14b6c0u;

    // 0x14b6c0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14b6c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b6c8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b6cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b6d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b6d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14b6d8: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x14b6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x14b6dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b6e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14b6e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14B6E4u;
    SET_GPR_U32(ctx, 31, 0x14B6ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B6E4u, 0x14B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B6ECu;
label_14b6ec:
    // 0x14b6ec: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x14b6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b6f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b6f8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14b6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x14b6fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b700: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b704: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x14b708: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14b70c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b710: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14b710u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14b714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b718: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b71c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14b71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14b720: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14b724: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14B724u;
    SET_GPR_U32(ctx, 31, 0x14B72Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14B724u, 0x14B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B72Cu;
label_14b72c:
    // 0x14b72c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b730: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14b730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14b734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b738: 0x0  nop
    ctx->pc = 0x14b738u;
    // NOP
    // 0x14b73c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14b73cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14b740: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14b740u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14b744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b748: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x14b748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
    // 0x14b74c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b750: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14b754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b758: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14b75cu;
}
