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

// Function: entry_0019e760
// Address: 0x19e760 - 0x19e8c0
void entry_0019e760_0x19e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e760_0x19e760");
#endif

    ctx->pc = 0x19e760u;

    // 0x19e760: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e764: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x19e764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19e768: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x19e768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x19e76c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e770: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x19E770u;
    {
        const bool branch_taken_0x19e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e770) {
            ctx->pc = 0x19E8C0u;
            return;
        }
    }
    ctx->pc = 0x19E778u;
    // 0x19e778: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e77c: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e780: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x19e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x19e784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19e788: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x19E788u;
    {
        const bool branch_taken_0x19e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e788) {
            ctx->pc = 0x19E8C0u;
            return;
        }
    }
    ctx->pc = 0x19E790u;
    // 0x19e790: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e794: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19e794u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19e798: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x19e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x19e79c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19e7a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e7a4: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x19e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x19e7a8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e7ac: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e7b0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19e7b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e7b8: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19e7bc: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19e7c0: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19e7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19e7c4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19e7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e7c8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19e7cc: 0x0  nop
    ctx->pc = 0x19e7ccu;
    // NOP
    // 0x19e7d0: 0x1010  mfhi        $v0
    ctx->pc = 0x19e7d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19e7d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e7d8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x19e7d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x19e7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e7e0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19e7e4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e7e8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e7ec: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x19e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x19e7f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e7f4: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19e7f8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x19e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x19e7fc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19e800: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e804: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x19e804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x19e808: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e80c: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e810: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x19e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x19e814: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19e814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19e818: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x19e818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x19e81c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e820: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e824: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x19e824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19e828: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e82c: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e830: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x19e830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e834: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e838: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e83c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e840: 0x304300ef  andi        $v1, $v0, 0xEF
    ctx->pc = 0x19e840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
    // 0x19e844: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e848: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e848u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e84c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19e84cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e850: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e854: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e858: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e85c: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x19e85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x19e860: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e864: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e864u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e868: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19e868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e86c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e870: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e874: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x19e874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19e878: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e87c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e880: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19e884: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19e888: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19e88c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19e88cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e890: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19e894: 0x0  nop
    ctx->pc = 0x19e894u;
    // NOP
    // 0x19e898: 0x1010  mfhi        $v0
    ctx->pc = 0x19e898u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19e89c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e8a0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x19e8a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x19e8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e8a8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x19e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19e8ac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e8b0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e8b4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x19e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x19e8b8: 0xa38080bc  sb          $zero, -0x7F44($gp)
    ctx->pc = 0x19e8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934716), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e8bc: 0xa38080c4  sb          $zero, -0x7F3C($gp)
    ctx->pc = 0x19e8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934724), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19e8c0u;
}
