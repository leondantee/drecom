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

// Function: Morph2
// Address: 0x1b0a90 - 0x1b0c38
void Morph2_0x1b0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Morph2_0x1b0a90");
#endif

    switch (ctx->pc) {
        case 0x1b0b60u: goto label_1b0b60;
        case 0x1b0ba8u: goto label_1b0ba8;
        case 0x1b0bc0u: goto label_1b0bc0;
        default: break;
    }

    ctx->pc = 0x1b0a90u;

    // 0x1b0a90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b0a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b0a94: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b0a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b0a98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b0a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b0a9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b0a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b0aa0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b0aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b0aa4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b0aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b0aa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b0aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b0aac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b0aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b0ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0ab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b0abc: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1b0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x1b0ac0: 0xa3a500c8  sb          $a1, 0xC8($sp)
    ctx->pc = 0x1b0ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b0ac4: 0xa3a600d0  sb          $a2, 0xD0($sp)
    ctx->pc = 0x1b0ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b0ac8: 0xe7ac00d8  swc1        $f12, 0xD8($sp)
    ctx->pc = 0x1b0ac8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1b0acc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0ad0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1b0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1b0ad4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1b0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x1b0ad8: 0x93a200c8  lbu         $v0, 0xC8($sp)
    ctx->pc = 0x1b0ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1b0adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0ae0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b0ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0ae4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1b0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1b0ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0aec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b0aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b0af0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1b0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1b0af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0af8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1b0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1b0afc: 0x8fbe00ac  lw          $fp, 0xAC($sp)
    ctx->pc = 0x1b0afcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1b0b00: 0x27d40004  addiu       $s4, $fp, 0x4
    ctx->pc = 0x1b0b00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x1b0b04: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x1b0b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b0b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0b0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0b10: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1b0b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0b18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b0b1c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1b0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1b0b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0b24: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1b0b28: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b0b2c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1b0b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1b0b30: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1b0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1b0b34: 0x24560004  addiu       $s6, $v0, 0x4
    ctx->pc = 0x1b0b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b0b38: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0b3c: 0x8c570058  lw          $s7, 0x58($v0)
    ctx->pc = 0x1b0b3cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1b0b40: 0x97c20002  lhu         $v0, 0x2($fp)
    ctx->pc = 0x1b0b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x1b0b44: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x1b0b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b0b48: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b0b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0b50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0b54: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x1b0b54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1b0b58: 0x8ef50034  lw          $s5, 0x34($s7)
    ctx->pc = 0x1b0b58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x1b0b5c: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1b0b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_1b0b60:
    // 0x1b0b60: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1b0b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b0b64: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1b0b64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0b68: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x1b0b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1b0b6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0b70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0b74: 0x3c28821  addu        $s1, $fp, $v0
    ctx->pc = 0x1b0b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b0b78: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x1b0b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1b0b7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b0b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0b80: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b0b84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1b0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1b0b88: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1b0b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0b8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b0b90: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1b0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b0b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0b98: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1b0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b0b9c: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x1b0b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1b0ba0: 0x0  nop
    ctx->pc = 0x1b0ba0u;
    // NOP
    // 0x1b0ba4: 0x0  nop
    ctx->pc = 0x1b0ba4u;
    // NOP
label_1b0ba8:
    // 0x1b0ba8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1b0ba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b0bac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1b0bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b0bb0: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1b0bb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b0bb4: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x1b0bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0bb8: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1B0BB8u;
    SET_GPR_U32(ctx, 31, 0x1B0BC0u);
    ctx->pc = 0x1B1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1580u, 0x1B0BB8u, 0x1B0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BC0u;
label_1b0bc0:
    // 0x1b0bc0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b0bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b0bc4: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1b0bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1b0bc8: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x1b0bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1b0bcc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1b0bd0: 0x1660fff5  bnez        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B0BD0u;
    {
        const bool branch_taken_0x1b0bd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bd0) {
            ctx->pc = 0x1B0BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ba8;
        }
    }
    ctx->pc = 0x1B0BD8u;
    // 0x1b0bd8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1b0bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1b0bdc: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b0bdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b0be0: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b0be0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b0be4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1b0be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b0be8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0bec: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1b0becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1b0bf0: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x1b0bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x1b0bf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0bf8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0bf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0bfc: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1B0BFCu;
    {
        const bool branch_taken_0x1b0bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bfc) {
            ctx->pc = 0x1B0B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0b60;
        }
    }
    ctx->pc = 0x1B0C04u;
    // 0x1b0c04: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b0c04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0c08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b0c08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0c0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0c0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0c10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0c10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0c14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0c18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0c1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0c2c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1b0c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b0c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0C38u;
}
