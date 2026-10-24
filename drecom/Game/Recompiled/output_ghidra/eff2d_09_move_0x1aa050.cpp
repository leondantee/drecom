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

// Function: eff2d_09_move
// Address: 0x1aa050 - 0x1aa44c
void eff2d_09_move_0x1aa050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_09_move_0x1aa050");
#endif

    switch (ctx->pc) {
        case 0x1aa080u: goto label_1aa080;
        case 0x1aa098u: goto label_1aa098;
        case 0x1aa144u: goto label_1aa144;
        case 0x1aa158u: goto label_1aa158;
        case 0x1aa170u: goto label_1aa170;
        case 0x1aa188u: goto label_1aa188;
        case 0x1aa19cu: goto label_1aa19c;
        case 0x1aa2c4u: goto label_1aa2c4;
        default: break;
    }

    ctx->pc = 0x1aa050u;

    // 0x1aa050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1aa050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1aa054: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1aa054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1aa058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa060: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1aa060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1aa064: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1aa064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aa068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aa06c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aa06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aa070: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1aa070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aa074: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x1aa074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1aa078: 0xc0c96a8  jal         func_325AA0
    ctx->pc = 0x1AA078u;
    SET_GPR_U32(ctx, 31, 0x1AA080u);
    ctx->pc = 0x325AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325AA0u, 0x1AA078u, 0x1AA080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA080u;
label_1aa080:
    // 0x1aa080: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aa080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aa084: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aa084u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aa088: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aa088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aa08c: 0x244501a0  addiu       $a1, $v0, 0x1A0
    ctx->pc = 0x1aa08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1aa090: 0xc0c96a8  jal         func_325AA0
    ctx->pc = 0x1AA090u;
    SET_GPR_U32(ctx, 31, 0x1AA098u);
    ctx->pc = 0x325AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325AA0u, 0x1AA090u, 0x1AA098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA098u;
label_1aa098:
    // 0x1aa098: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aa098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aa09c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aa09cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aa0a0: 0xc4410190  lwc1        $f1, 0x190($v0)
    ctx->pc = 0x1aa0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa0a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa0a8: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x1aa0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa0ac: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1aa0acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aa0b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aa0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aa0b4: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aa0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aa0b8: 0xc4410190  lwc1        $f1, 0x190($v0)
    ctx->pc = 0x1aa0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa0bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa0c0: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x1aa0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa0c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa0c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aa0c8: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1aa0c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1aa0cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aa0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aa0d0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aa0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aa0d4: 0xc4410194  lwc1        $f1, 0x194($v0)
    ctx->pc = 0x1aa0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa0d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa0dc: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1aa0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa0e0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1aa0e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aa0e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aa0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aa0e8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aa0ec: 0xc4410194  lwc1        $f1, 0x194($v0)
    ctx->pc = 0x1aa0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa0f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa0f4: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1aa0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa0f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aa0fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1aa0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1aa100: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1aa100u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1aa104: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aa104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aa108: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aa108u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aa10c: 0xc4410198  lwc1        $f1, 0x198($v0)
    ctx->pc = 0x1aa10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa110: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa114: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x1aa114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa118: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1aa118u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aa11c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1aa11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1aa120: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x1aa120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1aa124: 0xc4410198  lwc1        $f1, 0x198($v0)
    ctx->pc = 0x1aa124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa128: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa12c: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x1aa12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aa134: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1aa134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1aa138: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x1aa138u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1aa13c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1AA13Cu;
    SET_GPR_U32(ctx, 31, 0x1AA144u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1AA13Cu, 0x1AA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA144u;
label_1aa144:
    // 0x1aa144: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1aa144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1aa148: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1aa148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aa14c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1aa14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa150: 0xc067678  jal         func_19D9E0
    ctx->pc = 0x1AA150u;
    SET_GPR_U32(ctx, 31, 0x1AA158u);
    ctx->pc = 0x19D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9E0u, 0x1AA150u, 0x1AA158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA158u;
label_1aa158:
    // 0x1aa158: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1aa158u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1aa15c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa160: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aa160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aa164: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1aa164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1aa168: 0xc067678  jal         func_19D9E0
    ctx->pc = 0x1AA168u;
    SET_GPR_U32(ctx, 31, 0x1AA170u);
    ctx->pc = 0x19D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9E0u, 0x1AA168u, 0x1AA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA170u;
label_1aa170:
    // 0x1aa170: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1aa170u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1aa174: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AA174u;
    {
        const bool branch_taken_0x1aa174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa174) {
            ctx->pc = 0x1AA1ECu;
            goto label_1aa1ec;
        }
    }
    ctx->pc = 0x1AA17Cu;
    // 0x1aa17c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1aa17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa180: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1AA180u;
    SET_GPR_U32(ctx, 31, 0x1AA188u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1AA180u, 0x1AA188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA188u;
label_1aa188:
    // 0x1aa188: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1aa188u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1aa18c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa190: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x1aa190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa194: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1AA194u;
    SET_GPR_U32(ctx, 31, 0x1AA19Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1AA194u, 0x1AA19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA19Cu;
label_1aa19c:
    // 0x1aa19c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1aa19cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aa1a0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA1A0u;
    {
        const bool branch_taken_0x1aa1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1a0) {
            ctx->pc = 0x1AA1C0u;
            goto label_1aa1c0;
        }
    }
    ctx->pc = 0x1AA1A8u;
    // 0x1aa1a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1ac: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1aa1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa1b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1b4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1aa1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1aa1b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA1B8u;
    {
        const bool branch_taken_0x1aa1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1b8) {
            ctx->pc = 0x1AA1D4u;
            goto label_1aa1d4;
        }
    }
    ctx->pc = 0x1AA1C0u;
label_1aa1c0:
    // 0x1aa1c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1c4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1aa1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa1c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aa1c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1aa1cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1d0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1aa1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1aa1d4:
    // 0x1aa1d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1d8: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x1aa1dc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1aa1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1aa1e0: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x1aa1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x1aa1e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA1E4u;
    {
        const bool branch_taken_0x1aa1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1e4) {
            ctx->pc = 0x1AA20Cu;
            goto label_1aa20c;
        }
    }
    ctx->pc = 0x1AA1ECu;
label_1aa1ec:
    // 0x1aa1ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aa1ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa1f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1f4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1aa1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1aa1f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1aa1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1fc: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1aa1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1aa200: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1aa200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1aa204: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1aa204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1aa208: 0xac82020c  sw          $v0, 0x20C($a0)
    ctx->pc = 0x1aa208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
label_1aa20c:
    // 0x1aa20c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa210: 0x9042002c  lbu         $v0, 0x2C($v0)
    ctx->pc = 0x1aa210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1aa214: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA214u;
    {
        const bool branch_taken_0x1aa214 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1aa214) {
            ctx->pc = 0x1AA230u;
            goto label_1aa230;
        }
    }
    ctx->pc = 0x1AA21Cu;
    // 0x1aa21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa220: 0x0  nop
    ctx->pc = 0x1aa220u;
    // NOP
    // 0x1aa224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA228u;
    {
        const bool branch_taken_0x1aa228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa228) {
            ctx->pc = 0x1AA24Cu;
            goto label_1aa24c;
        }
    }
    ctx->pc = 0x1AA230u;
label_1aa230:
    // 0x1aa230: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1aa230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1aa234: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aa234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aa238: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa240: 0x0  nop
    ctx->pc = 0x1aa240u;
    // NOP
    // 0x1aa244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa248: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1aa248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1aa24c:
    // 0x1aa24c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1aa250: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa254: 0x9042002d  lbu         $v0, 0x2D($v0)
    ctx->pc = 0x1aa254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 45)));
    // 0x1aa258: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA258u;
    {
        const bool branch_taken_0x1aa258 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1aa258) {
            ctx->pc = 0x1AA274u;
            goto label_1aa274;
        }
    }
    ctx->pc = 0x1AA260u;
    // 0x1aa260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa264: 0x0  nop
    ctx->pc = 0x1aa264u;
    // NOP
    // 0x1aa268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa26c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA26Cu;
    {
        const bool branch_taken_0x1aa26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa26c) {
            ctx->pc = 0x1AA290u;
            goto label_1aa290;
        }
    }
    ctx->pc = 0x1AA274u;
label_1aa274:
    // 0x1aa274: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1aa274u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1aa278: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aa278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aa27c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa284: 0x0  nop
    ctx->pc = 0x1aa284u;
    // NOP
    // 0x1aa288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa28c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1aa28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1aa290:
    // 0x1aa290: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1aa294: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa298: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1aa298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa29c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1aa29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa2a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1aa2a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aa2a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1aa2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1aa2a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2b0: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x1aa2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1aa2b4: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x1aa2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1aa2b8: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1aa2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa2bc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1AA2BCu;
    SET_GPR_U32(ctx, 31, 0x1AA2C4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1AA2C4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AA2C4u) { return; }
    ctx->pc = 0x1AA2C4u;
label_1aa2c4:
    // 0x1aa2c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2c8: 0xc4610090  lwc1        $f1, 0x90($v1)
    ctx->pc = 0x1aa2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa2cc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa2d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa2d4: 0x0  nop
    ctx->pc = 0x1aa2d4u;
    // NOP
    // 0x1aa2d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA2D8u;
    {
        const bool branch_taken_0x1aa2d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa2d8) {
            ctx->pc = 0x1AA2ECu;
            goto label_1aa2ec;
        }
    }
    ctx->pc = 0x1AA2E0u;
    // 0x1aa2e0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa2e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2e8: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1aa2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_1aa2ec:
    // 0x1aa2ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2f0: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x1aa2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa2f4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa2f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa2f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa2fc: 0x0  nop
    ctx->pc = 0x1aa2fcu;
    // NOP
    // 0x1aa300: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA300u;
    {
        const bool branch_taken_0x1aa300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa300) {
            ctx->pc = 0x1AA314u;
            goto label_1aa314;
        }
    }
    ctx->pc = 0x1AA308u;
    // 0x1aa308: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa30c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa310: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x1aa310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
label_1aa314:
    // 0x1aa314: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa318: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1aa318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa31c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa324: 0x0  nop
    ctx->pc = 0x1aa324u;
    // NOP
    // 0x1aa328: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA328u;
    {
        const bool branch_taken_0x1aa328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa328) {
            ctx->pc = 0x1AA33Cu;
            goto label_1aa33c;
        }
    }
    ctx->pc = 0x1AA330u;
    // 0x1aa330: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa334: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa338: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1aa338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_1aa33c:
    // 0x1aa33c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa340: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1aa340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa344: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa348: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa34c: 0x0  nop
    ctx->pc = 0x1aa34cu;
    // NOP
    // 0x1aa350: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA350u;
    {
        const bool branch_taken_0x1aa350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa350) {
            ctx->pc = 0x1AA364u;
            goto label_1aa364;
        }
    }
    ctx->pc = 0x1AA358u;
    // 0x1aa358: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa35c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa360: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1aa360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_1aa364:
    // 0x1aa364: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa368: 0xc4610090  lwc1        $f1, 0x90($v1)
    ctx->pc = 0x1aa368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa36c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa374: 0x0  nop
    ctx->pc = 0x1aa374u;
    // NOP
    // 0x1aa378: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA378u;
    {
        const bool branch_taken_0x1aa378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa378) {
            ctx->pc = 0x1AA38Cu;
            goto label_1aa38c;
        }
    }
    ctx->pc = 0x1AA380u;
    // 0x1aa380: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa384: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa388: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1aa388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_1aa38c:
    // 0x1aa38c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa390: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x1aa390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa394: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa398: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa39c: 0x0  nop
    ctx->pc = 0x1aa39cu;
    // NOP
    // 0x1aa3a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA3A0u;
    {
        const bool branch_taken_0x1aa3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa3a0) {
            ctx->pc = 0x1AA3B4u;
            goto label_1aa3b4;
        }
    }
    ctx->pc = 0x1AA3A8u;
    // 0x1aa3a8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa3b0: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x1aa3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
label_1aa3b4:
    // 0x1aa3b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa3b8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1aa3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa3bc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa3c4: 0x0  nop
    ctx->pc = 0x1aa3c4u;
    // NOP
    // 0x1aa3c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA3C8u;
    {
        const bool branch_taken_0x1aa3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa3c8) {
            ctx->pc = 0x1AA3DCu;
            goto label_1aa3dc;
        }
    }
    ctx->pc = 0x1AA3D0u;
    // 0x1aa3d0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa3d8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1aa3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_1aa3dc:
    // 0x1aa3dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa3e0: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1aa3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa3e4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa3ec: 0x0  nop
    ctx->pc = 0x1aa3ecu;
    // NOP
    // 0x1aa3f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA3F0u;
    {
        const bool branch_taken_0x1aa3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa3f0) {
            ctx->pc = 0x1AA404u;
            goto label_1aa404;
        }
    }
    ctx->pc = 0x1AA3F8u;
    // 0x1aa3f8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa3fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa400: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1aa400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_1aa404:
    // 0x1aa404: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1aa404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aa408: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aa408u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa40c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa410: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aa410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1aa414: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1aa414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aa418: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aa418u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa41c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa420: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1aa420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1aa424: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aa424u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1aa428: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1aa428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa42c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa430: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1aa430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1aa434: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1aa434u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa440: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1aa440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1aa444: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA44Cu;
}
