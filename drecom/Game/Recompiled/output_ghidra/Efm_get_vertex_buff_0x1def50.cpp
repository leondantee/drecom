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

// Function: Efm_get_vertex_buff
// Address: 0x1def50 - 0x1df110
void Efm_get_vertex_buff_0x1def50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_get_vertex_buff_0x1def50");
#endif

    switch (ctx->pc) {
        case 0x1defbcu: goto label_1defbc;
        case 0x1defc8u: goto label_1defc8;
        case 0x1defe0u: goto label_1defe0;
        case 0x1df028u: goto label_1df028;
        default: break;
    }

    ctx->pc = 0x1def50u;

    // 0x1def50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1def50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1def54: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1def54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1def58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1def58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1def5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1def5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1def60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1def60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1def64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1def64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1def68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1def68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1def6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1def6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1def70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1def70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1def74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1def74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1def78: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1def78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1def7c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1def7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1def80: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x1def80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1def84: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1def84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1def88: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1def88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1def8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1def8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1def90: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1def90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1def94: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1def94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1def98: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1def98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1def9c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1def9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1defa0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1defa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1defa4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1defa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1defa8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1defa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1defac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1defacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1defb0: 0x8c7e0058  lw          $fp, 0x58($v1)
    ctx->pc = 0x1defb0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1defb4: 0x8fd50034  lw          $s5, 0x34($fp)
    ctx->pc = 0x1defb4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1defb8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1defb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1defbc:
    // 0x1defbc: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1defbcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1defc0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1DEFC0u;
    {
        const bool branch_taken_0x1defc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1defc0) {
            ctx->pc = 0x1DF088u;
            goto label_1df088;
        }
    }
    ctx->pc = 0x1DEFC8u;
label_1defc8:
    // 0x1defc8: 0x8eb300a8  lw          $s3, 0xA8($s5)
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x1defcc: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1defccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1defd0: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1defd0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1defd4: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1defd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1defd8: 0x0  nop
    ctx->pc = 0x1defd8u;
    // NOP
    // 0x1defdc: 0x0  nop
    ctx->pc = 0x1defdcu;
    // NOP
label_1defe0:
    // 0x1defe0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1defe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1defe4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1defe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1defe8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1defe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1defec: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1defecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1deff0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1deff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1deff4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1deff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1deff8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1deff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1deffc: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1deffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1df000: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df004: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DF004u;
    {
        const bool branch_taken_0x1df004 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df004) {
            ctx->pc = 0x1DEFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1defe0;
        }
    }
    ctx->pc = 0x1DF00Cu;
    // 0x1df00c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df010: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df014: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df014u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df018: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df018u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df01c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df020: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df024: 0xac720028  sw          $s2, 0x28($v1)
    ctx->pc = 0x1df024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 18));
label_1df028:
    // 0x1df028: 0xae920044  sw          $s2, 0x44($s4)
    ctx->pc = 0x1df028u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 18));
    // 0x1df02c: 0x26520240  addiu       $s2, $s2, 0x240
    ctx->pc = 0x1df02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x1df030: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1df030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1df034: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df038: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF038u;
    {
        const bool branch_taken_0x1df038 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df038) {
            ctx->pc = 0x1DF028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df028;
        }
    }
    ctx->pc = 0x1DF040u;
    // 0x1df040: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1df040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1df044: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1df044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1df048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1df048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1df04c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1df04cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df050: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df054: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df058: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df05c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df060: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1df060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df064: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1df064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df068: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1df068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1df06c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df070: 0x26e50a68  addiu       $a1, $s7, 0xA68
    ctx->pc = 0x1df070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1df074: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1df074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df078: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1df078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1df07c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1df080: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df084: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1df084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1df088:
    // 0x1df088: 0x2ec30002  sltiu       $v1, $s6, 0x2
    ctx->pc = 0x1df088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1df08c: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1DF08Cu;
    {
        const bool branch_taken_0x1df08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df08c) {
            ctx->pc = 0x1DEFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1defc8;
        }
    }
    ctx->pc = 0x1DF094u;
    // 0x1df094: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1df094u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1df098: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1df098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1df09c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df0a0: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1df0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1df0a4: 0x93c30001  lbu         $v1, 0x1($fp)
    ctx->pc = 0x1df0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x1df0a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df0ac: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df0acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df0b0: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1DF0B0u;
    {
        const bool branch_taken_0x1df0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df0b0) {
            ctx->pc = 0x1DEFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1defbc;
        }
    }
    ctx->pc = 0x1DF0B8u;
    // 0x1df0b8: 0x27de0090  addiu       $fp, $fp, 0x90
    ctx->pc = 0x1df0b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1df0bc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1df0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1df0c0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1df0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df0c4: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x1df0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x1df0c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1df0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df0cc: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1df0ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1df0d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1df0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1df0d4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1df0d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1df0d8: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1DF0D8u;
    {
        const bool branch_taken_0x1df0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df0d8) {
            ctx->pc = 0x1DEFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1defbc;
        }
    }
    ctx->pc = 0x1DF0E0u;
    // 0x1df0e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1df0e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df0e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1df0e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df0e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1df0e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df0ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1df0ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df0f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1df0f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df0f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df0f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df0f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df104: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1df104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df108: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF110u;
}
