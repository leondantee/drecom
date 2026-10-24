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

// Function: Morph_reset
// Address: 0x1afb10 - 0x1afcfc
void Morph_reset_0x1afb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Morph_reset_0x1afb10");
#endif

    switch (ctx->pc) {
        case 0x1afb64u: goto label_1afb64;
        case 0x1afb88u: goto label_1afb88;
        case 0x1afbd8u: goto label_1afbd8;
        case 0x1afc60u: goto label_1afc60;
        default: break;
    }

    ctx->pc = 0x1afb10u;

    // 0x1afb10: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1afb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1afb14: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1afb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1afb18: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1afb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1afb1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1afb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1afb20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1afb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1afb24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1afb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1afb28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1afb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1afb2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1afb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1afb30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1afb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1afb34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1afb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1afb38: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x1afb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x1afb3c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x1afb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1afb40: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1afb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1afb44: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x1afb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x1afb48: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1afb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1afb4c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1afb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1afb50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1afb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1afb54: 0xa7a3015e  sh          $v1, 0x15E($sp)
    ctx->pc = 0x1afb54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x1afb58: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1afb58u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1afb5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFB5Cu;
    {
        const bool branch_taken_0x1afb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afb5c) {
            ctx->pc = 0x1AFB78u;
            goto label_1afb78;
        }
    }
    ctx->pc = 0x1AFB64u;
label_1afb64:
    // 0x1afb64: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1afb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1afb68: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1afb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afb6c: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x1afb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
    // 0x1afb70: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1afb70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1afb74: 0x0  nop
    ctx->pc = 0x1afb74u;
    // NOP
label_1afb78:
    // 0x1afb78: 0x2fc30030  sltiu       $v1, $fp, 0x30
    ctx->pc = 0x1afb78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1afb7c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AFB7Cu;
    {
        const bool branch_taken_0x1afb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb7c) {
            ctx->pc = 0x1AFB64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afb64;
        }
    }
    ctx->pc = 0x1AFB84u;
    // 0x1afb84: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1afb84u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1afb88:
    // 0x1afb88: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x1afb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1afb8c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1afb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1afb90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afb94: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1afb98: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x1afb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1afb9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afba0: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x1afba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x1afba4: 0x8fb60158  lw          $s6, 0x158($sp)
    ctx->pc = 0x1afba4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1afba8: 0x26d30004  addiu       $s3, $s6, 0x4
    ctx->pc = 0x1afba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1afbac: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x1afbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1afbb0: 0x8c770058  lw          $s7, 0x58($v1)
    ctx->pc = 0x1afbb0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1afbb4: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1afbb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1afbb8: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1afbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afbbc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1afbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1afbc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afbc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1afbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1afbc8: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x1afbc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1afbcc: 0x8ef50034  lw          $s5, 0x34($s7)
    ctx->pc = 0x1afbccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x1afbd0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1afbd0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1afbd4: 0x0  nop
    ctx->pc = 0x1afbd4u;
    // NOP
label_1afbd8:
    // 0x1afbd8: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x1afbd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1afbdc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afbe0: 0x1683002d  bne         $s4, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AFBE0u;
    {
        const bool branch_taken_0x1afbe0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afbe0) {
            ctx->pc = 0x1AFC98u;
            goto label_1afc98;
        }
    }
    ctx->pc = 0x1AFBE8u;
    // 0x1afbe8: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1afbe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1afbec: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1afbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afbf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afbf4: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x1afbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afbf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afbfc: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x1afbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x1afc00: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x1afc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x1afc04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1afc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1afc08: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AFC08u;
    {
        const bool branch_taken_0x1afc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afc08) {
            ctx->pc = 0x1AFC98u;
            goto label_1afc98;
        }
    }
    ctx->pc = 0x1AFC10u;
    // 0x1afc10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afc14: 0x2832804  sllv        $a1, $v1, $s4
    ctx->pc = 0x1afc14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x1afc18: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1afc18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1afc1c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1afc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afc20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afc24: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1afc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afc28: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x1afc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1afc2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1afc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1afc30: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x1afc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x1afc34: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1afc34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1afc38: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AFC38u;
    {
        const bool branch_taken_0x1afc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc38) {
            ctx->pc = 0x1AFC90u;
            goto label_1afc90;
        }
    }
    ctx->pc = 0x1AFC40u;
    // 0x1afc40: 0x8eb20020  lw          $s2, 0x20($s5)
    ctx->pc = 0x1afc40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1afc44: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x1afc44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1afc48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1afc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1afc4c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1afc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1afc50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afc54: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1afc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1afc58: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x1afc58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1afc5c: 0x0  nop
    ctx->pc = 0x1afc5cu;
    // NOP
label_1afc60:
    // 0x1afc60: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1afc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afc64: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1afc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afc68: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1afc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afc6c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1afc6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1afc70: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1afc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1afc74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1afc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1afc78: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1afc78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1afc7c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1afc7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1afc80: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1afc80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1afc84: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AFC84u;
    {
        const bool branch_taken_0x1afc84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afc84) {
            ctx->pc = 0x1AFC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afc60;
        }
    }
    ctx->pc = 0x1AFC8Cu;
    // 0x1afc8c: 0x0  nop
    ctx->pc = 0x1afc8cu;
    // NOP
label_1afc90:
    // 0x1afc90: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1afc90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1afc94: 0x0  nop
    ctx->pc = 0x1afc94u;
    // NOP
label_1afc98:
    // 0x1afc98: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1afc98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1afc9c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1afc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1afca0: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x1afca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x1afca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1afca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1afca8: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1afca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afcac: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1AFCACu;
    {
        const bool branch_taken_0x1afcac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afcac) {
            ctx->pc = 0x1AFBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afbd8;
        }
    }
    ctx->pc = 0x1AFCB4u;
    // 0x1afcb4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1afcb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1afcb8: 0x97a3015e  lhu         $v1, 0x15E($sp)
    ctx->pc = 0x1afcb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 350)));
    // 0x1afcbc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afcc0: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1afcc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afcc4: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1AFCC4u;
    {
        const bool branch_taken_0x1afcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afcc4) {
            ctx->pc = 0x1AFB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afb88;
        }
    }
    ctx->pc = 0x1AFCCCu;
    // 0x1afccc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1afcccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1afcd0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1afcd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1afcd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1afcd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1afcd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1afcd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afcdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1afcdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afce0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1afce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afce4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1afce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1afce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afcec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1afcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afcf0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x1afcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1afcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFCFCu;
}
