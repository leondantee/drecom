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

// Function: entry_00375a6c
// Address: 0x375a6c - 0x375b74
void entry_00375a6c_0x375a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375a6c_0x375a6c");
#endif

    switch (ctx->pc) {
        case 0x375ad8u: goto label_375ad8;
        case 0x375b10u: goto label_375b10;
        case 0x375b30u: goto label_375b30;
        default: break;
    }

    ctx->pc = 0x375a6cu;

    // 0x375a6c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375a70: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375a70u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375a74: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375a7c: 0x0  nop
    ctx->pc = 0x375a7cu;
    // NOP
    // 0x375a80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375a84: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375a88: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375a8c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x375a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x375a90: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x375a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x375a94: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x375a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x375a98: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x375a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x375a9c: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x375a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x375aa0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x375aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x375aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375aa8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x375aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x375aac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375ab4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x375ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375ab8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x375ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375abc: 0xc44d00d0  lwc1        $f13, 0xD0($v0)
    ctx->pc = 0x375abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x375ac0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x375ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x375ac4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x375ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375ac8: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375acc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x375ad0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x375AD0u;
    SET_GPR_U32(ctx, 31, 0x375AD8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x375AD0u, 0x375AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375AD8u;
label_375ad8:
    // 0x375ad8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375adc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375adcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375ae0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375ae8: 0x0  nop
    ctx->pc = 0x375ae8u;
    // NOP
    // 0x375aec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375aecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375af0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375af4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375af8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375afc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x375afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b00: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x375b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375b04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375b04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375b08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375B08u;
    SET_GPR_U32(ctx, 31, 0x375B10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375B08u, 0x375B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375B10u;
label_375b10:
    // 0x375b10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b14: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x375b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x375b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b1c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b20: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x375b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375b24: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375b24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375b28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375B28u;
    SET_GPR_U32(ctx, 31, 0x375B30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375B28u, 0x375B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375B30u;
label_375b30:
    // 0x375b30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b34: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b3c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b40: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375b44: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375b4c: 0x0  nop
    ctx->pc = 0x375b4cu;
    // NOP
    // 0x375b50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x375b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375b54: 0x0  nop
    ctx->pc = 0x375b54u;
    // NOP
    // 0x375b58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x375B58u;
    {
        const bool branch_taken_0x375b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375b58) {
            ctx->pc = 0x375B74u;
            return;
        }
    }
    ctx->pc = 0x375B60u;
    // 0x375b60: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375b64: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375b6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375b70: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x375b74u;
}
