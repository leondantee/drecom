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

// Function: entry_0037603c
// Address: 0x37603c - 0x376144
void entry_0037603c_0x37603c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037603c_0x37603c");
#endif

    switch (ctx->pc) {
        case 0x3760a8u: goto label_3760a8;
        case 0x3760e0u: goto label_3760e0;
        case 0x376100u: goto label_376100;
        default: break;
    }

    ctx->pc = 0x37603cu;

    // 0x37603c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376040: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x376040u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376044: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x376044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x376048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37604c: 0x0  nop
    ctx->pc = 0x37604cu;
    // NOP
    // 0x376050: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376054: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376058: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x376058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x37605c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376060: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x376060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x376064: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x376064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376068: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37606c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x37606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x376070: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x376070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x376074: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x376074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x376078: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x376078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x37607c: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x37607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x376080: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x376080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x376084: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x376084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x376088: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x376088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37608c: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x37608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376090: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x376090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x376094: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x376094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x376098: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x376098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x37609c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x37609cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x3760a0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x3760A0u;
    SET_GPR_U32(ctx, 31, 0x3760A8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x3760A0u, 0x3760A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760A8u;
label_3760a8:
    // 0x3760a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3760a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3760ac: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3760acu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3760b0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3760b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3760b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3760b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3760b8: 0x0  nop
    ctx->pc = 0x3760b8u;
    // NOP
    // 0x3760bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3760bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3760c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3760c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3760c4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3760c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3760c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3760c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3760cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3760ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3760d0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3760d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3760d4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3760d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3760d8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3760D8u;
    SET_GPR_U32(ctx, 31, 0x3760E0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3760D8u, 0x3760E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760E0u;
label_3760e0:
    // 0x3760e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3760e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3760e4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3760e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3760e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3760e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3760ec: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3760ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3760f0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3760f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3760f4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3760f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3760f8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3760F8u;
    SET_GPR_U32(ctx, 31, 0x376100u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3760F8u, 0x376100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376100u;
label_376100:
    // 0x376100: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376104: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376108: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37610c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x37610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376110: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x376110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x376114: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37611c: 0x0  nop
    ctx->pc = 0x37611cu;
    // NOP
    // 0x376120: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x376120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376124: 0x0  nop
    ctx->pc = 0x376124u;
    // NOP
    // 0x376128: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x376128u;
    {
        const bool branch_taken_0x376128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x376128) {
            ctx->pc = 0x376144u;
            return;
        }
    }
    ctx->pc = 0x376130u;
    // 0x376130: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x376130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x376134: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37613c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376140: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x376144u;
}
