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

// Function: entry_0037aca4
// Address: 0x37aca4 - 0x37af48
void entry_0037aca4_0x37aca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037aca4_0x37aca4");
#endif

    switch (ctx->pc) {
        case 0x37ad54u: goto label_37ad54;
        case 0x37ad80u: goto label_37ad80;
        case 0x37aeb4u: goto label_37aeb4;
        case 0x37af2cu: goto label_37af2c;
        default: break;
    }

    ctx->pc = 0x37aca4u;

    // 0x37aca4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x37aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x37aca8: 0x24426760  addiu       $v0, $v0, 0x6760
    ctx->pc = 0x37aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x37acac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x37acacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37acb0: 0x26620007  addiu       $v0, $s3, 0x7
    ctx->pc = 0x37acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x37acb4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x37acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37acb8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37acbc: 0x2442b9e0  addiu       $v0, $v0, -0x4620
    ctx->pc = 0x37acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949344));
    // 0x37acc0: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x37acc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37acc4: 0x8ed50000  lw          $s5, 0x0($s6)
    ctx->pc = 0x37acc4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37acc8: 0x72a0a628  paddub      $s4, $s5, $zero
    ctx->pc = 0x37acc8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x37accc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x37acccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37acd0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x37acd0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37acd4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x37acd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37acd8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x37acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37acdc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x37acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x37ace0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x37ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x37ace4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37ace8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37acec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x37acecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37acf0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x37acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x37acf4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37acf8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x37acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37acfc: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37acfcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37ad00: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x37ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37ad04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37ad08: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x37ad08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x37ad0c: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x37ad0cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37ad10: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x37ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37ad14: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x37ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x37ad18: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x37ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37ad1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37ad20: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x37ad20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x37ad24: 0x2a61823  subu        $v1, $s5, $a2
    ctx->pc = 0x37ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x37ad28: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x37ad28u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37ad2c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x37ad2cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ad30: 0x0  nop
    ctx->pc = 0x37ad30u;
    // NOP
    // 0x37ad34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37ad34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37ad38: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37ad3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x37ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37ad40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ad40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ad44: 0x0  nop
    ctx->pc = 0x37ad44u;
    // NOP
    // 0x37ad48: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37ad48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37ad4c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37AD4Cu;
    SET_GPR_U32(ctx, 31, 0x37AD54u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37AD4Cu, 0x37AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD54u;
label_37ad54:
    // 0x37ad54: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x37ad54u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37ad58: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x37ad58u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ad5c: 0x0  nop
    ctx->pc = 0x37ad5cu;
    // NOP
    // 0x37ad60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37ad60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37ad64: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37ad68: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x37ad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37ad6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ad6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ad70: 0x0  nop
    ctx->pc = 0x37ad70u;
    // NOP
    // 0x37ad74: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37ad74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37ad78: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37AD78u;
    SET_GPR_U32(ctx, 31, 0x37AD80u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37AD78u, 0x37AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD80u;
label_37ad80:
    // 0x37ad80: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37ad80u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37ad84: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x37ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x37ad88: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x37ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x37ad8c: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x37ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x37ad90: 0x34642b16  ori         $a0, $v1, 0x2B16
    ctx->pc = 0x37ad90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x37ad94: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x37ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x37ad98: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x37ad9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37ada0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37ada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37ada4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37ada8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37adac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x37adacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37adb0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37adb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37adb8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37adbc: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x37adbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37adc0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x37adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37adc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37adc8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37adcc: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x37adccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37add0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37add0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37add4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x37add4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37add8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x37add8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37addc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x37addcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x37ade0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37ade4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x37ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x37ade8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37adec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37adecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37adf0: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x37adf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37adf4: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x37adf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x37adf8: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x37adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37adfc: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x37adfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x37ae00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x37ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x37ae04: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x37ae04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37ae08: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x37ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x37ae0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37ae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37ae10: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x37ae10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37ae14: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x37ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x37ae18: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x37ae18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37ae1c: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x37ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x37ae20: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x37ae20u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37ae24: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x37ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37ae28: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x37ae28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x37ae2c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x37ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37ae30: 0x2c31025  or          $v0, $s6, $v1
    ctx->pc = 0x37ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x37ae34: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x37ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37ae38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ae3c: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x37ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37ae40: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x37ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37ae44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ae48: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x37ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37ae4c: 0x24477000  addiu       $a3, $v0, 0x7000
    ctx->pc = 0x37ae4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37ae50: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x37ae50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x37ae54: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x37ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37ae58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x37ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37ae5c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37ae60: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x37ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37ae64: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x37ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x37ae68: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x37ae68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37ae6c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x37ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x37ae70: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x37ae70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37ae74: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x37ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37ae78: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x37ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x37ae7c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x37ae7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37ae80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37ae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37ae84: 0x246600a3  addiu       $a2, $v1, 0xA3
    ctx->pc = 0x37ae84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 163));
    // 0x37ae88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x37ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x37ae8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x37ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37ae90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x37ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37ae94: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37ae98: 0x2446cca0  addiu       $a2, $v0, -0x3360
    ctx->pc = 0x37ae98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x37ae9c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x37ae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37aea0: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x37aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x37aea4: 0x27c4001c  addiu       $a0, $fp, 0x1C
    ctx->pc = 0x37aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37aea8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37aea8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37aeac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37AEACu;
    SET_GPR_U32(ctx, 31, 0x37AEB4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37AEACu, 0x37AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEB4u;
label_37aeb4:
    // 0x37aeb4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x37aeb8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x37aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x37aebc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37aec0: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x37aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37aec4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37aec8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37aecc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x37aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37aed0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37aed0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37aed4: 0x22138  dsll        $a0, $v0, 4
    ctx->pc = 0x37aed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 4);
    // 0x37aed8: 0x3483000a  ori         $v1, $a0, 0xA
    ctx->pc = 0x37aed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x37aedc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37aee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37aee4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37aee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37aee8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x37aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x37aeec: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x37aeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37aef0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37aef4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37aef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37aef8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37aef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37aefc: 0x31638  dsll        $v0, $v1, 24
    ctx->pc = 0x37aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 24);
    // 0x37af00: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x37af00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37af04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37af08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37af0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37af0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37af10: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x37af10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x37af14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x37af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37af18: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37af18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37af1c: 0x27c4001c  addiu       $a0, $fp, 0x1C
    ctx->pc = 0x37af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37af20: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37af20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37af24: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37AF24u;
    SET_GPR_U32(ctx, 31, 0x37AF2Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37AF24u, 0x37AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF2Cu;
label_37af2c:
    // 0x37af2c: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37af30: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37af30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37af34: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x37af34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37af38: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x37af38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37af3c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x37af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37af40: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x37af40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37af44: 0x0  nop
    ctx->pc = 0x37af44u;
    // NOP
    ctx->pc = 0x37af48u;
}
