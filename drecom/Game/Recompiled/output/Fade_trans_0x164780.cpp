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

// Function: Fade_trans
// Address: 0x164780 - 0x164b70
void Fade_trans_0x164780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fade_trans_0x164780");
#endif

    switch (ctx->pc) {
        case 0x1647ccu: goto label_1647cc;
        case 0x164ad8u: goto label_164ad8;
        case 0x164aecu: goto label_164aec;
        case 0x164b30u: goto label_164b30;
        case 0x164b40u: goto label_164b40;
        default: break;
    }

    ctx->pc = 0x164780u;

    // 0x164780: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x164780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x164784: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x164784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x164788: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x164788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16478c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x164790: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x164790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x164794: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x164794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x164798: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16479c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1647a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1647a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1647a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1647a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1647a8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1647a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1647ac: 0x245058a0  addiu       $s0, $v0, 0x58A0
    ctx->pc = 0x1647acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22688));
    // 0x1647b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1647b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1647b4: 0x24575a00  addiu       $s7, $v0, 0x5A00
    ctx->pc = 0x1647b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
    // 0x1647b8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1647b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1647bc: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x1647c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1647c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1647c4: 0xc05dbbc  jal         func_176EF0
    ctx->pc = 0x1647C4u;
    SET_GPR_U32(ctx, 31, 0x1647CCu);
    ctx->pc = 0x176EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176EF0u, 0x1647C4u, 0x1647CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647CCu;
label_1647cc:
    // 0x1647cc: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x1647ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1647d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1647d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1647d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1647d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1647d8: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1647D8u;
    {
        const bool branch_taken_0x1647d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1647d8) {
            ctx->pc = 0x164AF0u;
            goto label_164af0;
        }
    }
    ctx->pc = 0x1647E0u;
    // 0x1647e0: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x1647e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1647e4: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x1647e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1647e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1647e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1647ec: 0x96020052  lhu         $v0, 0x52($s0)
    ctx->pc = 0x1647ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x1647f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1647f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1647f4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1647F4u;
    {
        const bool branch_taken_0x1647f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1647f4) {
            ctx->pc = 0x164850u;
            goto label_164850;
        }
    }
    ctx->pc = 0x1647FCu;
    // 0x1647fc: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x1647fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x164800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164804: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x164804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x164808: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164808u;
    {
        const bool branch_taken_0x164808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164808) {
            ctx->pc = 0x16481Cu;
            goto label_16481c;
        }
    }
    ctx->pc = 0x164810u;
    // 0x164810: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x164810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x164814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164814u;
    {
        const bool branch_taken_0x164814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164814) {
            ctx->pc = 0x164828u;
            goto label_164828;
        }
    }
    ctx->pc = 0x16481Cu;
label_16481c:
    // 0x16481c: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x16481cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x164820: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x164820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x164824: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x164824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
label_164828:
    // 0x164828: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x164828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16482c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x16482cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164830: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x164830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x164834: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x164834u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164838: 0x9202004e  lbu         $v0, 0x4E($s0)
    ctx->pc = 0x164838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x16483c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x16483cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164840: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x164840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x164844: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x164844u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164848: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x164848u;
    {
        const bool branch_taken_0x164848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164848) {
            ctx->pc = 0x164980u;
            goto label_164980;
        }
    }
    ctx->pc = 0x164850u;
label_164850:
    // 0x164850: 0x96020052  lhu         $v0, 0x52($s0)
    ctx->pc = 0x164850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x164854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164858: 0xa6020052  sh          $v0, 0x52($s0)
    ctx->pc = 0x164858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x16485c: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x16485cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x164860: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x164860u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164864: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x164864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x164868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x164868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16486c: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x16486cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x164870: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x164870u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164874: 0x96020052  lhu         $v0, 0x52($s0)
    ctx->pc = 0x164874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x164878: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16487c: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x16487cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x164880: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x164880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x164884: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164888: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x164888u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16488c: 0x0  nop
    ctx->pc = 0x16488cu;
    // NOP
    // 0x164890: 0x0  nop
    ctx->pc = 0x164890u;
    // NOP
    // 0x164894: 0x1012  mflo        $v0
    ctx->pc = 0x164894u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x164898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16489c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1648a0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1648a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1648a4: 0x92020049  lbu         $v0, 0x49($s0)
    ctx->pc = 0x1648a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1648a8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1648a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1648ac: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x1648acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x1648b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1648b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1648b4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1648b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1648b8: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x1648b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1648bc: 0x96020052  lhu         $v0, 0x52($s0)
    ctx->pc = 0x1648bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x1648c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1648c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1648c4: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x1648c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1648c8: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x1648c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1648cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1648ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1648d0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1648d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1648d4: 0x0  nop
    ctx->pc = 0x1648d4u;
    // NOP
    // 0x1648d8: 0x0  nop
    ctx->pc = 0x1648d8u;
    // NOP
    // 0x1648dc: 0x1012  mflo        $v0
    ctx->pc = 0x1648dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1648e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1648e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1648e4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1648e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1648e8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1648e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1648ec: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x1648ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x1648f0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1648f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1648f4: 0x9202004e  lbu         $v0, 0x4E($s0)
    ctx->pc = 0x1648f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x1648f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1648f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1648fc: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x1648fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x164900: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164904: 0x96020052  lhu         $v0, 0x52($s0)
    ctx->pc = 0x164904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x164908: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16490c: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x16490cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x164910: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x164910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x164914: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164918: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x164918u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16491c: 0x0  nop
    ctx->pc = 0x16491cu;
    // NOP
    // 0x164920: 0x0  nop
    ctx->pc = 0x164920u;
    // NOP
    // 0x164924: 0x1012  mflo        $v0
    ctx->pc = 0x164924u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x164928: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16492c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x16492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x164930: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x164930u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164934: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x164934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x164938: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x164938u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16493c: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x16493cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x164940: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x164940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164944: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x164944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x164948: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x164948u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16494c: 0x96020052  lhu         $v0, 0x52($s0)
    ctx->pc = 0x16494cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x164950: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164954: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x164954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x164958: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x164958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x16495c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16495cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164960: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x164960u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x164964: 0x0  nop
    ctx->pc = 0x164964u;
    // NOP
    // 0x164968: 0x0  nop
    ctx->pc = 0x164968u;
    // NOP
    // 0x16496c: 0x1012  mflo        $v0
    ctx->pc = 0x16496cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x164970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164974: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x164974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x164978: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x164978u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16497c: 0x0  nop
    ctx->pc = 0x16497cu;
    // NOP
label_164980:
    // 0x164980: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x164980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x164984: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x164984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x164988: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x164988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x16498c: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x16498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x164990: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x164990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x164994: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x164994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164998: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x164998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16499c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16499cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1649a0: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1649a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1649a4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1649a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1649a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1649ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1649acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1649b0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x1649b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1649b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1649b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1649b8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1649b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1649bc: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1649bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1649c0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1649c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1649c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1649c8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1649c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1649cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1649ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1649d0: 0x96020040  lhu         $v0, 0x40($s0)
    ctx->pc = 0x1649d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1649d4: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x1649d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1649d8: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x1649d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
    // 0x1649dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1649dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1649e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1649e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1649e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1649e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1649e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1649e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1649ec: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1649ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1649f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1649f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1649f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1649f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1649f8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1649f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1649fc: 0x96020040  lhu         $v0, 0x40($s0)
    ctx->pc = 0x1649fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x164a00: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a04: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x164a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x164a08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164a10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a14: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x164a14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164a1c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x164a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x164a20: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x164a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x164a24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164a28: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x164A28u;
    {
        const bool branch_taken_0x164a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a28) {
            ctx->pc = 0x164A7Cu;
            goto label_164a7c;
        }
    }
    ctx->pc = 0x164A30u;
    // 0x164a30: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x164a30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x164a34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a38: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x164a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x164a3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x164a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a40: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x164a44: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x164a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x164a48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x164a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a50: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x164a50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a54: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x164a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x164a58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a5c: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x164a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x164a60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x164a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x164a68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164a6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a70: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x164a70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164A74u;
    {
        const bool branch_taken_0x164a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a74) {
            ctx->pc = 0x164AA0u;
            goto label_164aa0;
        }
    }
    ctx->pc = 0x164A7Cu;
label_164a7c:
    // 0x164a7c: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x164a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x164a80: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x164a80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a84: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x164a84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x164a88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a8c: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x164a8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x164a90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164a98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a9c: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x164a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
label_164aa0:
    // 0x164aa0: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x164aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
    // 0x164aa4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164aa8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x164aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x164aac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x164aacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x164ab0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x164ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x164ab4: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x164ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x164ab8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x164ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x164abc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x164abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x164ac0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x164ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x164ac4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164ac8: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x164ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x164acc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x164accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x164ad0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x164AD0u;
    SET_GPR_U32(ctx, 31, 0x164AD8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x164AD0u, 0x164AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AD8u;
label_164ad8:
    // 0x164ad8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164adc: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x164adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x164ae0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x164ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x164ae4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x164AE4u;
    SET_GPR_U32(ctx, 31, 0x164AECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x164AE4u, 0x164AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AECu;
label_164aec:
    // 0x164aec: 0x0  nop
    ctx->pc = 0x164aecu;
    // NOP
label_164af0:
    // 0x164af0: 0x26100058  addiu       $s0, $s0, 0x58
    ctx->pc = 0x164af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x164af4: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x164af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x164af8: 0x1440ff34  bnez        $v0, . + 4 + (-0xCC << 2)
    ctx->pc = 0x164AF8u;
    {
        const bool branch_taken_0x164af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164af8) {
            ctx->pc = 0x1647CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1647cc;
        }
    }
    ctx->pc = 0x164B00u;
    // 0x164b00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x164b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x164b04: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x164b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x164b08: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x164b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x164b0c: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x164b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x164b10: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x164b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x164b14: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x164b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x164b18: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x164b18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x164b1c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164b20: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x164b24: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x164b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x164b28: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x164B28u;
    SET_GPR_U32(ctx, 31, 0x164B30u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x164B28u, 0x164B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B30u;
label_164b30:
    // 0x164b30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164b34: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x164b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x164b38: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x164B38u;
    SET_GPR_U32(ctx, 31, 0x164B40u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x164B38u, 0x164B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B40u;
label_164b40:
    // 0x164b40: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x164b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164b44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x164b44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164b48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x164b48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164b4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x164b4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164b50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164b50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164b64: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x164b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x164b68: 0x3e00008  jr          $ra
    ctx->pc = 0x164B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164B70u;
}
