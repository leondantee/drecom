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

// Function: camera_devil_init
// Address: 0x183ae0 - 0x183c04
void camera_devil_init_0x183ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_devil_init_0x183ae0");
#endif

    switch (ctx->pc) {
        case 0x183b34u: goto label_183b34;
        case 0x183b44u: goto label_183b44;
        case 0x183b84u: goto label_183b84;
        case 0x183bb4u: goto label_183bb4;
        case 0x183bc0u: goto label_183bc0;
        case 0x183bccu: goto label_183bcc;
        case 0x183bf0u: goto label_183bf0;
        default: break;
    }

    ctx->pc = 0x183ae0u;

    // 0x183ae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x183ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x183ae4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x183ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x183ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183aec: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x183aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x183af0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x183af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x183af4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x183af4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x183af8: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x183af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x183afc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183b00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x183b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183b04: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x183b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x183b08: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183b08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183b0c: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x183b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183b10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183b10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183b14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x183b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183b18: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x183b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x183b1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183b20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183b24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x183b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x183b28: 0xc42cdc94  lwc1        $f12, -0x236C($at)
    ctx->pc = 0x183b28u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x183b2c: 0xc067844  jal         func_19E110
    ctx->pc = 0x183B2Cu;
    SET_GPR_U32(ctx, 31, 0x183B34u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x183B2Cu, 0x183B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B34u;
label_183b34:
    // 0x183b34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183b38: 0x24440260  addiu       $a0, $v0, 0x260
    ctx->pc = 0x183b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x183b3c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x183B3Cu;
    SET_GPR_U32(ctx, 31, 0x183B44u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x183B3Cu, 0x183B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B44u;
label_183b44:
    // 0x183b44: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x183b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x183b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183b4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183b50: 0xe4200264  swc1        $f0, 0x264($at)
    ctx->pc = 0x183b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480264u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480264u, _value); } while (0); }
    // 0x183b54: 0x3c02c4da  lui         $v0, 0xC4DA
    ctx->pc = 0x183b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50394 << 16));
    // 0x183b58: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x183b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x183b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183b60: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183b64: 0xe4200268  swc1        $f0, 0x268($at)
    ctx->pc = 0x183b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480268u, _value); } while (0); }
    // 0x183b68: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183b6c: 0x24440260  addiu       $a0, $v0, 0x260
    ctx->pc = 0x183b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x183b70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183b74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183b78: 0x24460260  addiu       $a2, $v0, 0x260
    ctx->pc = 0x183b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x183b7c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x183B7Cu;
    SET_GPR_U32(ctx, 31, 0x183B84u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x183B84u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183B84u) { return; }
    ctx->pc = 0x183B84u;
label_183b84:
    // 0x183b84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x183b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183b8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183b90: 0xe420026c  swc1        $f0, 0x26C($at)
    ctx->pc = 0x183b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48026Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48026Cu, _value); } while (0); }
    // 0x183b94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x183b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183b98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183b9c: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x183b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183ba0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183ba4: 0x24450260  addiu       $a1, $v0, 0x260
    ctx->pc = 0x183ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x183ba8: 0x24660150  addiu       $a2, $v1, 0x150
    ctx->pc = 0x183ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x183bac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x183BACu;
    SET_GPR_U32(ctx, 31, 0x183BB4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x183BACu, 0x183BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BB4u;
label_183bb4:
    // 0x183bb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x183bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183bb8: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x183BB8u;
    SET_GPR_U32(ctx, 31, 0x183BC0u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x183BB8u, 0x183BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BC0u;
label_183bc0:
    // 0x183bc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x183bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183bc4: 0xc060f04  jal         func_183C10
    ctx->pc = 0x183BC4u;
    SET_GPR_U32(ctx, 31, 0x183BCCu);
    ctx->pc = 0x183C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183C10u, 0x183BC4u, 0x183BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183BCCu;
label_183bcc:
    // 0x183bcc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x183bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x183bd0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x183bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183bd4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x183bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x183bd8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183bdc: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x183bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x183be0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x183be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x183be4: 0x2445dc90  addiu       $a1, $v0, -0x2370
    ctx->pc = 0x183be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958224));
    // 0x183be8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x183BE8u;
    SET_GPR_U32(ctx, 31, 0x183BF0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x183BF0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183BF0u) { return; }
    ctx->pc = 0x183BF0u;
label_183bf0:
    // 0x183bf0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x183bf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183bf8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x183bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x183bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x183BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C04u;
}
