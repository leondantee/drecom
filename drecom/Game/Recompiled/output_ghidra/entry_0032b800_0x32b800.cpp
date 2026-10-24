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

// Function: entry_0032b800
// Address: 0x32b800 - 0x32b8e0
void entry_0032b800_0x32b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b800_0x32b800");
#endif

    switch (ctx->pc) {
        case 0x32b838u: goto label_32b838;
        case 0x32b880u: goto label_32b880;
        default: break;
    }

    ctx->pc = 0x32b800u;

    // 0x32b800: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x32b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32b804: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32b804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b808: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x32b808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b80c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32b810: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32b814: 0x2442a500  addiu       $v0, $v0, -0x5B00
    ctx->pc = 0x32b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944000));
    // 0x32b818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b81c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32b81cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b820: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x32b820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32b824: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32b824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32b828: 0x2445e8c0  addiu       $a1, $v0, -0x1740
    ctx->pc = 0x32b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x32b82c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x32b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32b830: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x32B830u;
    SET_GPR_U32(ctx, 31, 0x32B838u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x32B838u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32B838u) { return; }
    ctx->pc = 0x32B838u;
label_32b838:
    // 0x32b838: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32b83c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x32b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x32b840: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x32b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32b844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b848: 0x0  nop
    ctx->pc = 0x32b848u;
    // NOP
    // 0x32b84c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b850: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32b850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32b854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32b854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b858: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b85c: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32b85cu;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b860: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32b860u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b864: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x32b864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x32b868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b86c: 0x0  nop
    ctx->pc = 0x32b86cu;
    // NOP
    // 0x32b870: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b874: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32b874u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32b878: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32B878u;
    SET_GPR_U32(ctx, 31, 0x32B880u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32B878u, 0x32B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B880u;
label_32b880:
    // 0x32b880: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32b880u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b884: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x32b884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32b888: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32b888u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b88c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x32b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32b890: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32b894: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x32b894u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b898: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32b89c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x32b89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32b8a0: 0x46b823  subu        $s7, $v0, $a2
    ctx->pc = 0x32b8a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32b8a4: 0xafb400b4  sw          $s4, 0xB4($sp)
    ctx->pc = 0x32b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 20));
    // 0x32b8a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b8ac: 0x171043  sra         $v0, $s7, 1
    ctx->pc = 0x32b8acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32b8b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32b8b4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32b8b8: 0x29e1823  subu        $v1, $s4, $fp
    ctx->pc = 0x32b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x32b8bc: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x32b8bcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32b8c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b8c4: 0x173843  sra         $a3, $s7, 1
    ctx->pc = 0x32b8c4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32b8c8: 0x70e01628  paddub      $v0, $a3, $zero
    ctx->pc = 0x32b8c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x32b8cc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x32b8ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b8d0: 0x2673823  subu        $a3, $s3, $a3
    ctx->pc = 0x32b8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x32b8d4: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x32b8d4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x32b8d8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x32B8D8u;
    {
        const bool branch_taken_0x32b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b8d8) {
            ctx->pc = 0x32BBA0u;
            return;
        }
    }
    ctx->pc = 0x32B8E0u;
}
