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

// Function: entry_003519d8
// Address: 0x3519d8 - 0x351c1c
void entry_003519d8_0x3519d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003519d8_0x3519d8");
#endif

    switch (ctx->pc) {
        case 0x351a24u: goto label_351a24;
        case 0x351a38u: goto label_351a38;
        case 0x351a58u: goto label_351a58;
        case 0x351a6cu: goto label_351a6c;
        case 0x351a80u: goto label_351a80;
        default: break;
    }

    ctx->pc = 0x3519d8u;

    // 0x3519d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3519d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3519dc: 0x0  nop
    ctx->pc = 0x3519dcu;
    // NOP
    // 0x3519e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3519e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3519e4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x3519e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x3519e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3519e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3519ec: 0x0  nop
    ctx->pc = 0x3519ecu;
    // NOP
    // 0x3519f0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3519f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3519f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3519f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3519f8: 0x0  nop
    ctx->pc = 0x3519f8u;
    // NOP
    // 0x3519fc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3519fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x351a00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x351a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x351a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x351a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351a08: 0x0  nop
    ctx->pc = 0x351a08u;
    // NOP
    // 0x351a0c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x351a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x351a10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351a14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x351a14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x351a18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x351a1c: 0xc0d58d4  jal         func_356350
    ctx->pc = 0x351A1Cu;
    SET_GPR_U32(ctx, 31, 0x351A24u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x351A1Cu, 0x351A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A24u;
label_351a24:
    // 0x351a24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351a28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x351a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x351a2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x351a30: 0xc0d58d4  jal         func_356350
    ctx->pc = 0x351A30u;
    SET_GPR_U32(ctx, 31, 0x351A38u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x351A30u, 0x351A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A38u;
label_351a38:
    // 0x351a38: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x351a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x351a3c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x351a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351a40: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x351a40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x351a44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x351a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351a48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x351a48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x351a4c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x351a50: 0xc0d58d4  jal         func_356350
    ctx->pc = 0x351A50u;
    SET_GPR_U32(ctx, 31, 0x351A58u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x351A50u, 0x351A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A58u;
label_351a58:
    // 0x351a58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351a5c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x351a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x351a60: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x351a64: 0xc0d58d4  jal         func_356350
    ctx->pc = 0x351A64u;
    SET_GPR_U32(ctx, 31, 0x351A6Cu);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x351A64u, 0x351A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A6Cu;
label_351a6c:
    // 0x351a6c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351a70: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x351a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x351a74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x351a78: 0xc0d5c00  jal         func_357000
    ctx->pc = 0x351A78u;
    SET_GPR_U32(ctx, 31, 0x351A80u);
    ctx->pc = 0x357000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357000u, 0x351A78u, 0x351A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A80u;
label_351a80:
    // 0x351a80: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x351a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351a84: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x351a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x351a88: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x351a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x351a8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x351a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x351a90: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x351a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x351a94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351a98: 0x24671330  addiu       $a3, $v1, 0x1330
    ctx->pc = 0x351a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351a9c: 0x90e400c4  lbu         $a0, 0xC4($a3)
    ctx->pc = 0x351a9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x351aa0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x351aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x351aa4: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x351aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x351aa8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x351aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x351aac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x351ab0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351ab4: 0x2467bd00  addiu       $a3, $v1, -0x4300
    ctx->pc = 0x351ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351ab8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x351ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x351abc: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x351abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x351ac0: 0x2406fff8  addiu       $a2, $zero, -0x8
    ctx->pc = 0x351ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x351ac4: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x351ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x351ac8: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x351ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x351acc: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x351accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x351ad0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x351ad0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351ad4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351ad8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x351adc: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351ae0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351ae4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351ae8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x351ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351aec: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x351aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x351af0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x351af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x351af4: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x351af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x351af8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x351af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x351afc: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x351afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x351b00: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x351b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x351b04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351b08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351b0c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351b10: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351b14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351b18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351b1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351b20: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x351b24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351b28: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351b2c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x351b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351b30: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x351b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x351b34: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x351b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
    // 0x351b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351b3c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x351b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351b40: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x351b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x351b44: 0x906500c4  lbu         $a1, 0xC4($v1)
    ctx->pc = 0x351b44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351b48: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x351b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x351b4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351b50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x351b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351b54: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x351b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x351b58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351b5c: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x351b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351b60: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x351b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x351b64: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x351b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x351b68: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x351b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
    // 0x351b6c: 0x3463c8c9  ori         $v1, $v1, 0xC8C9
    ctx->pc = 0x351b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x351b70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351b74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351b78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351b7c: 0x906400c4  lbu         $a0, 0xC4($v1)
    ctx->pc = 0x351b7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351b80: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x351b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x351b84: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x351b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x351b88: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x351b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x351b8c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x351b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x351b90: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x351b90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x351b94: 0x24e8bd00  addiu       $t0, $a3, -0x4300
    ctx->pc = 0x351b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950144));
    // 0x351b98: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x351b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x351b9c: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x351b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x351ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x351ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x351ba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351ba8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351bac: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x351bb0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351bb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351bb8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351bbc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x351bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351bc0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x351bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x351bc4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x351bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x351bc8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x351bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x351bcc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x351bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x351bd0: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x351bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x351bd4: 0x3c133f10  lui         $s3, 0x3F10
    ctx->pc = 0x351bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16144 << 16));
    // 0x351bd8: 0x36639091  ori         $v1, $s3, 0x9091
    ctx->pc = 0x351bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)37009);
    // 0x351bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351be0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351be4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x351be8: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351bec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351bf0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351bf4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x351bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351bf8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x351bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x351bfc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351c00: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x351c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351c04: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x351c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351c08: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x351c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x351c0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351c10: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x351c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x351c14: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x351c14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x351c18: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x351c18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x351c1cu;
}
