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

// Function: Eff_work_init
// Address: 0x18a080 - 0x18a664
void Eff_work_init_0x18a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_work_init_0x18a080");
#endif

    switch (ctx->pc) {
        case 0x18a16cu: goto label_18a16c;
        case 0x18a200u: goto label_18a200;
        case 0x18a2a8u: goto label_18a2a8;
        case 0x18a2c8u: goto label_18a2c8;
        case 0x18a2d4u: goto label_18a2d4;
        case 0x18a2f8u: goto label_18a2f8;
        case 0x18a320u: goto label_18a320;
        case 0x18a348u: goto label_18a348;
        case 0x18a370u: goto label_18a370;
        case 0x18a398u: goto label_18a398;
        case 0x18a410u: goto label_18a410;
        case 0x18a490u: goto label_18a490;
        case 0x18a510u: goto label_18a510;
        case 0x18a590u: goto label_18a590;
        case 0x18a610u: goto label_18a610;
        default: break;
    }

    ctx->pc = 0x18a080u;

    // 0x18a080: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18a084: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x18a084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x18a088: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18a08c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18a090: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18a090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18a094: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18a098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a09c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a0a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a0a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a0a8: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x18a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x18a0ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a0b0: 0x24524c50  addiu       $s2, $v0, 0x4C50
    ctx->pc = 0x18a0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
    // 0x18a0b4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a0b8: 0x2453c440  addiu       $s3, $v0, -0x3BC0
    ctx->pc = 0x18a0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952000));
    // 0x18a0bc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x18a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x18a0c0: 0x24546a40  addiu       $s4, $v0, 0x6A40
    ctx->pc = 0x18a0c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 27200));
    // 0x18a0c4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x18a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x18a0c8: 0x2457c180  addiu       $s7, $v0, -0x3E80
    ctx->pc = 0x18a0c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x18a0cc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18a0d0: 0x2455a780  addiu       $s5, $v0, -0x5880
    ctx->pc = 0x18a0d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944640));
    // 0x18a0d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18a0d8: 0x2456ef00  addiu       $s6, $v0, -0x1100
    ctx->pc = 0x18a0d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962944));
    // 0x18a0dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18a0e0: 0x2451a630  addiu       $s1, $v0, -0x59D0
    ctx->pc = 0x18a0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18a0e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18a0e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A634u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A634u, _value); } while (0);
    // 0x18a0e8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x18a0e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A66Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A66Cu, _value); } while (0);
    // 0x18a0ec: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x18a0ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A668u, _value); } while (0);
    // 0x18a0f0: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x18a0f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A68Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A68Cu, _value); } while (0);
    // 0x18a0f4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x18a0f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A688u, _value); } while (0);
    // 0x18a0f8: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x18a0f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A69Cu, _value); } while (0);
    // 0x18a0fc: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x18a0fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A698u, _value); } while (0);
    // 0x18a100: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x18a100u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A6ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A6ACu, _value); } while (0);
    // 0x18a104: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x18a104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A6A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A6A8u, _value); } while (0);
    // 0x18a108: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18a10c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x18A10Cu;
    {
        const bool branch_taken_0x18a10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a10c) {
            ctx->pc = 0x18A1B4u;
            goto label_18a1b4;
        }
    }
    ctx->pc = 0x18A114u;
    // 0x18a114: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x18a114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x18a118: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18a11c: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x18a11cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a120: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x18a120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x18a124: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x18a124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a128: 0x24021b00  addiu       $v0, $zero, 0x1B00
    ctx->pc = 0x18a128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x18a12c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x18a130: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x18a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18a134: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x18a134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a138: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x18a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x18a13c: 0xa2220019  sb          $v0, 0x19($s1)
    ctx->pc = 0x18a13cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a140: 0xa2200029  sb          $zero, 0x29($s1)
    ctx->pc = 0x18a140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a144: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x18a144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a148: 0xa220002b  sb          $zero, 0x2B($s1)
    ctx->pc = 0x18a148u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a14c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x18a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x18a150: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x18a150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18a154: 0xa2220033  sb          $v0, 0x33($s1)
    ctx->pc = 0x18a154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a158: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x18a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18a15c: 0xa2220032  sb          $v0, 0x32($s1)
    ctx->pc = 0x18a15cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a160: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a160u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a164: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18A164u;
    {
        const bool branch_taken_0x18a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a164) {
            ctx->pc = 0x18A198u;
            goto label_18a198;
        }
    }
    ctx->pc = 0x18A16Cu;
label_18a16c:
    // 0x18a16c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18a170: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a174: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18a174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18a178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a17c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a180: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a184: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18a188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a18c: 0xa0400097  sb          $zero, 0x97($v0)
    ctx->pc = 0x18a18cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a190: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a194: 0x0  nop
    ctx->pc = 0x18a194u;
    // NOP
label_18a198:
    // 0x18a198: 0x2e0200a8  sltiu       $v0, $s0, 0xA8
    ctx->pc = 0x18a198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)168) ? 1 : 0);
    // 0x18a19c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x18A19Cu;
    {
        const bool branch_taken_0x18a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a19c) {
            ctx->pc = 0x18A16Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a16c;
        }
    }
    ctx->pc = 0x18A1A4u;
    // 0x18a1a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a1a8: 0xac20a620  sw          $zero, -0x59E0($at)
    ctx->pc = 0x18a1a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A620u, _value); } while (0);
    // 0x18a1ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x18A1ACu;
    {
        const bool branch_taken_0x18a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a1ac) {
            ctx->pc = 0x18A298u;
            goto label_18a298;
        }
    }
    ctx->pc = 0x18A1B4u;
label_18a1b4:
    // 0x18a1b4: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x18a1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x18a1b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18a1c0: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x18a1c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x18a1c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18a1cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1d0: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x18a1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a1d4: 0x9222002b  lbu         $v0, 0x2B($s1)
    ctx->pc = 0x18a1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x18a1d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1dc: 0x2442006e  addiu       $v0, $v0, 0x6E
    ctx->pc = 0x18a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x18a1e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1e4: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x18a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a1e8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x18a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x18a1ec: 0x24421b00  addiu       $v0, $v0, 0x1B00
    ctx->pc = 0x18a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6912));
    // 0x18a1f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18a1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x18a1f4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a1f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a1f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18A1F8u;
    {
        const bool branch_taken_0x18a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a1f8) {
            ctx->pc = 0x18A288u;
            goto label_18a288;
        }
    }
    ctx->pc = 0x18A200u;
label_18a200:
    // 0x18a200: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18a200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18a204: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a208: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18a20c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a210: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18a210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a214: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a218: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18a21c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a220: 0x90620097  lbu         $v0, 0x97($v1)
    ctx->pc = 0x18a220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 151)));
    // 0x18a224: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x18a224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x18a228: 0xa0620097  sb          $v0, 0x97($v1)
    ctx->pc = 0x18a228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a22c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18a230: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a234: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18a234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18a238: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a23c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a240: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a244: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18a248: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18a248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a24c: 0x90620097  lbu         $v0, 0x97($v1)
    ctx->pc = 0x18a24cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 151)));
    // 0x18a250: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x18a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
    // 0x18a254: 0xa0620097  sb          $v0, 0x97($v1)
    ctx->pc = 0x18a254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a258: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18a258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18a25c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a260: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18a260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18a264: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a268: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18a268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a26c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a270: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18a274: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a278: 0x90620097  lbu         $v0, 0x97($v1)
    ctx->pc = 0x18a278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 151)));
    // 0x18a27c: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x18a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x18a280: 0xa0620097  sb          $v0, 0x97($v1)
    ctx->pc = 0x18a280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a284: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18a288:
    // 0x18a288: 0x2e0200a8  sltiu       $v0, $s0, 0xA8
    ctx->pc = 0x18a288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)168) ? 1 : 0);
    // 0x18a28c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x18A28Cu;
    {
        const bool branch_taken_0x18a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a28c) {
            ctx->pc = 0x18A200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a200;
        }
    }
    ctx->pc = 0x18A294u;
    // 0x18a294: 0x0  nop
    ctx->pc = 0x18a294u;
    // NOP
label_18a298:
    // 0x18a298: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x18a298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18a29c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18a29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a2a0: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18A2A0u;
    SET_GPR_U32(ctx, 31, 0x18A2A8u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18A2A0u, 0x18A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2A8u;
label_18a2a8:
    // 0x18a2a8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x18a2ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18a2b0: 0xa2230030  sb          $v1, 0x30($s1)
    ctx->pc = 0x18a2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a2b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18a2b8: 0xa2230031  sb          $v1, 0x31($s1)
    ctx->pc = 0x18a2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a2bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a2bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a2c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A2C0u;
    {
        const bool branch_taken_0x18a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a2c0) {
            ctx->pc = 0x18A2E0u;
            goto label_18a2e0;
        }
    }
    ctx->pc = 0x18A2C8u;
label_18a2c8:
    // 0x18a2c8: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x18a2c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x18a2cc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18A2CCu;
    SET_GPR_U32(ctx, 31, 0x18A2D4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18A2CCu, 0x18A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2D4u;
label_18a2d4:
    // 0x18a2d4: 0x26f70060  addiu       $s7, $s7, 0x60
    ctx->pc = 0x18a2d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 96));
    // 0x18a2d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a2dc: 0x0  nop
    ctx->pc = 0x18a2dcu;
    // NOP
label_18a2e0:
    // 0x18a2e0: 0x2e0301c2  sltiu       $v1, $s0, 0x1C2
    ctx->pc = 0x18a2e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)450) ? 1 : 0);
    // 0x18a2e4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A2E4u;
    {
        const bool branch_taken_0x18a2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a2e4) {
            ctx->pc = 0x18A2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a2c8;
        }
    }
    ctx->pc = 0x18A2ECu;
    // 0x18a2ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a2ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a2f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A2F0u;
    {
        const bool branch_taken_0x18a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a2f0) {
            ctx->pc = 0x18A308u;
            goto label_18a308;
        }
    }
    ctx->pc = 0x18A2F8u;
label_18a2f8:
    // 0x18a2f8: 0xae40020c  sw          $zero, 0x20C($s2)
    ctx->pc = 0x18a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 0));
    // 0x18a2fc: 0x26520230  addiu       $s2, $s2, 0x230
    ctx->pc = 0x18a2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x18a300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a304: 0x0  nop
    ctx->pc = 0x18a304u;
    // NOP
label_18a308:
    // 0x18a308: 0x2e030200  sltiu       $v1, $s0, 0x200
    ctx->pc = 0x18a308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x18a30c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A30Cu;
    {
        const bool branch_taken_0x18a30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a30c) {
            ctx->pc = 0x18A2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a2f8;
        }
    }
    ctx->pc = 0x18A314u;
    // 0x18a314: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a314u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a318: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A318u;
    {
        const bool branch_taken_0x18a318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a318) {
            ctx->pc = 0x18A330u;
            goto label_18a330;
        }
    }
    ctx->pc = 0x18A320u;
label_18a320:
    // 0x18a320: 0xae60020c  sw          $zero, 0x20C($s3)
    ctx->pc = 0x18a320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 0));
    // 0x18a324: 0x26730230  addiu       $s3, $s3, 0x230
    ctx->pc = 0x18a324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x18a328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a32c: 0x0  nop
    ctx->pc = 0x18a32cu;
    // NOP
label_18a330:
    // 0x18a330: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x18a330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x18a334: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A334u;
    {
        const bool branch_taken_0x18a334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a334) {
            ctx->pc = 0x18A320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a320;
        }
    }
    ctx->pc = 0x18A33Cu;
    // 0x18a33c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a33cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A340u;
    {
        const bool branch_taken_0x18a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a340) {
            ctx->pc = 0x18A358u;
            goto label_18a358;
        }
    }
    ctx->pc = 0x18A348u;
label_18a348:
    // 0x18a348: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x18a348u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x18a34c: 0x269402d0  addiu       $s4, $s4, 0x2D0
    ctx->pc = 0x18a34cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x18a350: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a354: 0x0  nop
    ctx->pc = 0x18a354u;
    // NOP
label_18a358:
    // 0x18a358: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x18a358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x18a35c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A35Cu;
    {
        const bool branch_taken_0x18a35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a35c) {
            ctx->pc = 0x18A348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a348;
        }
    }
    ctx->pc = 0x18A364u;
    // 0x18a364: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a364u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a368: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A368u;
    {
        const bool branch_taken_0x18a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a368) {
            ctx->pc = 0x18A380u;
            goto label_18a380;
        }
    }
    ctx->pc = 0x18A370u;
label_18a370:
    // 0x18a370: 0xaec00b18  sw          $zero, 0xB18($s6)
    ctx->pc = 0x18a370u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2840), GPR_U32(ctx, 0));
    // 0x18a374: 0x26d60b30  addiu       $s6, $s6, 0xB30
    ctx->pc = 0x18a374u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2864));
    // 0x18a378: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a37c: 0x0  nop
    ctx->pc = 0x18a37cu;
    // NOP
label_18a380:
    // 0x18a380: 0x2e030040  sltiu       $v1, $s0, 0x40
    ctx->pc = 0x18a380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x18a384: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A384u;
    {
        const bool branch_taken_0x18a384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a384) {
            ctx->pc = 0x18A370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a370;
        }
    }
    ctx->pc = 0x18A38Cu;
    // 0x18a38c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a38cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A390u;
    {
        const bool branch_taken_0x18a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a390) {
            ctx->pc = 0x18A3A8u;
            goto label_18a3a8;
        }
    }
    ctx->pc = 0x18A398u;
label_18a398:
    // 0x18a398: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x18a398u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x18a39c: 0x26b50110  addiu       $s5, $s5, 0x110
    ctx->pc = 0x18a39cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x18a3a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a3a4: 0x0  nop
    ctx->pc = 0x18a3a4u;
    // NOP
label_18a3a8:
    // 0x18a3a8: 0x2e030040  sltiu       $v1, $s0, 0x40
    ctx->pc = 0x18a3a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x18a3ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A3ACu;
    {
        const bool branch_taken_0x18a3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a3ac) {
            ctx->pc = 0x18A398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a398;
        }
    }
    ctx->pc = 0x18A3B4u;
    // 0x18a3b4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a3b8: 0x24634c50  addiu       $v1, $v1, 0x4C50
    ctx->pc = 0x18a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19536));
    // 0x18a3bc: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x18a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x18a3c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x18a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x18a3c4: 0x2463aa20  addiu       $v1, $v1, -0x55E0
    ctx->pc = 0x18a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945312));
    // 0x18a3c8: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x18a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x18a3cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a3d0: 0xac204e6c  sw          $zero, 0x4E6C($at)
    ctx->pc = 0x18a3d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x584E6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x584E6Cu, _value); } while (0);
    // 0x18a3d4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a3d8: 0x24634e80  addiu       $v1, $v1, 0x4E80
    ctx->pc = 0x18a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x18a3dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a3e0: 0xac234e70  sw          $v1, 0x4E70($at)
    ctx->pc = 0x18a3e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x584E70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x584E70u, _value); } while (0);
    // 0x18a3e4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x18a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x18a3e8: 0x2463a7f0  addiu       $v1, $v1, -0x5810
    ctx->pc = 0x18a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944752));
    // 0x18a3ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a3f0: 0xac23ac3c  sw          $v1, -0x53C4($at)
    ctx->pc = 0x18a3f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC3Cu, _value); } while (0);
    // 0x18a3f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a3f8: 0xac20ac40  sw          $zero, -0x53C0($at)
    ctx->pc = 0x18a3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CAC40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC40u, _value); } while (0);
    // 0x18a3fc: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a400: 0x24724e80  addiu       $s2, $v1, 0x4E80
    ctx->pc = 0x18a400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x18a404: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a408: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A408u;
    {
        const bool branch_taken_0x18a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a408) {
            ctx->pc = 0x18A428u;
            goto label_18a428;
        }
    }
    ctx->pc = 0x18A410u;
label_18a410:
    // 0x18a410: 0x2643fdd0  addiu       $v1, $s2, -0x230
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966736));
    // 0x18a414: 0xae43021c  sw          $v1, 0x21C($s2)
    ctx->pc = 0x18a414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 3));
    // 0x18a418: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x18a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x18a41c: 0xae430220  sw          $v1, 0x220($s2)
    ctx->pc = 0x18a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 3));
    // 0x18a420: 0x26520230  addiu       $s2, $s2, 0x230
    ctx->pc = 0x18a420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x18a424: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18a428:
    // 0x18a428: 0x2e0301ff  sltiu       $v1, $s0, 0x1FF
    ctx->pc = 0x18a428u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)511) ? 1 : 0);
    // 0x18a42c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A42Cu;
    {
        const bool branch_taken_0x18a42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a42c) {
            ctx->pc = 0x18A410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a410;
        }
    }
    ctx->pc = 0x18A434u;
    // 0x18a434: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a438: 0x2463c440  addiu       $v1, $v1, -0x3BC0
    ctx->pc = 0x18a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952000));
    // 0x18a43c: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x18a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x18a440: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a444: 0x2463e510  addiu       $v1, $v1, -0x1AF0
    ctx->pc = 0x18a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960400));
    // 0x18a448: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x18a448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x18a44c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a450: 0xac20c65c  sw          $zero, -0x39A4($at)
    ctx->pc = 0x18a450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57C65Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57C65Cu, _value); } while (0);
    // 0x18a454: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a458: 0x2463c670  addiu       $v1, $v1, -0x3990
    ctx->pc = 0x18a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952560));
    // 0x18a45c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a460: 0xac23c660  sw          $v1, -0x39A0($at)
    ctx->pc = 0x18a460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57C660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57C660u, _value); } while (0);
    // 0x18a464: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a468: 0x2463e2e0  addiu       $v1, $v1, -0x1D20
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959840));
    // 0x18a46c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a470: 0xac23e72c  sw          $v1, -0x18D4($at)
    ctx->pc = 0x18a470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57E72Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57E72Cu, _value); } while (0);
    // 0x18a474: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a478: 0xac20e730  sw          $zero, -0x18D0($at)
    ctx->pc = 0x18a478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57E730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57E730u, _value); } while (0);
    // 0x18a47c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a480: 0x2473c670  addiu       $s3, $v1, -0x3990
    ctx->pc = 0x18a480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952560));
    // 0x18a484: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a488: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A488u;
    {
        const bool branch_taken_0x18a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a488) {
            ctx->pc = 0x18A4A8u;
            goto label_18a4a8;
        }
    }
    ctx->pc = 0x18A490u;
label_18a490:
    // 0x18a490: 0x2663fdd0  addiu       $v1, $s3, -0x230
    ctx->pc = 0x18a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966736));
    // 0x18a494: 0xae63021c  sw          $v1, 0x21C($s3)
    ctx->pc = 0x18a494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 540), GPR_U32(ctx, 3));
    // 0x18a498: 0x26630230  addiu       $v1, $s3, 0x230
    ctx->pc = 0x18a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x18a49c: 0xae630220  sw          $v1, 0x220($s3)
    ctx->pc = 0x18a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 3));
    // 0x18a4a0: 0x26730230  addiu       $s3, $s3, 0x230
    ctx->pc = 0x18a4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x18a4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18a4a8:
    // 0x18a4a8: 0x2e03000f  sltiu       $v1, $s0, 0xF
    ctx->pc = 0x18a4a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x18a4ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A4ACu;
    {
        const bool branch_taken_0x18a4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a4ac) {
            ctx->pc = 0x18A490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a490;
        }
    }
    ctx->pc = 0x18A4B4u;
    // 0x18a4b4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a4b8: 0x24636a40  addiu       $v1, $v1, 0x6A40
    ctx->pc = 0x18a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27200));
    // 0x18a4bc: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x18a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x18a4c0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a4c4: 0x2463c170  addiu       $v1, $v1, -0x3E90
    ctx->pc = 0x18a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951280));
    // 0x18a4c8: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x18a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x18a4cc: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x18a4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x18a4d0: 0xac206cf0  sw          $zero, 0x6CF0($at)
    ctx->pc = 0x18a4d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x576CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x576CF0u, _value); } while (0);
    // 0x18a4d4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a4d8: 0x24636d10  addiu       $v1, $v1, 0x6D10
    ctx->pc = 0x18a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27920));
    // 0x18a4dc: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x18a4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x18a4e0: 0xac236cf4  sw          $v1, 0x6CF4($at)
    ctx->pc = 0x18a4e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x576CF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x576CF4u, _value); } while (0);
    // 0x18a4e4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a4e8: 0x2463bea0  addiu       $v1, $v1, -0x4160
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950560));
    // 0x18a4ec: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a4f0: 0xac23c420  sw          $v1, -0x3BE0($at)
    ctx->pc = 0x18a4f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57C420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57C420u, _value); } while (0);
    // 0x18a4f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a4f8: 0xac20c424  sw          $zero, -0x3BDC($at)
    ctx->pc = 0x18a4f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57C424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57C424u, _value); } while (0);
    // 0x18a4fc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a500: 0x24746d10  addiu       $s4, $v1, 0x6D10
    ctx->pc = 0x18a500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 27920));
    // 0x18a504: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a508: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A508u;
    {
        const bool branch_taken_0x18a508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a508) {
            ctx->pc = 0x18A528u;
            goto label_18a528;
        }
    }
    ctx->pc = 0x18A510u;
label_18a510:
    // 0x18a510: 0x2683fd30  addiu       $v1, $s4, -0x2D0
    ctx->pc = 0x18a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966576));
    // 0x18a514: 0xae8302b0  sw          $v1, 0x2B0($s4)
    ctx->pc = 0x18a514u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 3));
    // 0x18a518: 0x268302d0  addiu       $v1, $s4, 0x2D0
    ctx->pc = 0x18a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x18a51c: 0xae8302b4  sw          $v1, 0x2B4($s4)
    ctx->pc = 0x18a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 692), GPR_U32(ctx, 3));
    // 0x18a520: 0x269402d0  addiu       $s4, $s4, 0x2D0
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x18a524: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18a528:
    // 0x18a528: 0x2e03001f  sltiu       $v1, $s0, 0x1F
    ctx->pc = 0x18a528u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x18a52c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A52Cu;
    {
        const bool branch_taken_0x18a52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a52c) {
            ctx->pc = 0x18A510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a510;
        }
    }
    ctx->pc = 0x18A534u;
    // 0x18a534: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a538: 0x2463ef00  addiu       $v1, $v1, -0x1100
    ctx->pc = 0x18a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962944));
    // 0x18a53c: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x18a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x18a540: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a544: 0x2463afd0  addiu       $v1, $v1, -0x5030
    ctx->pc = 0x18a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946768));
    // 0x18a548: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x18a548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x18a54c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a550: 0xac20fa28  sw          $zero, -0x5D8($at)
    ctx->pc = 0x18a550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53FA28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53FA28u, _value); } while (0);
    // 0x18a554: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a558: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x18a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x18a55c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a560: 0xac23fa2c  sw          $v1, -0x5D4($at)
    ctx->pc = 0x18a560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53FA2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53FA2Cu, _value); } while (0);
    // 0x18a564: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a568: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x18a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x18a56c: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x18a570: 0xac23baf8  sw          $v1, -0x4508($at)
    ctx->pc = 0x18a570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x56BAF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56BAF8u, _value); } while (0);
    // 0x18a574: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x18a574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x18a578: 0xac20bafc  sw          $zero, -0x4504($at)
    ctx->pc = 0x18a578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x56BAFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56BAFCu, _value); } while (0);
    // 0x18a57c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a580: 0x2476fa30  addiu       $s6, $v1, -0x5D0
    ctx->pc = 0x18a580u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x18a584: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A588u;
    {
        const bool branch_taken_0x18a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a588) {
            ctx->pc = 0x18A5A8u;
            goto label_18a5a8;
        }
    }
    ctx->pc = 0x18A590u;
label_18a590:
    // 0x18a590: 0x26c3f4d0  addiu       $v1, $s6, -0xB30
    ctx->pc = 0x18a590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294964432));
    // 0x18a594: 0xaec30b28  sw          $v1, 0xB28($s6)
    ctx->pc = 0x18a594u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2856), GPR_U32(ctx, 3));
    // 0x18a598: 0x26c30b30  addiu       $v1, $s6, 0xB30
    ctx->pc = 0x18a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2864));
    // 0x18a59c: 0xaec30b2c  sw          $v1, 0xB2C($s6)
    ctx->pc = 0x18a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2860), GPR_U32(ctx, 3));
    // 0x18a5a0: 0x26d60b30  addiu       $s6, $s6, 0xB30
    ctx->pc = 0x18a5a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2864));
    // 0x18a5a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18a5a8:
    // 0x18a5a8: 0x2e03003f  sltiu       $v1, $s0, 0x3F
    ctx->pc = 0x18a5a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x18a5ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A5ACu;
    {
        const bool branch_taken_0x18a5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a5ac) {
            ctx->pc = 0x18A590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a590;
        }
    }
    ctx->pc = 0x18A5B4u;
    // 0x18a5b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a5b8: 0x2463a780  addiu       $v1, $v1, -0x5880
    ctx->pc = 0x18a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944640));
    // 0x18a5bc: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x18a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x18a5c0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a5c4: 0x2463ea70  addiu       $v1, $v1, -0x1590
    ctx->pc = 0x18a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961776));
    // 0x18a5c8: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x18a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x18a5cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a5d0: 0xac20a86c  sw          $zero, -0x5794($at)
    ctx->pc = 0x18a5d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A86Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A86Cu, _value); } while (0);
    // 0x18a5d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a5d8: 0x2463a890  addiu       $v1, $v1, -0x5770
    ctx->pc = 0x18a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
    // 0x18a5dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a5e0: 0xac23a870  sw          $v1, -0x5790($at)
    ctx->pc = 0x18a5e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A870u, _value); } while (0);
    // 0x18a5e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a5e8: 0x2463e960  addiu       $v1, $v1, -0x16A0
    ctx->pc = 0x18a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961504));
    // 0x18a5ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a5f0: 0xac23eb5c  sw          $v1, -0x14A4($at)
    ctx->pc = 0x18a5f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53EB5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53EB5Cu, _value); } while (0);
    // 0x18a5f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a5f8: 0xac20eb60  sw          $zero, -0x14A0($at)
    ctx->pc = 0x18a5f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53EB60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53EB60u, _value); } while (0);
    // 0x18a5fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a600: 0x2475a890  addiu       $s5, $v1, -0x5770
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944912));
    // 0x18a604: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A608u;
    {
        const bool branch_taken_0x18a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a608) {
            ctx->pc = 0x18A628u;
            goto label_18a628;
        }
    }
    ctx->pc = 0x18A610u;
label_18a610:
    // 0x18a610: 0x26a3fef0  addiu       $v1, $s5, -0x110
    ctx->pc = 0x18a610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967024));
    // 0x18a614: 0xaea300ec  sw          $v1, 0xEC($s5)
    ctx->pc = 0x18a614u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 236), GPR_U32(ctx, 3));
    // 0x18a618: 0x26a30110  addiu       $v1, $s5, 0x110
    ctx->pc = 0x18a618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x18a61c: 0xaea300f0  sw          $v1, 0xF0($s5)
    ctx->pc = 0x18a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 3));
    // 0x18a620: 0x26b50110  addiu       $s5, $s5, 0x110
    ctx->pc = 0x18a620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x18a624: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18a628:
    // 0x18a628: 0x2e03003f  sltiu       $v1, $s0, 0x3F
    ctx->pc = 0x18a628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x18a62c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A62Cu;
    {
        const bool branch_taken_0x18a62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a62c) {
            ctx->pc = 0x18A610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a610;
        }
    }
    ctx->pc = 0x18A634u;
    // 0x18a634: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x18a634u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a638: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18a638u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a63c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18a63cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a640: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18a640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18a644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a64c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a658: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x18a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18a65c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A664u;
}
