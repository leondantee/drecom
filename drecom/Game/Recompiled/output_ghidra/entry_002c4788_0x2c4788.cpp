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

// Function: entry_002c4788
// Address: 0x2c4788 - 0x2c4954
void entry_002c4788_0x2c4788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4788_0x2c4788");
#endif

    switch (ctx->pc) {
        case 0x2c479cu: goto label_2c479c;
        case 0x2c47b4u: goto label_2c47b4;
        case 0x2c47ccu: goto label_2c47cc;
        case 0x2c47fcu: goto label_2c47fc;
        case 0x2c4840u: goto label_2c4840;
        case 0x2c4878u: goto label_2c4878;
        case 0x2c4884u: goto label_2c4884;
        default: break;
    }

    ctx->pc = 0x2c4788u;

    // 0x2c4788: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c478c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4790: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x2c4790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4794: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2C4794u;
    SET_GPR_U32(ctx, 31, 0x2C479Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C4794u, 0x2C479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C479Cu;
label_2c479c:
    // 0x2c479c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x2c479cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c47a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c47a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c47a8: 0xc44c0044  lwc1        $f12, 0x44($v0)
    ctx->pc = 0x2c47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c47ac: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2C47ACu;
    SET_GPR_U32(ctx, 31, 0x2C47B4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C47ACu, 0x2C47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47B4u;
label_2c47b4:
    // 0x2c47b4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2c47b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c47b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c47bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c47c0: 0xc44c0048  lwc1        $f12, 0x48($v0)
    ctx->pc = 0x2c47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c47c4: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2C47C4u;
    SET_GPR_U32(ctx, 31, 0x2C47CCu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C47C4u, 0x2C47CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47CCu;
label_2c47cc:
    // 0x2c47cc: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2c47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2c47d0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c47d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c47d4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2c47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2c47d8: 0x34630308  ori         $v1, $v1, 0x308
    ctx->pc = 0x2c47d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)776);
    // 0x2c47dc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c47dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c47e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c47e4: 0x246518c0  addiu       $a1, $v1, 0x18C0
    ctx->pc = 0x2c47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6336));
    // 0x2c47e8: 0x72a03628  paddub      $a2, $s5, $zero
    ctx->pc = 0x2c47e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2c47ec: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x2c47ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2c47f0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2c47f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c47f4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2C47F4u;
    SET_GPR_U32(ctx, 31, 0x2C47FCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2C47F4u, 0x2C47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47FCu;
label_2c47fc:
    // 0x2c47fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4800: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4804: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x2c4804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2c4808: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2C4808u;
    {
        const bool branch_taken_0x2c4808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4808) {
            ctx->pc = 0x2C49D4u;
            return;
        }
    }
    ctx->pc = 0x2C4810u;
    // 0x2c4810: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4814: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c4814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4818: 0x8462000e  lh          $v0, 0xE($v1)
    ctx->pc = 0x2c4818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c481c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c4820: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c4820u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c4824: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4828: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c482c: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x2c482cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2c4830: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2C4830u;
    {
        const bool branch_taken_0x2c4830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4830) {
            ctx->pc = 0x2C49D4u;
            return;
        }
    }
    ctx->pc = 0x2C4838u;
    // 0x2c4838: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C4838u;
    SET_GPR_U32(ctx, 31, 0x2C4840u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C4838u, 0x2C4840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4840u;
label_2c4840:
    // 0x2c4840: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c4844: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2c4844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2c4848: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2c4848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2c484c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c484cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c4850: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c4850u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c4854: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4858: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c485c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c485cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c4860: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4864: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4868: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c4868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c486c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2c486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2c4870: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C4870u;
    SET_GPR_U32(ctx, 31, 0x2C4878u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C4870u, 0x2C4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4878u;
label_2c4878:
    // 0x2c4878: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c4878u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c487c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C487Cu;
    SET_GPR_U32(ctx, 31, 0x2C4884u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C487Cu, 0x2C4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4884u;
label_2c4884:
    // 0x2c4884: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x2c4884u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c4888: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c4888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2c488c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c488cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4890: 0x0  nop
    ctx->pc = 0x2c4890u;
    // NOP
    // 0x2c4894: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2c4894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c4898: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2c4898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2c489c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2c48a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c48a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c48a4: 0x0  nop
    ctx->pc = 0x2c48a4u;
    // NOP
    // 0x2c48a8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c48a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c48ac: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2c48acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2c48b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c48b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c48b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c48b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c48b8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c48b8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c48bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c48bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c48c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c48c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c48c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c48c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c48cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c48ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c48d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c48d4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c48d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c48d8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c48dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c48e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c48e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c48e4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c48e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c48ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c48f0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c48f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c48f4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2c48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2c48f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c48f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c48fc: 0x0  nop
    ctx->pc = 0x2c48fcu;
    // NOP
    // 0x2c4900: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c4900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c4904: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4908: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c490c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4910: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c4910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4914: 0x0  nop
    ctx->pc = 0x2c4914u;
    // NOP
    // 0x2c4918: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2C4918u;
    {
        const bool branch_taken_0x2c4918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4918) {
            ctx->pc = 0x2C4954u;
            return;
        }
    }
    ctx->pc = 0x2C4920u;
    // 0x2c4920: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2c4920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4924: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4928: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c492c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c492cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c4930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4934: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4938: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c493c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c493cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c4940: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4944: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4948: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c494c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c4950: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c4950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x2c4954u;
}
