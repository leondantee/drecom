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

// Function: entry_002d6bc8
// Address: 0x2d6bc8 - 0x2d6c64
void entry_002d6bc8_0x2d6bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6bc8_0x2d6bc8");
#endif

    switch (ctx->pc) {
        case 0x2d6be8u: goto label_2d6be8;
        case 0x2d6c1cu: goto label_2d6c1c;
        case 0x2d6c3cu: goto label_2d6c3c;
        default: break;
    }

    ctx->pc = 0x2d6bc8u;

    // 0x2d6bc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6bcc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6bd0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d6bd4: 0x24063c06  addiu       $a2, $zero, 0x3C06
    ctx->pc = 0x2d6bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15366));
    // 0x2d6bd8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d6bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d6bdc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d6bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d6be0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D6BE0u;
    SET_GPR_U32(ctx, 31, 0x2D6BE8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D6BE0u, 0x2D6BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BE8u;
label_2d6be8:
    // 0x2d6be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6bec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6bf0: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6bf4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6bf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6bfc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6c00: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d6c04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d6c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d6c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6c0c: 0x0  nop
    ctx->pc = 0x2d6c0cu;
    // NOP
    // 0x2d6c10: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2d6c10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d6c14: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D6C14u;
    SET_GPR_U32(ctx, 31, 0x2D6C1Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D6C14u, 0x2D6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C1Cu;
label_2d6c1c:
    // 0x2d6c1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6c24: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2d6c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d6c28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d6c28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6c2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d6c30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d6c34: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D6C34u;
    SET_GPR_U32(ctx, 31, 0x2D6C3Cu);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D6C34u, 0x2D6C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C3Cu;
label_2d6c3c:
    // 0x2d6c3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c40: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6c44: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6c48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c4c: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6c50: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d6c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6c58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6c5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d6c5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d6c60: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x2d6c64u;
}
