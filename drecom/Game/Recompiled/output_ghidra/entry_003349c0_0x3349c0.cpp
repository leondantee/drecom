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

// Function: entry_003349c0
// Address: 0x3349c0 - 0x334c38
void entry_003349c0_0x3349c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003349c0_0x3349c0");
#endif

    switch (ctx->pc) {
        case 0x334a30u: goto label_334a30;
        case 0x334a5cu: goto label_334a5c;
        case 0x334b94u: goto label_334b94;
        case 0x334c14u: goto label_334c14;
        default: break;
    }

    ctx->pc = 0x3349c0u;

    // 0x3349c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3349c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3349c4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x3349c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3349c8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3349c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3349cc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3349ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3349d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3349d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3349d4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3349d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3349d8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3349d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3349dc: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x3349dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x3349e0: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x3349e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3349e4: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x3349e4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x3349e8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3349e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3349ec: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x3349ecu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3349f0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3349f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3349f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3349f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3349f8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3349f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3349fc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x334a00: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x334a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x334a04: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x334a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x334a08: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x334a08u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334a0c: 0x0  nop
    ctx->pc = 0x334a0cu;
    // NOP
    // 0x334a10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x334a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x334a14: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x334a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x334a18: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x334a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x334a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334a20: 0x0  nop
    ctx->pc = 0x334a20u;
    // NOP
    // 0x334a24: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x334a24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334a28: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334A28u;
    SET_GPR_U32(ctx, 31, 0x334A30u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334A28u, 0x334A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A30u;
label_334a30:
    // 0x334a30: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x334a30u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334a34: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x334a34u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334a38: 0x0  nop
    ctx->pc = 0x334a38u;
    // NOP
    // 0x334a3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x334a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x334a40: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x334a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x334a44: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x334a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x334a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334a4c: 0x0  nop
    ctx->pc = 0x334a4cu;
    // NOP
    // 0x334a50: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x334a50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x334a54: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x334A54u;
    SET_GPR_U32(ctx, 31, 0x334A5Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x334A54u, 0x334A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A5Cu;
label_334a5c:
    // 0x334a5c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x334a5cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334a60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x334a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x334a64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x334a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x334a68: 0x3c046400  lui         $a0, 0x6400
    ctx->pc = 0x334a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25600 << 16));
    // 0x334a6c: 0x34832b16  ori         $v1, $a0, 0x2B16
    ctx->pc = 0x334a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11030);
    // 0x334a70: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x334a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x334a74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x334a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x334a78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x334a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x334a7c: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x334a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x334a80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x334a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x334a84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x334a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x334a88: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x334a88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x334a8c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x334a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x334a90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x334a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x334a94: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x334a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334a98: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x334a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334a9c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x334a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x334aa0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x334aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x334aa4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x334aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334aa8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x334aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x334aac: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x334aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x334ab0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x334ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x334ab4: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x334ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x334ab8: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x334ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334abc: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x334abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x334ac0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x334ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334ac4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x334ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x334ac8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x334ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x334acc: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x334accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x334ad0: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x334ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x334ad4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x334ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x334ad8: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x334ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x334adc: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x334adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334ae0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x334ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x334ae4: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x334ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x334ae8: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x334ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334aec: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x334aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x334af0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334af4: 0x154100  sll         $t0, $s5, 4
    ctx->pc = 0x334af4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x334af8: 0x25027000  addiu       $v0, $t0, 0x7000
    ctx->pc = 0x334af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x334afc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x334afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334b00: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x334b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x334b04: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x334b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334b08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x334b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x334b0c: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x334b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x334b10: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x334b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x334b14: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x334b14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x334b18: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x334b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334b1c: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x334b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x334b20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x334b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x334b24: 0x1e3100  sll         $a2, $fp, 4
    ctx->pc = 0x334b24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x334b28: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x334b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x334b2c: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x334b2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334b30: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x334b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x334b34: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x334b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x334b38: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x334b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x334b3c: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x334b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x334b40: 0x1261025  or          $v0, $t1, $a2
    ctx->pc = 0x334b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x334b44: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x334b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x334b48: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x334b48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x334b4c: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x334b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x334b50: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x334b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x334b54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x334b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x334b58: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x334b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x334b5c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x334b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x334b60: 0x248200a3  addiu       $v0, $a0, 0xA3
    ctx->pc = 0x334b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 163));
    // 0x334b64: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x334b64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334b68: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x334b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x334b6c: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x334b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x334b70: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x334b70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x334b74: 0x2509cca0  addiu       $t1, $t0, -0x3360
    ctx->pc = 0x334b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954144));
    // 0x334b78: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x334b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x334b7c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x334b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x334b80: 0x2647001c  addiu       $a3, $s2, 0x1C
    ctx->pc = 0x334b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334b84: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x334b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x334b88: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x334b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x334b8c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334B8Cu;
    SET_GPR_U32(ctx, 31, 0x334B94u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334B8Cu, 0x334B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B94u;
label_334b94:
    // 0x334b94: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x334b94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334b98: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x334b98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x334b9c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x334b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x334ba0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x334ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x334ba4: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x334ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x334ba8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x334ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x334bac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x334bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x334bb0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x334bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x334bb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334bb8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x334bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x334bbc: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x334bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x334bc0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x334bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x334bc4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x334bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x334bc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334bcc: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x334bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x334bd0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x334bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x334bd4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x334bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x334bd8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x334bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x334bdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334be0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x334be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x334be4: 0x463825  or          $a3, $v0, $a2
    ctx->pc = 0x334be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x334be8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x334be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x334bec: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x334becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x334bf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334bf4: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x334bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x334bf8: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x334bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x334bfc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x334bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x334c00: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x334c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334c04: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x334c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334c08: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x334c08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x334c0c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334C0Cu;
    SET_GPR_U32(ctx, 31, 0x334C14u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334C0Cu, 0x334C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C14u;
label_334c14:
    // 0x334c14: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x334c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x334c18: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x334c18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c1c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x334c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x334c20: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x334c20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c24: 0x26e20008  addiu       $v0, $s7, 0x8
    ctx->pc = 0x334c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x334c28: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x334c28u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c2c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x334c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x334c30: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x334c30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334c34: 0x0  nop
    ctx->pc = 0x334c34u;
    // NOP
    ctx->pc = 0x334c38u;
}
