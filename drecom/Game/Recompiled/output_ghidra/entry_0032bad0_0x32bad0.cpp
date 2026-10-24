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

// Function: entry_0032bad0
// Address: 0x32bad0 - 0x32bba0
void entry_0032bad0_0x32bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032bad0_0x32bad0");
#endif

    switch (ctx->pc) {
        case 0x32baf8u: goto label_32baf8;
        case 0x32bb40u: goto label_32bb40;
        default: break;
    }

    ctx->pc = 0x32bad0u;

    // 0x32bad0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32bad4: 0x2455a5c0  addiu       $s5, $v0, -0x5A40
    ctx->pc = 0x32bad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944192));
    // 0x32bad8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x32bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x32badc: 0x2490a500  addiu       $s0, $a0, -0x5B00
    ctx->pc = 0x32badcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944000));
    // 0x32bae0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x32bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32bae4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32bae8: 0x2445e8c0  addiu       $a1, $v0, -0x1740
    ctx->pc = 0x32bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x32baec: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x32baecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x32baf0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x32BAF0u;
    SET_GPR_U32(ctx, 31, 0x32BAF8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x32BAF8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32BAF8u) { return; }
    ctx->pc = 0x32BAF8u;
label_32baf8:
    // 0x32baf8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32bafc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x32bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x32bb00: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x32bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32bb04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bb08: 0x0  nop
    ctx->pc = 0x32bb08u;
    // NOP
    // 0x32bb0c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32bb0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32bb10: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32bb14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32bb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bb18: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x32bb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x32bb1c: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x32bb1cu;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bb20: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32bb20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32bb24: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x32bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x32bb28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32bb28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bb2c: 0x0  nop
    ctx->pc = 0x32bb2cu;
    // NOP
    // 0x32bb30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32bb30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32bb34: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x32bb34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32bb38: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BB38u;
    SET_GPR_U32(ctx, 31, 0x32BB40u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BB38u, 0x32BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB40u;
label_32bb40:
    // 0x32bb40: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32bb40u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32bb44: 0x8eb30004  lw          $s3, 0x4($s5)
    ctx->pc = 0x32bb44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32bb48: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x32bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32bb4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32bb50: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x32bb50u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32bb54: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x32bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32bb58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32bb5c: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x32bb5cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32bb60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bb64: 0x1e1043  sra         $v0, $fp, 1
    ctx->pc = 0x32bb64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 30), 1));
    // 0x32bb68: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x32bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32bb6c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x32bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x32bb70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bb74: 0x171043  sra         $v0, $s7, 1
    ctx->pc = 0x32bb74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32bb78: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32bb7c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x32bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x32bb80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bb84: 0x1e1843  sra         $v1, $fp, 1
    ctx->pc = 0x32bb84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 30), 1));
    // 0x32bb88: 0x283a023  subu        $s4, $s4, $v1
    ctx->pc = 0x32bb88u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x32bb8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bb90: 0x171843  sra         $v1, $s7, 1
    ctx->pc = 0x32bb90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 23), 1));
    // 0x32bb94: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x32bb94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32bb98: 0x2669823  subu        $s3, $s3, $a2
    ctx->pc = 0x32bb98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x32bb9c: 0x0  nop
    ctx->pc = 0x32bb9cu;
    // NOP
    ctx->pc = 0x32bba0u;
}
