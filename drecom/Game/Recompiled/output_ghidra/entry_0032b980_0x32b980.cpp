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

// Function: entry_0032b980
// Address: 0x32b980 - 0x32ba88
void entry_0032b980_0x32b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b980_0x32b980");
#endif

    switch (ctx->pc) {
        case 0x32b9b8u: goto label_32b9b8;
        case 0x32ba00u: goto label_32ba00;
        default: break;
    }

    ctx->pc = 0x32b980u;

    // 0x32b980: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x32b980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32b984: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32b984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b98c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x32b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b990: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32b990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32b994: 0x2462a570  addiu       $v0, $v1, -0x5A90
    ctx->pc = 0x32b994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944112));
    // 0x32b998: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b99c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32b99cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b9a0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x32b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32b9a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32b9a8: 0x2465e8e8  addiu       $a1, $v1, -0x1718
    ctx->pc = 0x32b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961384));
    // 0x32b9ac: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x32b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32b9b0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x32B9B0u;
    SET_GPR_U32(ctx, 31, 0x32B9B8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x32B9B8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32B9B8u) { return; }
    ctx->pc = 0x32B9B8u;
label_32b9b8:
    // 0x32b9b8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x32b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32b9bc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x32b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x32b9c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x32b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32b9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b9c8: 0x0  nop
    ctx->pc = 0x32b9c8u;
    // NOP
    // 0x32b9cc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b9d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32b9d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32b9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b9d8: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32b9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32b9dc: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32b9dcu;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b9e0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32b9e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32b9e4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x32b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x32b9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b9ec: 0x0  nop
    ctx->pc = 0x32b9ecu;
    // NOP
    // 0x32b9f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b9f4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32b9f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32b9f8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32B9F8u;
    SET_GPR_U32(ctx, 31, 0x32BA00u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32B9F8u, 0x32BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA00u;
label_32ba00:
    // 0x32ba00: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32ba00u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ba04: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x32ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32ba08: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32ba08u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ba0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x32ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32ba10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32ba14: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x32ba14u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ba18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x32ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32ba1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ba20: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x32ba20u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ba24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ba28: 0x1e1843  sra         $v1, $fp, 1
    ctx->pc = 0x32ba28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 30), 1));
    // 0x32ba2c: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x32ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x32ba30: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x32ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x32ba34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ba38: 0x171843  sra         $v1, $s7, 1
    ctx->pc = 0x32ba38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32ba3c: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x32ba3cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32ba40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32ba44: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32ba48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ba4c: 0x1e1043  sra         $v0, $fp, 1
    ctx->pc = 0x32ba4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), 1));
    // 0x32ba50: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x32ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32ba54: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32ba54u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ba58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ba5c: 0x171043  sra         $v0, $s7, 1
    ctx->pc = 0x32ba5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32ba60: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x32ba60u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32ba64: 0x92c228ba  lbu         $v0, 0x28BA($s6)
    ctx->pc = 0x32ba64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32ba68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32ba68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32ba6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ba70: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32BA70u;
    {
        const bool branch_taken_0x32ba70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ba70) {
            ctx->pc = 0x32BAB0u;
            return;
        }
    }
    ctx->pc = 0x32BA78u;
    // 0x32ba78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BA78u;
    {
        const bool branch_taken_0x32ba78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ba78) {
            ctx->pc = 0x32BA88u;
            return;
        }
    }
    ctx->pc = 0x32BA80u;
    // 0x32ba80: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x32BA80u;
    {
        const bool branch_taken_0x32ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ba80) {
            ctx->pc = 0x32BBA0u;
            return;
        }
    }
    ctx->pc = 0x32BA88u;
}
