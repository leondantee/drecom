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

// Function: entry_003766a0
// Address: 0x3766a0 - 0x3768c4
void entry_003766a0_0x3766a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003766a0_0x3766a0");
#endif

    switch (ctx->pc) {
        case 0x37670cu: goto label_37670c;
        case 0x376744u: goto label_376744;
        case 0x3767ccu: goto label_3767cc;
        case 0x376864u: goto label_376864;
        case 0x376874u: goto label_376874;
        case 0x376880u: goto label_376880;
        case 0x3768b0u: goto label_3768b0;
        default: break;
    }

    ctx->pc = 0x3766a0u;

    // 0x3766a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3766a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3766a4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3766a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3766a8: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3766a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3766ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3766acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3766b0: 0x0  nop
    ctx->pc = 0x3766b0u;
    // NOP
    // 0x3766b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3766b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3766b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3766b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3766bc: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3766bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3766c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3766c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3766c4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3766c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3766c8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3766c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3766cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3766ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3766d0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3766d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3766d4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3766d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3766d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3766d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3766dc: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x3766dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x3766e0: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x3766e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x3766e4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3766e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3766e8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x3766e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x3766ec: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x3766ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3766f0: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x3766f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3766f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3766f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3766f8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3766f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3766fc: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x3766fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x376700: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x376700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x376704: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x376704u;
    SET_GPR_U32(ctx, 31, 0x37670Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x376704u, 0x37670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37670Cu;
label_37670c:
    // 0x37670c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37670cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376710: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x376710u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376714: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x376714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x376718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37671c: 0x0  nop
    ctx->pc = 0x37671cu;
    // NOP
    // 0x376720: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376724: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376728: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x376728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x37672c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376730: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x376730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376734: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x376734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376738: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x376738u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37673c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37673Cu;
    SET_GPR_U32(ctx, 31, 0x376744u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37673Cu, 0x376744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376744u;
label_376744:
    // 0x376744: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376748: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x376748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x37674c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376750: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x376750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x376754: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x376754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376758: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37675c: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x37675cu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376760: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x376760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x376764: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x376764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x376768: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37676c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x37676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x376770: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x376770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376774: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376778: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x376778u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37677c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x37677cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x376780: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376784: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x376784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x376788: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x376788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37678c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37678cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376790: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x376790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x376794: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376798: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x376798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37679c: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x37679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3767a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3767a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3767a4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x3767a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3767a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3767ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3767acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3767b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3767b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3767b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3767b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3767b8: 0x0  nop
    ctx->pc = 0x3767b8u;
    // NOP
    // 0x3767bc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3767bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3767c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3767c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3767c4: 0xc067588  jal         func_19D620
    ctx->pc = 0x3767C4u;
    SET_GPR_U32(ctx, 31, 0x3767CCu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x3767C4u, 0x3767CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767CCu;
label_3767cc:
    // 0x3767cc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3767ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3767d0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3767d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3767d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3767d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3767d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3767d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3767dc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3767dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3767e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3767e4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3767e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3767e8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3767ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3767ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3767f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3767f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3767f4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3767f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3767f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3767fc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3767fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x376800: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x376800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x376804: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x376804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x376808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37680c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x37680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376814: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x376814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x376818: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37681c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x37681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376820: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x376820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376828: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x376828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x37682c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376830: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x376830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376834: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x376834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37683c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x37683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x376840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376844: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x376844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376848: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x376848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37684c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37684cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376850: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x376850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x376854: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376858: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376858u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37685c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x37685Cu;
    SET_GPR_U32(ctx, 31, 0x376864u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x37685Cu, 0x376864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376864u;
label_376864:
    // 0x376864: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376868: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376868u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37686c: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x37686Cu;
    SET_GPR_U32(ctx, 31, 0x376874u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x37686Cu, 0x376874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376874u;
label_376874:
    // 0x376874: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376878: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376878u;
    SET_GPR_U32(ctx, 31, 0x376880u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376878u, 0x376880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376880u;
label_376880:
    // 0x376880: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376884: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x376884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x376888: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x376888u;
    {
        const bool branch_taken_0x376888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376888) {
            ctx->pc = 0x376C50u;
            return;
        }
    }
    ctx->pc = 0x376890u;
    // 0x376890: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376894: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376898: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x37689c: 0x24065a09  addiu       $a2, $zero, 0x5A09
    ctx->pc = 0x37689cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23049));
    // 0x3768a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3768a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3768a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3768a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3768a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3768A8u;
    SET_GPR_U32(ctx, 31, 0x3768B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3768A8u, 0x3768B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3768B0u;
label_3768b0:
    // 0x3768b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3768b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3768b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3768b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3768b8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3768b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3768bc: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x3768BCu;
    {
        const bool branch_taken_0x3768bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3768bc) {
            ctx->pc = 0x376C50u;
            return;
        }
    }
    ctx->pc = 0x3768C4u;
}
