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

// Function: entry_003768c4
// Address: 0x3768c4 - 0x376b1c
void entry_003768c4_0x3768c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003768c4_0x3768c4");
#endif

    switch (ctx->pc) {
        case 0x376930u: goto label_376930;
        case 0x376968u: goto label_376968;
        case 0x3769f0u: goto label_3769f0;
        case 0x376a88u: goto label_376a88;
        case 0x376a98u: goto label_376a98;
        case 0x376aa4u: goto label_376aa4;
        case 0x376af0u: goto label_376af0;
        case 0x376af8u: goto label_376af8;
        default: break;
    }

    ctx->pc = 0x3768c4u;

    // 0x3768c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3768c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3768c8: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3768c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3768cc: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3768ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3768d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3768d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3768d4: 0x0  nop
    ctx->pc = 0x3768d4u;
    // NOP
    // 0x3768d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3768d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3768dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3768dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3768e0: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3768e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3768e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3768e8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3768e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3768ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3768ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3768f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3768f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3768f4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x3768f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x3768f8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x3768f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x3768fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3768fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x376900: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x376900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x376904: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x376904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x376908: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x376908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x37690c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x37690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x376910: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x376910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376914: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x376914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376918: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x376918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37691c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x376920: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x376920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x376924: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x376924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x376928: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x376928u;
    SET_GPR_U32(ctx, 31, 0x376930u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x376928u, 0x376930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376930u;
label_376930:
    // 0x376930: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376934: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x376934u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376938: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x376938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x37693c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37693cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376940: 0x0  nop
    ctx->pc = 0x376940u;
    // NOP
    // 0x376944: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376948: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37694c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x37694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x376950: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376954: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x376954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376958: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x376958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37695c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x37695cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376960: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376960u;
    SET_GPR_U32(ctx, 31, 0x376968u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376960u, 0x376968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376968u;
label_376968:
    // 0x376968: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37696c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x37696cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x376970: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376974: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x376974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x376978: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x376978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37697c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37697cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376980: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x376980u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376984: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x376984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x376988: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x376988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x37698c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376990: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x376990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x376994: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x376994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376998: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37699c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x37699cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3769a0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3769a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3769a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3769a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3769a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3769a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3769ac: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x3769acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3769b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3769b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3769b4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3769b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3769b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3769b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3769bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3769bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3769c0: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x3769c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3769c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3769c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3769c8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x3769c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3769cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3769ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3769d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3769d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3769d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3769d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3769d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3769d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3769dc: 0x0  nop
    ctx->pc = 0x3769dcu;
    // NOP
    // 0x3769e0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3769e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3769e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3769e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3769e8: 0xc067588  jal         func_19D620
    ctx->pc = 0x3769E8u;
    SET_GPR_U32(ctx, 31, 0x3769F0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x3769E8u, 0x3769F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769F0u;
label_3769f0:
    // 0x3769f0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3769f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3769f4: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x3769f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x3769f8: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x3769f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x3769fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3769fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376a00: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x376a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376a08: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x376a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x376a0c: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x376a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x376a10: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x376a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x376a14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376a18: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x376a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376a20: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x376a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x376a24: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x376a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x376a28: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x376a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x376a2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376a30: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x376a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376a38: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x376a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x376a3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a40: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x376a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376a44: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x376a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376a4c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x376a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x376a50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a54: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x376a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376a58: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x376a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376a60: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x376a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x376a64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a68: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x376a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376a6c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x376a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376a74: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x376a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x376a78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376a7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376a80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376A80u;
    SET_GPR_U32(ctx, 31, 0x376A88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376A80u, 0x376A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A88u;
label_376a88:
    // 0x376a88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376a8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376a90: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376A90u;
    SET_GPR_U32(ctx, 31, 0x376A98u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376A90u, 0x376A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A98u;
label_376a98:
    // 0x376a98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a9c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376A9Cu;
    SET_GPR_U32(ctx, 31, 0x376AA4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376A9Cu, 0x376AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AA4u;
label_376aa4:
    // 0x376aa4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x376aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376aa8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x376aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x376aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x376aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376ab0: 0x0  nop
    ctx->pc = 0x376ab0u;
    // NOP
    // 0x376ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x376ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376ab8: 0x0  nop
    ctx->pc = 0x376ab8u;
    // NOP
    // 0x376abc: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x376ABCu;
    {
        const bool branch_taken_0x376abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x376abc) {
            ctx->pc = 0x376C50u;
            return;
        }
    }
    ctx->pc = 0x376AC4u;
    // 0x376ac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x376ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376ac8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376acc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376ad0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376ad4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376ad8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376adc: 0x2406020a  addiu       $a2, $zero, 0x20A
    ctx->pc = 0x376adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    // 0x376ae0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376ae4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376ae8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376AE8u;
    SET_GPR_U32(ctx, 31, 0x376AF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376AE8u, 0x376AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AF0u;
label_376af0:
    // 0x376af0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x376AF0u;
    SET_GPR_U32(ctx, 31, 0x376AF8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x376AF0u, 0x376AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AF8u;
label_376af8:
    // 0x376af8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x376af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376afc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x376afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x376b00: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x376b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x376b04: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x376b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x376b08: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x376b08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x376b0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b10: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x376b10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x376b14: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x376B14u;
    {
        const bool branch_taken_0x376b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376b14) {
            ctx->pc = 0x376C50u;
            return;
        }
    }
    ctx->pc = 0x376B1Cu;
}
