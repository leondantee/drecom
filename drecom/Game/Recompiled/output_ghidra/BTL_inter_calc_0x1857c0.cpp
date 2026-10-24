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

// Function: BTL_inter_calc
// Address: 0x1857c0 - 0x185ae4
void BTL_inter_calc_0x1857c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_inter_calc_0x1857c0");
#endif

    switch (ctx->pc) {
        case 0x185800u: goto label_185800;
        case 0x18581cu: goto label_18581c;
        case 0x185840u: goto label_185840;
        case 0x185874u: goto label_185874;
        case 0x18588cu: goto label_18588c;
        case 0x1858a4u: goto label_1858a4;
        case 0x1858d4u: goto label_1858d4;
        case 0x1858f8u: goto label_1858f8;
        case 0x1859ccu: goto label_1859cc;
        case 0x1859d8u: goto label_1859d8;
        default: break;
    }

    ctx->pc = 0x1857c0u;

    // 0x1857c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1857c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1857c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1857c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1857c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1857c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1857cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1857ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1857d0: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x1857d0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1857d4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1857d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1857d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1857d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1857dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1857dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1857e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1857e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1857e4: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x1857e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1857e8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1857e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1857ec: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1857ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1857f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1857f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1857f4: 0x244602a0  addiu       $a2, $v0, 0x2A0
    ctx->pc = 0x1857f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1857f8: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x1857F8u;
    SET_GPR_U32(ctx, 31, 0x185800u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x185800u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185800u) { return; }
    ctx->pc = 0x185800u;
label_185800:
    // 0x185800: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x185800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185804: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185808: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x185808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x18580c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185810: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x185810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x185814: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x185814u;
    SET_GPR_U32(ctx, 31, 0x18581Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x185814u, 0x18581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18581Cu;
label_18581c:
    // 0x18581c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x18581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185820: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x185820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185824: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x185824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x185828: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x185828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18582c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x18582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185830: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x185830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x185834: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x185834u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x185838: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x185838u;
    SET_GPR_U32(ctx, 31, 0x185840u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x185838u, 0x185840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185840u;
label_185840:
    // 0x185840: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x185840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x185844: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x185844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185848: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x185848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x18584c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18584cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185850: 0x0  nop
    ctx->pc = 0x185850u;
    // NOP
    // 0x185854: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185858: 0x0  nop
    ctx->pc = 0x185858u;
    // NOP
    // 0x18585c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x18585Cu;
    {
        const bool branch_taken_0x18585c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18585c) {
            ctx->pc = 0x1858BCu;
            goto label_1858bc;
        }
    }
    ctx->pc = 0x185864u;
    // 0x185864: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x185864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185868: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x185868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18586c: 0xc040c24  jal         func_103090
    ctx->pc = 0x18586Cu;
    SET_GPR_U32(ctx, 31, 0x185874u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x185874u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185874u) { return; }
    ctx->pc = 0x185874u;
label_185874:
    // 0x185874: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x185874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x185878: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x185878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18587c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185880: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x185880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185884: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x185884u;
    SET_GPR_U32(ctx, 31, 0x18588Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x18588Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18588Cu) { return; }
    ctx->pc = 0x18588Cu;
label_18588c:
    // 0x18588c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185890: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x185890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185894: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185898: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x185898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x18589c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x18589Cu;
    SET_GPR_U32(ctx, 31, 0x1858A4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x18589Cu, 0x1858A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858A4u;
label_1858a4:
    // 0x1858a4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1858a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1858a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1858a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1858ac: 0xe42002d0  swc1        $f0, 0x2D0($at)
    ctx->pc = 0x1858acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D0u, _value); } while (0); }
    // 0x1858b0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1858b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1858b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1858b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1858b8: 0xe42002d8  swc1        $f0, 0x2D8($at)
    ctx->pc = 0x1858b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D8u, _value); } while (0); }
label_1858bc:
    // 0x1858bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1858c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1858c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1858c4: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1858c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1858c8: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x1858c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1858cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1858CCu;
    SET_GPR_U32(ctx, 31, 0x1858D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1858CCu, 0x1858D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858D4u;
label_1858d4:
    // 0x1858d4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1858d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1858d8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1858d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1858dc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1858dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1858e0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1858e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1858e4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1858e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1858e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1858e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1858ec: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1858ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1858f0: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1858F0u;
    SET_GPR_U32(ctx, 31, 0x1858F8u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1858F0u, 0x1858F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858F8u;
label_1858f8:
    // 0x1858f8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1858f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1858fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1858fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x185900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185904: 0x0  nop
    ctx->pc = 0x185904u;
    // NOP
    // 0x185908: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x185908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18590c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x18590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x185910: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185914: 0xc42102d4  lwc1        $f1, 0x2D4($at)
    ctx->pc = 0x185914u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185918: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18591c: 0xc4200284  lwc1        $f0, 0x284($at)
    ctx->pc = 0x18591cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185920: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185924: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x185924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x185928: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x185928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18592c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18592cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185930: 0x0  nop
    ctx->pc = 0x185930u;
    // NOP
    // 0x185934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185938: 0x0  nop
    ctx->pc = 0x185938u;
    // NOP
    // 0x18593c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x18593Cu;
    {
        const bool branch_taken_0x18593c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18593c) {
            ctx->pc = 0x185980u;
            goto label_185980;
        }
    }
    ctx->pc = 0x185944u;
    // 0x185944: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x185944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185948: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x185948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18594c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18594cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x185950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185954: 0x0  nop
    ctx->pc = 0x185954u;
    // NOP
    // 0x185958: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x185958u;
    {
        const bool branch_taken_0x185958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185958) {
            ctx->pc = 0x1859B0u;
            goto label_1859b0;
        }
    }
    ctx->pc = 0x185960u;
    // 0x185960: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185964: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x185964u;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185968: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x185968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18596c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18596cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185970: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185974: 0xe42002d4  swc1        $f0, 0x2D4($at)
    ctx->pc = 0x185974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D4u, _value); } while (0); }
    // 0x185978: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185978u;
    {
        const bool branch_taken_0x185978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185978) {
            ctx->pc = 0x1859B0u;
            goto label_1859b0;
        }
    }
    ctx->pc = 0x185980u;
label_185980:
    // 0x185980: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x185980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185984: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x185984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185988: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18598c: 0x0  nop
    ctx->pc = 0x18598cu;
    // NOP
    // 0x185990: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x185990u;
    {
        const bool branch_taken_0x185990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185990) {
            ctx->pc = 0x1859B0u;
            goto label_1859b0;
        }
    }
    ctx->pc = 0x185998u;
    // 0x185998: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18599c: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x18599cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1859a0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1859a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1859a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1859a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1859a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1859a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1859ac: 0xe42002d4  swc1        $f0, 0x2D4($at)
    ctx->pc = 0x1859acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D4u, _value); } while (0); }
label_1859b0:
    // 0x1859b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1859b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1859b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1859b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1859b8: 0x244502e0  addiu       $a1, $v0, 0x2E0
    ctx->pc = 0x1859b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x1859bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1859c0: 0x244602d0  addiu       $a2, $v0, 0x2D0
    ctx->pc = 0x1859c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1859c4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1859C4u;
    SET_GPR_U32(ctx, 31, 0x1859CCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1859C4u, 0x1859CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859CCu;
label_1859cc:
    // 0x1859cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1859ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1859d0: 0xc067588  jal         func_19D620
    ctx->pc = 0x1859D0u;
    SET_GPR_U32(ctx, 31, 0x1859D8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1859D0u, 0x1859D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859D8u;
label_1859d8:
    // 0x1859d8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1859d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1859dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1859dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1859e0: 0x90230345  lbu         $v1, 0x345($at)
    ctx->pc = 0x1859e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x480345u));
    // 0x1859e4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1859E4u;
    {
        const bool branch_taken_0x1859e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1859e4) {
            ctx->pc = 0x185A64u;
            goto label_185a64;
        }
    }
    ctx->pc = 0x1859ECu;
    // 0x1859ec: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1859ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1859f0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1859f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1859f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1859f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1859f8: 0x0  nop
    ctx->pc = 0x1859f8u;
    // NOP
    // 0x1859fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1859fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185a00: 0x0  nop
    ctx->pc = 0x185a00u;
    // NOP
    // 0x185a04: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x185A04u;
    {
        const bool branch_taken_0x185a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185a04) {
            ctx->pc = 0x185A54u;
            goto label_185a54;
        }
    }
    ctx->pc = 0x185A0Cu;
    // 0x185a0c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a10: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x185a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x185a14: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185a14u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4802D0u));
    // 0x185a18: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x185a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185a1c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x185a20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a24: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x185a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x185a28: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185a28u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4802E0u));
    // 0x185a2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a30: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x185a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x185a34: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185a34u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802D0u, _value); } while (0);
    // 0x185a38: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x185a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185a3c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185a3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185a40: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a44: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x185a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x185a48: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185a48u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802E0u, _value); } while (0);
    // 0x185a4c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x185A4Cu;
    {
        const bool branch_taken_0x185a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a4c) {
            ctx->pc = 0x185AD0u;
            goto label_185ad0;
        }
    }
    ctx->pc = 0x185A54u;
label_185a54:
    // 0x185a54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185a58: 0xa0200345  sb          $zero, 0x345($at)
    ctx->pc = 0x185a58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480345u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480345u, _value); } while (0);
    // 0x185a5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x185A5Cu;
    {
        const bool branch_taken_0x185a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a5c) {
            ctx->pc = 0x185AD0u;
            goto label_185ad0;
        }
    }
    ctx->pc = 0x185A64u;
label_185a64:
    // 0x185a64: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x185a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185a68: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x185a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185a70: 0x0  nop
    ctx->pc = 0x185a70u;
    // NOP
    // 0x185a74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185a78: 0x0  nop
    ctx->pc = 0x185a78u;
    // NOP
    // 0x185a7c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x185A7Cu;
    {
        const bool branch_taken_0x185a7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185a7c) {
            ctx->pc = 0x185AD0u;
            goto label_185ad0;
        }
    }
    ctx->pc = 0x185A84u;
    // 0x185a84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a88: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x185a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x185a8c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185a8cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4802D0u));
    // 0x185a90: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x185a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185a94: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185a94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x185a98: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185a9c: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x185a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x185aa0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185aa0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4802E0u));
    // 0x185aa4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185aa8: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x185aac: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185aacu;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802D0u, _value); } while (0);
    // 0x185ab0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x185ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x185ab4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x185ab4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185ab8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x185ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x185abc: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x185abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x185ac0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x185ac0u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4802E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4802E0u, _value); } while (0);
    // 0x185ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185ac8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185acc: 0xa0230345  sb          $v1, 0x345($at)
    ctx->pc = 0x185accu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480345u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480345u, _value); } while (0);
label_185ad0:
    // 0x185ad0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x185ad0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185ad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x185ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185adc: 0x3e00008  jr          $ra
    ctx->pc = 0x185ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185AE4u;
}
