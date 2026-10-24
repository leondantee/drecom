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

// Function: caseD_7
// Address: 0x31c880 - 0x31c944
void caseD_7_0x31c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x31c880");
#endif

    switch (ctx->pc) {
        case 0x31c8fcu: goto label_31c8fc;
        case 0x31c908u: goto label_31c908;
        default: break;
    }

    ctx->pc = 0x31c880u;

    // 0x31c880: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c884: 0x8c7012a4  lw          $s0, 0x12A4($v1)
    ctx->pc = 0x31c884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4772)));
    // 0x31c888: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c88c: 0x8c5112a8  lw          $s1, 0x12A8($v0)
    ctx->pc = 0x31c88cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x31c890: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31c890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c894: 0x8ce41290  lw          $a0, 0x1290($a3)
    ctx->pc = 0x31c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4752)));
    // 0x31c898: 0x30860008  andi        $a2, $a0, 0x8
    ctx->pc = 0x31c898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x31c89c: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x31C89Cu;
    {
        const bool branch_taken_0x31c89c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c89c) {
            ctx->pc = 0x31C944u;
            return;
        }
    }
    ctx->pc = 0x31C8A4u;
    // 0x31c8a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c8a8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x31c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c8ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c8b0: 0xc4401304  lwc1        $f0, 0x1304($v0)
    ctx->pc = 0x31c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c8b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31c8b8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x31c8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x31c8bc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x31c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c8c0: 0x3c04453b  lui         $a0, 0x453B
    ctx->pc = 0x31c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17723 << 16));
    // 0x31c8c4: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x31c8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x31c8c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c8c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c8cc: 0x0  nop
    ctx->pc = 0x31c8ccu;
    // NOP
    // 0x31c8d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31c8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c8d4: 0x0  nop
    ctx->pc = 0x31c8d4u;
    // NOP
    // 0x31c8d8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x31C8D8u;
    {
        const bool branch_taken_0x31c8d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31c8d8) {
            ctx->pc = 0x31C944u;
            return;
        }
    }
    ctx->pc = 0x31C8E0u;
    // 0x31c8e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c8e4: 0x24044b00  addiu       $a0, $zero, 0x4B00
    ctx->pc = 0x31c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19200));
    // 0x31c8e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c8e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c8ec: 0x24661300  addiu       $a2, $v1, 0x1300
    ctx->pc = 0x31c8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x31c8f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31c8f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c8f4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C8F4u;
    SET_GPR_U32(ctx, 31, 0x31C8FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C8F4u, 0x31C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8FCu;
label_31c8fc:
    // 0x31c8fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c8fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c900: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C900u;
    SET_GPR_U32(ctx, 31, 0x31C908u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C900u, 0x31C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C908u;
label_31c908:
    // 0x31c908: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c908u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c90c: 0x70e09628  paddub      $s2, $a3, $zero
    ctx->pc = 0x31c90cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x31c910: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x31c910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x31c914: 0x34c40011  ori         $a0, $a2, 0x11
    ctx->pc = 0x31c914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x31c918: 0x1244000a  beq         $s2, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x31C918u;
    {
        const bool branch_taken_0x31c918 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x31c918) {
            ctx->pc = 0x31C944u;
            return;
        }
    }
    ctx->pc = 0x31C920u;
    // 0x31c920: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x31c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x31c924: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31c924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31c928: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x31c928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
    // 0x31c92c: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x31c92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x31c930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31c930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c934: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x31c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c938: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31c938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31c93c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31c93cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31c940: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x31c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->pc = 0x31c944u;
}
