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

// Function: entry_002d716c
// Address: 0x2d716c - 0x2d7208
void entry_002d716c_0x2d716c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d716c_0x2d716c");
#endif

    switch (ctx->pc) {
        case 0x2d718cu: goto label_2d718c;
        case 0x2d71c0u: goto label_2d71c0;
        case 0x2d71e0u: goto label_2d71e0;
        default: break;
    }

    ctx->pc = 0x2d716cu;

    // 0x2d716c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7170: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7174: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d7174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d7178: 0x24063c09  addiu       $a2, $zero, 0x3C09
    ctx->pc = 0x2d7178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15369));
    // 0x2d717c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d717cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d7180: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7184: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7184u;
    SET_GPR_U32(ctx, 31, 0x2D718Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7184u, 0x2D718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D718Cu;
label_2d718c:
    // 0x2d718c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d718cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7190: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7194: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7198: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d719c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d71a0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d71a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d71a4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d71a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d71a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d71ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d71acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d71b0: 0x0  nop
    ctx->pc = 0x2d71b0u;
    // NOP
    // 0x2d71b4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2d71b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d71b8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D71B8u;
    SET_GPR_U32(ctx, 31, 0x2D71C0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D71B8u, 0x2D71C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71C0u;
label_2d71c0:
    // 0x2d71c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d71c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d71c8: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2d71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d71cc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d71ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d71d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d71d4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d71d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d71d8: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D71D8u;
    SET_GPR_U32(ctx, 31, 0x2D71E0u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D71D8u, 0x2D71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71E0u;
label_2d71e0:
    // 0x2d71e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d71e4: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d71e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d71e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d71ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d71f0: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d71f4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d71f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d71f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d71fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d71fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7200: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d7200u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d7204: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x2d7208u;
}
