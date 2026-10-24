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

// Function: entry_0028bfe8
// Address: 0x28bfe8 - 0x28c110
void entry_0028bfe8_0x28bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bfe8_0x28bfe8");
#endif

    ctx->pc = 0x28bfe8u;

    // 0x28bfe8: 0x26024970  addiu       $v0, $s0, 0x4970
    ctx->pc = 0x28bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18800));
    // 0x28bfec: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x28bfecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28bff0: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x28bff0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x28bff4: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x28bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x28bff8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28bffc: 0x3446103b  ori         $a2, $v0, 0x103B
    ctx->pc = 0x28bffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x28c000: 0xaee60004  sw          $a2, 0x4($s7)
    ctx->pc = 0x28c000u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 6));
    // 0x28c004: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28c008: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28c008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28c00c: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x28c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x28c010: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28c010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c014: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x28c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28c018: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x28c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28c01c: 0x90660004  lbu         $a2, 0x4($v1)
    ctx->pc = 0x28c01cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28c020: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x28c020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x28c024: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x28c024u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28c028: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x28c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28c02c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x28c02cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x28c030: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x28c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x28c034: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x28c034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c038: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28c038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28c03c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x28c040: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28c040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28c044: 0x34461043  ori         $a2, $v0, 0x1043
    ctx->pc = 0x28c044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x28c048: 0xaec60004  sw          $a2, 0x4($s6)
    ctx->pc = 0x28c048u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 6));
    // 0x28c04c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28c050: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x28c050u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x28c054: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x28c054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x28c058: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x28c058u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x28c05c: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x28c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x28c060: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x28c060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x28c064: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x28c064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x28c068: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x28c068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28c06c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x28c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x28c070: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x28c070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28c074: 0x34c30040  ori         $v1, $a2, 0x40
    ctx->pc = 0x28c074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x28c078: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x28c078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x28c07c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c080: 0x94232244  lhu         $v1, 0x2244($at)
    ctx->pc = 0x28c080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622244u));
    // 0x28c084: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x28c084u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c088: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c08c: 0x94262240  lhu         $a2, 0x2240($at)
    ctx->pc = 0x28c08cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x622240u));
    // 0x28c090: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x28c090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28c094: 0x1283823  subu        $a3, $t1, $t0
    ctx->pc = 0x28c094u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x28c098: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x28c098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
    // 0x28c09c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c0a0: 0x94262246  lhu         $a2, 0x2246($at)
    ctx->pc = 0x28c0a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x622246u));
    // 0x28c0a4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x28c0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28c0a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c0ac: 0x94232242  lhu         $v1, 0x2242($at)
    ctx->pc = 0x28c0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622242u));
    // 0x28c0b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x28c0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c0b4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x28c0b8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28c0b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28c0bc: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x28c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28c0c0: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x28c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x28c0c4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x28c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28c0c8: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x28c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x28c0cc: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x28c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x28c0d0: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x28c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x28c0d4: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x28c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28c0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c0dc: 0x0  nop
    ctx->pc = 0x28c0dcu;
    // NOP
    // 0x28c0e0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28c0e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28c0e4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28c0e8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28c0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28c0ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c0f0: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x28c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x28c0f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C0F4u;
    {
        const bool branch_taken_0x28c0f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c0f4) {
            ctx->pc = 0x28C110u;
            return;
        }
    }
    ctx->pc = 0x28C0FCu;
    // 0x28c0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c100: 0x0  nop
    ctx->pc = 0x28c100u;
    // NOP
    // 0x28c104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c108: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28C108u;
    {
        const bool branch_taken_0x28c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c108) {
            ctx->pc = 0x28C12Cu;
            return;
        }
    }
    ctx->pc = 0x28C110u;
}
