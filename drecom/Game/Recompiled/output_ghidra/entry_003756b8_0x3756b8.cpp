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

// Function: entry_003756b8
// Address: 0x3756b8 - 0x3757c0
void entry_003756b8_0x3756b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003756b8_0x3756b8");
#endif

    switch (ctx->pc) {
        case 0x375724u: goto label_375724;
        case 0x37575cu: goto label_37575c;
        case 0x37577cu: goto label_37577c;
        default: break;
    }

    ctx->pc = 0x3756b8u;

    // 0x3756b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3756b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3756bc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3756bcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3756c0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3756c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3756c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3756c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3756c8: 0x0  nop
    ctx->pc = 0x3756c8u;
    // NOP
    // 0x3756cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3756ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3756d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3756d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3756d4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3756d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3756d8: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x3756d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x3756dc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3756dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3756e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3756e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3756e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3756e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756e8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3756e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3756ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3756ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3756f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756f4: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x3756f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x3756f8: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x3756f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x3756fc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3756fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x375700: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x375700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375704: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x375704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375708: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x375708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37570c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x375710: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x375710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375714: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375718: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x37571c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x37571Cu;
    SET_GPR_U32(ctx, 31, 0x375724u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x37571Cu, 0x375724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375724u;
label_375724:
    // 0x375724: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375728: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375728u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37572c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375734: 0x0  nop
    ctx->pc = 0x375734u;
    // NOP
    // 0x375738: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37573c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375740: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375748: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x375748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37574c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375750: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375750u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375754: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375754u;
    SET_GPR_U32(ctx, 31, 0x37575Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375754u, 0x37575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37575Cu;
label_37575c:
    // 0x37575c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375760: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x375760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x375764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375768: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37576c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x37576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375770: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375770u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375774: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375774u;
    SET_GPR_U32(ctx, 31, 0x37577Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375774u, 0x37577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37577Cu;
label_37577c:
    // 0x37577c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375780: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375788: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37578c: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x37578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375790: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375798: 0x0  nop
    ctx->pc = 0x375798u;
    // NOP
    // 0x37579c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37579cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3757a0: 0x0  nop
    ctx->pc = 0x3757a0u;
    // NOP
    // 0x3757a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3757A4u;
    {
        const bool branch_taken_0x3757a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3757a4) {
            ctx->pc = 0x3757C0u;
            return;
        }
    }
    ctx->pc = 0x3757ACu;
    // 0x3757ac: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3757acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3757b0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3757b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3757b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3757b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3757b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3757b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3757bc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3757bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x3757c0u;
}
