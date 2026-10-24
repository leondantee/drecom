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

// Function: entry_00281458
// Address: 0x281458 - 0x2815a0
void entry_00281458_0x281458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281458_0x281458");
#endif

    switch (ctx->pc) {
        case 0x28147cu: goto label_28147c;
        case 0x281488u: goto label_281488;
        case 0x2814acu: goto label_2814ac;
        case 0x2814d0u: goto label_2814d0;
        case 0x2814f4u: goto label_2814f4;
        case 0x281528u: goto label_281528;
        case 0x281534u: goto label_281534;
        case 0x281590u: goto label_281590;
        case 0x28159cu: goto label_28159c;
        default: break;
    }

    ctx->pc = 0x281458u;

    // 0x281458: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28145c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281460: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x281460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x281464: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281468: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x281468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x28146c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28146cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281470: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281470u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281474u;
    SET_GPR_U32(ctx, 31, 0x28147Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281474u, 0x28147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28147Cu;
label_28147c:
    // 0x28147c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28147cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281480: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281480u;
    SET_GPR_U32(ctx, 31, 0x281488u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281480u, 0x281488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281488u;
label_281488:
    // 0x281488: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28148c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281490: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x281490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x281494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281498: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281498u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28149c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2814a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2814a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2814a4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2814A4u;
    SET_GPR_U32(ctx, 31, 0x2814ACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2814A4u, 0x2814ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814ACu;
label_2814ac:
    // 0x2814ac: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2814acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2814b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2814b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2814b4: 0x0  nop
    ctx->pc = 0x2814b4u;
    // NOP
    // 0x2814b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2814b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2814bc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2814bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2814c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2814c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2814c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2814c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2814c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2814C8u;
    SET_GPR_U32(ctx, 31, 0x2814D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2814C8u, 0x2814D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814D0u;
label_2814d0:
    // 0x2814d0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2814d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2814d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2814d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2814d8: 0x0  nop
    ctx->pc = 0x2814d8u;
    // NOP
    // 0x2814dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2814dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2814e0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2814e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2814e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2814e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2814e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2814e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2814ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2814ECu;
    SET_GPR_U32(ctx, 31, 0x2814F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2814ECu, 0x2814F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814F4u;
label_2814f4:
    // 0x2814f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2814f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2814f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2814f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2814fc: 0x0  nop
    ctx->pc = 0x2814fcu;
    // NOP
    // 0x281500: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281504: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x281504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28150c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x281510: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x281510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x281514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281518: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28151c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28151cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281520: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281520u;
    SET_GPR_U32(ctx, 31, 0x281528u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281520u, 0x281528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281528u;
label_281528:
    // 0x281528: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281528u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28152c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28152Cu;
    SET_GPR_U32(ctx, 31, 0x281534u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28152Cu, 0x281534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281534u;
label_281534:
    // 0x281534: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x281538: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28153c: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x28153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x281540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281544: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281544u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281548: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x281548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28154c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28154cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281550: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x281550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281554: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x281554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x281558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28155c: 0x0  nop
    ctx->pc = 0x28155cu;
    // NOP
    // 0x281560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x281560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281564: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281568: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28156c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28156cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281570: 0x0  nop
    ctx->pc = 0x281570u;
    // NOP
    // 0x281574: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x281574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x281578: 0x2404171d  addiu       $a0, $zero, 0x171D
    ctx->pc = 0x281578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5917));
    // 0x28157c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28157cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281580: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281584: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281584u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281588: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281588u;
    SET_GPR_U32(ctx, 31, 0x281590u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281588u, 0x281590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281590u;
label_281590:
    // 0x281590: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281594: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281594u;
    SET_GPR_U32(ctx, 31, 0x28159Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281594u, 0x28159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28159Cu;
label_28159c:
    // 0x28159c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28159cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2815a0u;
}
