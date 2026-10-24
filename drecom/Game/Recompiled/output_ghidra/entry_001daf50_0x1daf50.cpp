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

// Function: entry_001daf50
// Address: 0x1daf50 - 0x1db0b8
void entry_001daf50_0x1daf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daf50_0x1daf50");
#endif

    ctx->pc = 0x1daf50u;

    // 0x1daf50: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x1daf50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1daf54: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x1daf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1daf58: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1daf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1daf5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1daf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1daf60: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1daf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1daf64: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1daf64u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1daf68: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1daf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1daf6c: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1daf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1daf70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1daf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1daf74: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1daf74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1daf78: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x1daf78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x1daf7c: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x1daf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1daf80: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1daf80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1daf84: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1daf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1daf88: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x1daf88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x1daf8c: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x1daf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x1daf90: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x1daf90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
    // 0x1daf94: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x1daf94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x1daf98: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1daf98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x1daf9c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x1daf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1dafa0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dafa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dafa4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1dafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dafa8: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x1dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1dafac: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1dafacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x1dafb0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dafb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dafb4: 0x3113c  dsll32      $v0, $v1, 4
    ctx->pc = 0x1dafb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1dafb8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dafb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dafbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dafbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dafc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dafc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dafc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dafc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dafc8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dafcc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dafccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dafd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dafd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dafd4: 0xfea30030  sd          $v1, 0x30($s5)
    ctx->pc = 0x1dafd4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 3));
    // 0x1dafd8: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1dafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1dafdc: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x1dafdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x1dafe0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1dafe4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dafe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dafe8: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x1dafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x1dafec: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dafecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1daff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1daff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1daff4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1daff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1daff8: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1daff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1daffc: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x1daffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x1db000: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db004: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db008: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x1db008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1db00c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1db00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1db010: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1db010u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db014: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db01c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1db01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db020: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1db020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1db024: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1db024u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db028: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db02c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db030: 0x262f021  addu        $fp, $s3, $v0
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db034: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x1db034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1db038: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1db038u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db03c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db044: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1db044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db048: 0x8c520048  lw          $s2, 0x48($v0)
    ctx->pc = 0x1db048u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1db04c: 0xafb200d8  sw          $s2, 0xD8($sp)
    ctx->pc = 0x1db04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 18));
    // 0x1db050: 0x329000ff  andi        $s0, $s4, 0xFF
    ctx->pc = 0x1db050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db054: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1db054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1db058: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1db058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db05c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1db05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1db060: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1db060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1db064: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db068: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1db068u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db06c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db070: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1db070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db074: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1db074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1db078: 0x2643002f  addiu       $v1, $s2, 0x2F
    ctx->pc = 0x1db078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 47));
    // 0x1db07c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1db07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1db080: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1db080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1db084: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1db084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1db088: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1db088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1db08c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1db08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1db090: 0x0  nop
    ctx->pc = 0x1db090u;
    // NOP
    // 0x1db094: 0x1010  mfhi        $v0
    ctx->pc = 0x1db094u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1db098: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1db098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1db09c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db0a0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1db0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1db0a4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db0a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db0ac: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1db0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db0b0: 0xac700018  sw          $s0, 0x18($v1)
    ctx->pc = 0x1db0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 16));
    // 0x1db0b4: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x1db0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    ctx->pc = 0x1db0b8u;
}
