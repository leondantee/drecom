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

// Function: camera_zoom_init
// Address: 0x180a80 - 0x180b74
void camera_zoom_init_0x180a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_zoom_init_0x180a80");
#endif

    switch (ctx->pc) {
        case 0x180b54u: goto label_180b54;
        case 0x180b60u: goto label_180b60;
        default: break;
    }

    ctx->pc = 0x180a80u;

    // 0x180a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180a84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x180a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x180a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180a8c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x180a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x180a90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x180a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x180a94: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x180a94u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x180a98: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x180a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x180a9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x180a9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180aa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x180aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180aa4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x180aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x180aa8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x180aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x180aac: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x180aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x180ab0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x180ab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180ab4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x180ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180ab8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x180abc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x180abcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x180ac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x180ac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180ac4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x180ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180ac8: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x180ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x180acc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180ad0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x180ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x180ad4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x180ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x180ad8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180ad8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180adc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x180adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180ae4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x180ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180ae8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x180aec: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x180aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x180af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180af4: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x180af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180af8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x180af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180afc: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x180afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x180b00: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180b04: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x180b04u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x180b08: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x180b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x180b0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180b0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180b10: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x180b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180b18: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180b1c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x180b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x180b20: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x180b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x180b24: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x180b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180b28: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x180b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x180b2c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x180b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x180b30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x180b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x180b34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180b38: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x180b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x180b3c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x180b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x180b40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x180b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180b44: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x180b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x180b48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x180b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180b4c: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x180B4Cu;
    SET_GPR_U32(ctx, 31, 0x180B54u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x180B4Cu, 0x180B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B54u;
label_180b54:
    // 0x180b54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x180b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180b58: 0xc0602e0  jal         func_180B80
    ctx->pc = 0x180B58u;
    SET_GPR_U32(ctx, 31, 0x180B60u);
    ctx->pc = 0x180B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B80u, 0x180B58u, 0x180B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B60u;
label_180b60:
    // 0x180b60: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x180b60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180b68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x180b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x180B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180B74u;
}
