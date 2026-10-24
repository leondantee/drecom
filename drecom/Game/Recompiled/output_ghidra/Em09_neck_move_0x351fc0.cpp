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

// Function: Em09_neck_move
// Address: 0x351fc0 - 0x3524a4
void Em09_neck_move_0x351fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_neck_move_0x351fc0");
#endif

    switch (ctx->pc) {
        case 0x352054u: goto label_352054;
        case 0x352070u: goto label_352070;
        case 0x352090u: goto label_352090;
        case 0x3520acu: goto label_3520ac;
        case 0x352194u: goto label_352194;
        case 0x3521bcu: goto label_3521bc;
        case 0x3521f0u: goto label_3521f0;
        case 0x352218u: goto label_352218;
        case 0x3522b8u: goto label_3522b8;
        case 0x3522d4u: goto label_3522d4;
        case 0x3522f4u: goto label_3522f4;
        case 0x352310u: goto label_352310;
        case 0x3523dcu: goto label_3523dc;
        case 0x352404u: goto label_352404;
        default: break;
    }

    ctx->pc = 0x351fc0u;

    // 0x351fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x351fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x351fc4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x351fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x351fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x351fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x351fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x351fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x351fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x351fd4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x351fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x351fd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x351fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x351fdc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x351fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x351fe0: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x351fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x351fe4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x351fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x351fe8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x351fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x351fec: 0x247107d0  addiu       $s1, $v1, 0x7D0
    ctx->pc = 0x351fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x351ff0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x351ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x351ff4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x351ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x351ff8: 0x24720190  addiu       $s2, $v1, 0x190
    ctx->pc = 0x351ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x351ffc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x351ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352000: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352004: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x352004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x352008: 0x1460011f  bnez        $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x352008u;
    {
        const bool branch_taken_0x352008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x352008) {
            ctx->pc = 0x352488u;
            goto label_352488;
        }
    }
    ctx->pc = 0x352010u;
    // 0x352010: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352014: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352018: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x352018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35201c: 0x106000ff  beqz        $v1, . + 4 + (0xFF << 2)
    ctx->pc = 0x35201Cu;
    {
        const bool branch_taken_0x35201c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35201c) {
            ctx->pc = 0x35241Cu;
            goto label_35241c;
        }
    }
    ctx->pc = 0x352024u;
    // 0x352024: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x352028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35202c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35202cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x352030: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x352030u;
    {
        const bool branch_taken_0x352030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352030) {
            ctx->pc = 0x352254u;
            goto label_352254;
        }
    }
    ctx->pc = 0x352038u;
    // 0x352038: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x352038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35203c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x35203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352040: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352044: 0x24640170  addiu       $a0, $v1, 0x170
    ctx->pc = 0x352044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x352048: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x352048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x35204c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x35204Cu;
    SET_GPR_U32(ctx, 31, 0x352054u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x35204Cu, 0x352054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352054u;
label_352054:
    // 0x352054: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x352054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x352058: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x352058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35205c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x35205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352060: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x352060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352064: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x352064u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x352068: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x352068u;
    SET_GPR_U32(ctx, 31, 0x352070u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x352068u, 0x352070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352070u;
label_352070:
    // 0x352070: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x352070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x352074: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x352074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x352078: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x352078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x35207c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352080: 0x24640170  addiu       $a0, $v1, 0x170
    ctx->pc = 0x352080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x352084: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x352084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x352088: 0xc0d492c  jal         func_3524B0
    ctx->pc = 0x352088u;
    SET_GPR_U32(ctx, 31, 0x352090u);
    ctx->pc = 0x3524B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524B0u, 0x352088u, 0x352090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352090u;
label_352090:
    // 0x352090: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x352090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x352094: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x352094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x352098: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x352098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35209c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x35209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3520a0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3520a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3520a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3520A4u;
    SET_GPR_U32(ctx, 31, 0x3520ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3520A4u, 0x3520ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520ACu;
label_3520ac:
    // 0x3520ac: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3520acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3520b0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3520b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3520b4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3520b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3520b8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3520b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3520bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3520bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3520c0: 0x0  nop
    ctx->pc = 0x3520c0u;
    // NOP
    // 0x3520c4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3520C4u;
    {
        const bool branch_taken_0x3520c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3520c4) {
            ctx->pc = 0x3520D8u;
            goto label_3520d8;
        }
    }
    ctx->pc = 0x3520CCu;
    // 0x3520cc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3520ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3520d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3520d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3520d4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3520d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3520d8:
    // 0x3520d8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3520d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3520dc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3520dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3520e0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3520e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3520e4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3520e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3520e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3520e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3520ec: 0x0  nop
    ctx->pc = 0x3520ecu;
    // NOP
    // 0x3520f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3520F0u;
    {
        const bool branch_taken_0x3520f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3520f0) {
            ctx->pc = 0x352108u;
            goto label_352108;
        }
    }
    ctx->pc = 0x3520F8u;
    // 0x3520f8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3520f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3520fc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3520fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352100: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x352100u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x352104: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x352104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_352108:
    // 0x352108: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35210c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x35210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352110: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x352110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352114: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x352114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352118: 0x0  nop
    ctx->pc = 0x352118u;
    // NOP
    // 0x35211c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x35211Cu;
    {
        const bool branch_taken_0x35211c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35211c) {
            ctx->pc = 0x352130u;
            goto label_352130;
        }
    }
    ctx->pc = 0x352124u;
    // 0x352124: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352128: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35212c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35212cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_352130:
    // 0x352130: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352134: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352138: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x352138u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x35213c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x35213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352140: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x352140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352144: 0x0  nop
    ctx->pc = 0x352144u;
    // NOP
    // 0x352148: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x352148u;
    {
        const bool branch_taken_0x352148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x352148) {
            ctx->pc = 0x352160u;
            goto label_352160;
        }
    }
    ctx->pc = 0x352150u;
    // 0x352150: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352154: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352158: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x352158u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x35215c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35215cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_352160:
    // 0x352160: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x352160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x352164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x352164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x352168: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x352168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35216c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x35216cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x352170: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x352170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x352174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352178: 0x0  nop
    ctx->pc = 0x352178u;
    // NOP
    // 0x35217c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x35217cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x352180: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352184: 0xc60d011c  lwc1        $f13, 0x11C($s0)
    ctx->pc = 0x352184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x352188: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x352188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x35218c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x35218Cu;
    SET_GPR_U32(ctx, 31, 0x352194u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x35218Cu, 0x352194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352194u;
label_352194:
    // 0x352194: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x352194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x352198: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x352198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35219c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35219cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3521a0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3521a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3521a4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3521a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3521a8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3521a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3521ac: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x3521acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3521b0: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x3521b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3521b4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3521B4u;
    SET_GPR_U32(ctx, 31, 0x3521BCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3521B4u, 0x3521BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521BCu;
label_3521bc:
    // 0x3521bc: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3521bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x3521c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3521c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3521c4: 0x0  nop
    ctx->pc = 0x3521c4u;
    // NOP
    // 0x3521c8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x3521c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x3521cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3521ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3521d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3521d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3521d4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3521d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3521d8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3521d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3521dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3521dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3521e0: 0xc62d011c  lwc1        $f13, 0x11C($s1)
    ctx->pc = 0x3521e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3521e4: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3521e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3521e8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3521E8u;
    SET_GPR_U32(ctx, 31, 0x3521F0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3521E8u, 0x3521F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521F0u;
label_3521f0:
    // 0x3521f0: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x3521f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x3521f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3521f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3521f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3521f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3521fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3521fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352200: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x352200u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x352204: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352208: 0xc62d0120  lwc1        $f13, 0x120($s1)
    ctx->pc = 0x352208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x35220c: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x35220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x352210: 0xc058f50  jal         func_163D40
    ctx->pc = 0x352210u;
    SET_GPR_U32(ctx, 31, 0x352218u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x352210u, 0x352218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352218u;
label_352218:
    // 0x352218: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x352218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x35221c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35221cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352220: 0x0  nop
    ctx->pc = 0x352220u;
    // NOP
    // 0x352224: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x352224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x352228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35222c: 0x0  nop
    ctx->pc = 0x35222cu;
    // NOP
    // 0x352230: 0xe640011c  swc1        $f0, 0x11C($s2)
    ctx->pc = 0x352230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x352234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352238: 0x0  nop
    ctx->pc = 0x352238u;
    // NOP
    // 0x35223c: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x35223cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x352240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352244: 0x0  nop
    ctx->pc = 0x352244u;
    // NOP
    // 0x352248: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x352248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x35224c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x35224Cu;
    {
        const bool branch_taken_0x35224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35224c) {
            ctx->pc = 0x352488u;
            goto label_352488;
        }
    }
    ctx->pc = 0x352254u;
label_352254:
    // 0x352254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352258: 0x0  nop
    ctx->pc = 0x352258u;
    // NOP
    // 0x35225c: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x35225cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x352260: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352264: 0x0  nop
    ctx->pc = 0x352264u;
    // NOP
    // 0x352268: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x35226c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35226cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352270: 0x0  nop
    ctx->pc = 0x352270u;
    // NOP
    // 0x352274: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x352274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x352278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35227c: 0x0  nop
    ctx->pc = 0x35227cu;
    // NOP
    // 0x352280: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x352280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x352284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352288: 0x0  nop
    ctx->pc = 0x352288u;
    // NOP
    // 0x35228c: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x35228cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x352290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352294: 0x0  nop
    ctx->pc = 0x352294u;
    // NOP
    // 0x352298: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x352298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x35229c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3522a0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3522a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3522a4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3522a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3522a8: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x3522a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3522ac: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x3522acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3522b0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x3522B0u;
    SET_GPR_U32(ctx, 31, 0x3522B8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x3522B0u, 0x3522B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522B8u;
label_3522b8:
    // 0x3522b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3522b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3522bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3522bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3522c0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3522c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3522c4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3522c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3522c8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3522c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3522cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3522CCu;
    SET_GPR_U32(ctx, 31, 0x3522D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3522CCu, 0x3522D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522D4u;
label_3522d4:
    // 0x3522d4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3522d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3522d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3522d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3522dc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3522dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3522e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3522e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3522e4: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x3522e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3522e8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x3522e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3522ec: 0xc0d492c  jal         func_3524B0
    ctx->pc = 0x3522ECu;
    SET_GPR_U32(ctx, 31, 0x3522F4u);
    ctx->pc = 0x3524B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524B0u, 0x3522ECu, 0x3522F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522F4u;
label_3522f4:
    // 0x3522f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3522f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3522f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3522f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3522fc: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3522fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352300: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x352300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352304: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x352304u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x352308: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x352308u;
    SET_GPR_U32(ctx, 31, 0x352310u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x352308u, 0x352310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352310u;
label_352310:
    // 0x352310: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x352310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x352314: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352318: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x352318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35231c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x35231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352320: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x352320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352324: 0x0  nop
    ctx->pc = 0x352324u;
    // NOP
    // 0x352328: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x352328u;
    {
        const bool branch_taken_0x352328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x352328) {
            ctx->pc = 0x35233Cu;
            goto label_35233c;
        }
    }
    ctx->pc = 0x352330u;
    // 0x352330: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352334: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352338: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x352338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35233c:
    // 0x35233c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352340: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352344: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x352344u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x352348: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x352348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35234c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35234cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352350: 0x0  nop
    ctx->pc = 0x352350u;
    // NOP
    // 0x352354: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x352354u;
    {
        const bool branch_taken_0x352354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x352354) {
            ctx->pc = 0x35236Cu;
            goto label_35236c;
        }
    }
    ctx->pc = 0x35235Cu;
    // 0x35235c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352360: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352364: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x352364u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x352368: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x352368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_35236c:
    // 0x35236c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x35236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352370: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x352370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352374: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x352374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352378: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x352378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35237c: 0x0  nop
    ctx->pc = 0x35237cu;
    // NOP
    // 0x352380: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x352380u;
    {
        const bool branch_taken_0x352380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x352380) {
            ctx->pc = 0x352394u;
            goto label_352394;
        }
    }
    ctx->pc = 0x352388u;
    // 0x352388: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35238c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352390: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x352390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_352394:
    // 0x352394: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352398: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35239c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x35239cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3523a0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3523a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3523a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3523a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3523a8: 0x0  nop
    ctx->pc = 0x3523a8u;
    // NOP
    // 0x3523ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3523ACu;
    {
        const bool branch_taken_0x3523ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3523ac) {
            ctx->pc = 0x3523C4u;
            goto label_3523c4;
        }
    }
    ctx->pc = 0x3523B4u;
    // 0x3523b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3523b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3523b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3523b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3523bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3523bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3523c0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3523c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3523c4:
    // 0x3523c4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3523c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3523c8: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x3523c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3523cc: 0xc64d011c  lwc1        $f13, 0x11C($s2)
    ctx->pc = 0x3523ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3523d0: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3523d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3523d4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3523D4u;
    SET_GPR_U32(ctx, 31, 0x3523DCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3523D4u, 0x3523DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523DCu;
label_3523dc:
    // 0x3523dc: 0xe640011c  swc1        $f0, 0x11C($s2)
    ctx->pc = 0x3523dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x3523e0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3523e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3523e4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3523e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x3523e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3523e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3523ec: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3523ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3523f0: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x3523f0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3523f4: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x3523f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3523f8: 0xc64d0120  lwc1        $f13, 0x120($s2)
    ctx->pc = 0x3523f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3523fc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3523FCu;
    SET_GPR_U32(ctx, 31, 0x352404u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3523FCu, 0x352404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352404u;
label_352404:
    // 0x352404: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x352404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x352408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35240c: 0x0  nop
    ctx->pc = 0x35240cu;
    // NOP
    // 0x352410: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x352410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x352414: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x352414u;
    {
        const bool branch_taken_0x352414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352414) {
            ctx->pc = 0x352488u;
            goto label_352488;
        }
    }
    ctx->pc = 0x35241Cu;
label_35241c:
    // 0x35241c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35241cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352420: 0x0  nop
    ctx->pc = 0x352420u;
    // NOP
    // 0x352424: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x352424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x352428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35242c: 0x0  nop
    ctx->pc = 0x35242cu;
    // NOP
    // 0x352430: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352438: 0x0  nop
    ctx->pc = 0x352438u;
    // NOP
    // 0x35243c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x35243cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x352440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352444: 0x0  nop
    ctx->pc = 0x352444u;
    // NOP
    // 0x352448: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x352448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x35244c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35244cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352450: 0x0  nop
    ctx->pc = 0x352450u;
    // NOP
    // 0x352454: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x352454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x352458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35245c: 0x0  nop
    ctx->pc = 0x35245cu;
    // NOP
    // 0x352460: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x352460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x352464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352468: 0x0  nop
    ctx->pc = 0x352468u;
    // NOP
    // 0x35246c: 0xe640011c  swc1        $f0, 0x11C($s2)
    ctx->pc = 0x35246cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x352470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352474: 0x0  nop
    ctx->pc = 0x352474u;
    // NOP
    // 0x352478: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x352478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x35247c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35247cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352480: 0x0  nop
    ctx->pc = 0x352480u;
    // NOP
    // 0x352484: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x352484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
label_352488:
    // 0x352488: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x352488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35248c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35248cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352498: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x352498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35249c: 0x3e00008  jr          $ra
    ctx->pc = 0x35249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35249Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3524A4u;
}
