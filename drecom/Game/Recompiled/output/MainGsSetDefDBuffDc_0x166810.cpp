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

// Function: MainGsSetDefDBuffDc
// Address: 0x166810 - 0x166b50
void MainGsSetDefDBuffDc_0x166810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MainGsSetDefDBuffDc_0x166810");
#endif

    switch (ctx->pc) {
        case 0x16685cu: goto label_16685c;
        case 0x166870u: goto label_166870;
        case 0x166888u: goto label_166888;
        case 0x166a18u: goto label_166a18;
        case 0x166a30u: goto label_166a30;
        case 0x166a48u: goto label_166a48;
        case 0x166a60u: goto label_166a60;
        case 0x166a78u: goto label_166a78;
        case 0x166a90u: goto label_166a90;
        case 0x166aa8u: goto label_166aa8;
        case 0x166ac0u: goto label_166ac0;
        case 0x166ad8u: goto label_166ad8;
        case 0x166af0u: goto label_166af0;
        case 0x166b08u: goto label_166b08;
        case 0x166b20u: goto label_166b20;
        default: break;
    }

    ctx->pc = 0x166810u;

    // 0x166810: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x166810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
    // 0x166814: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x166814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x166818: 0xafa40340  sw          $a0, 0x340($sp)
    ctx->pc = 0x166818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 4));
    // 0x16681c: 0xa7a50348  sh          $a1, 0x348($sp)
    ctx->pc = 0x16681cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 840), (uint16_t)GPR_U32(ctx, 5));
    // 0x166820: 0xa7a60350  sh          $a2, 0x350($sp)
    ctx->pc = 0x166820u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 848), (uint16_t)GPR_U32(ctx, 6));
    // 0x166824: 0xa7a70358  sh          $a3, 0x358($sp)
    ctx->pc = 0x166824u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 856), (uint16_t)GPR_U32(ctx, 7));
    // 0x166828: 0xa7a80360  sh          $t0, 0x360($sp)
    ctx->pc = 0x166828u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 864), (uint16_t)GPR_U32(ctx, 8));
    // 0x16682c: 0xa7a90368  sh          $t1, 0x368($sp)
    ctx->pc = 0x16682cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 872), (uint16_t)GPR_U32(ctx, 9));
    // 0x166830: 0xa7aa0370  sh          $t2, 0x370($sp)
    ctx->pc = 0x166830u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 880), (uint16_t)GPR_U32(ctx, 10));
    // 0x166834: 0xafab0378  sw          $t3, 0x378($sp)
    ctx->pc = 0x166834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 888), GPR_U32(ctx, 11));
    // 0x166838: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x166838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16683c: 0x87a50348  lh          $a1, 0x348($sp)
    ctx->pc = 0x16683cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x166840: 0x87a60350  lh          $a2, 0x350($sp)
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x166844: 0x87a70358  lh          $a3, 0x358($sp)
    ctx->pc = 0x166844u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x166848: 0x87a80360  lh          $t0, 0x360($sp)
    ctx->pc = 0x166848u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x16684c: 0x87a90368  lh          $t1, 0x368($sp)
    ctx->pc = 0x16684cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x166850: 0x87aa0370  lh          $t2, 0x370($sp)
    ctx->pc = 0x166850u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x166854: 0xc0406d2  jal         func_101B48
    ctx->pc = 0x166854u;
    SET_GPR_U32(ctx, 31, 0x16685Cu);
    ctx->pc = 0x101B48u;
    {
        ctx->pc = 0x16685Cu;
        ps2_stubs::sceGsSetDefDBuffDc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16685Cu) { return; }
    ctx->pc = 0x16685Cu;
label_16685c:
    // 0x16685c: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x16685cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166860: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x166860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x166864: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x166864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x166868: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166868u;
    SET_GPR_U32(ctx, 31, 0x166870u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166870u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166870u) { return; }
    ctx->pc = 0x166870u;
label_166870:
    // 0x166870: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166874: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x166874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x166878: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x166878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x16687c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16687cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x166880: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166880u;
    SET_GPR_U32(ctx, 31, 0x166888u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166888u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166888u) { return; }
    ctx->pc = 0x166888u;
label_166888:
    // 0x166888: 0x8fa20378  lw          $v0, 0x378($sp)
    ctx->pc = 0x166888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
    // 0x16688c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16688Cu;
    {
        const bool branch_taken_0x16688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16688c) {
            ctx->pc = 0x16691Cu;
            goto label_16691c;
        }
    }
    ctx->pc = 0x166894u;
    // 0x166894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166898: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x166898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x16689c: 0x90a40038  lbu         $a0, 0x38($a1)
    ctx->pc = 0x16689cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1668a0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1668a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1668a4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1668a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1668a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1668a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1668ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1668acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1668b0: 0xa0a20038  sb          $v0, 0x38($a1)
    ctx->pc = 0x1668b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1668b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1668b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1668b8: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1668b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1668bc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1668bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1668c0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1668c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1668c4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1668c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1668c8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1668c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1668cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1668ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1668d0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1668d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1668d4: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1668d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1668d8: 0x90a40038  lbu         $a0, 0x38($a1)
    ctx->pc = 0x1668d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1668dc: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1668dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1668e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1668e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1668e4: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1668e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1668e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1668e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1668ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1668ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1668f0: 0xa0a20038  sb          $v0, 0x38($a1)
    ctx->pc = 0x1668f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1668f4: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1668f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1668f8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1668f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1668fc: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1668fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166900: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x166900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x166904: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166908: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x166908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x16690c: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x16690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x166910: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x166914: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x166914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166918: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x166918u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_16691c:
    // 0x16691c: 0x240310a0  addiu       $v1, $zero, 0x10A0
    ctx->pc = 0x16691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4256));
    // 0x166920: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166924: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x166924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x166928: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166928u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16692c: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x16692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166930: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x166930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x166934: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166934u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x166938: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x166938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x16693c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x16693cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166940: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166944: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x166944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x166948: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166948u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x16694c: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x16694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166950: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x166950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x166954: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166954u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x166958: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x166958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x16695c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x16695Cu;
    {
        const bool branch_taken_0x16695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16695c) {
            ctx->pc = 0x166A00u;
            goto label_166a00;
        }
    }
    ctx->pc = 0x166964u;
    // 0x166964: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x166964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166968: 0x90a40040  lbu         $a0, 0x40($a1)
    ctx->pc = 0x166968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x16696c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x16696cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x166970: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x166970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x166974: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x166974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x166978: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x166978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x16697c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x166980: 0xa0a20040  sb          $v0, 0x40($a1)
    ctx->pc = 0x166980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x166984: 0x217bc  dsll32      $v0, $v0, 30
    ctx->pc = 0x166984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 30));
    // 0x166988: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x166988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x16698c: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x16698cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166990: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x166990u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x166994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166998: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x166998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16699c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x16699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1669a0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1669a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1669a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1669a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1669a8: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1669a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1669ac: 0x240201bf  addiu       $v0, $zero, 0x1BF
    ctx->pc = 0x1669acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
    // 0x1669b0: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1669b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1669b4: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1669b8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1669b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1669bc: 0x21b00  sll         $v1, $v0, 12
    ctx->pc = 0x1669bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1669c0: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1669c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1669c4: 0x34420fff  ori         $v0, $v0, 0xFFF
    ctx->pc = 0x1669c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
    // 0x1669c8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1669c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1669cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1669ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1669d0: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x1669d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x1669d4: 0x2127c  dsll32      $v0, $v0, 9
    ctx->pc = 0x1669d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 9));
    // 0x1669d8: 0x2157e  dsrl32      $v0, $v0, 21
    ctx->pc = 0x1669d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x1669dc: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1669dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1669e0: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x1669e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1669e4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1669e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1669e8: 0x21b00  sll         $v1, $v0, 12
    ctx->pc = 0x1669e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1669ec: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1669ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1669f0: 0x34420fff  ori         $v0, $v0, 0xFFF
    ctx->pc = 0x1669f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
    // 0x1669f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1669f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1669f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1669f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1669fc: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1669fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_166a00:
    // 0x166a00: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a04: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x166a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x166a08: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x166a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x166a0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x166a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166a10: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A10u;
    SET_GPR_U32(ctx, 31, 0x166A18u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A18u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A18u) { return; }
    ctx->pc = 0x166A18u;
label_166a18:
    // 0x166a18: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a1c: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x166a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x166a20: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x166a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x166a24: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166a28: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A28u;
    SET_GPR_U32(ctx, 31, 0x166A30u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A30u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A30u) { return; }
    ctx->pc = 0x166A30u;
label_166a30:
    // 0x166a30: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a34: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x166a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x166a38: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x166a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x166a3c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166a40: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A40u;
    SET_GPR_U32(ctx, 31, 0x166A48u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A48u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A48u) { return; }
    ctx->pc = 0x166A48u;
label_166a48:
    // 0x166a48: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a4c: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x166a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x166a50: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x166a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x166a54: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x166a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x166a58: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A58u;
    SET_GPR_U32(ctx, 31, 0x166A60u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A60u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A60u) { return; }
    ctx->pc = 0x166A60u;
label_166a60:
    // 0x166a60: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a64: 0x244401e0  addiu       $a0, $v0, 0x1E0
    ctx->pc = 0x166a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x166a68: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x166a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x166a6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x166a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166a70: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A70u;
    SET_GPR_U32(ctx, 31, 0x166A78u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A78u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A78u) { return; }
    ctx->pc = 0x166A78u;
label_166a78:
    // 0x166a78: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a7c: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x166a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x166a80: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x166a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x166a84: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166a88: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A88u;
    SET_GPR_U32(ctx, 31, 0x166A90u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A90u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A90u) { return; }
    ctx->pc = 0x166A90u;
label_166a90:
    // 0x166a90: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a94: 0x24440270  addiu       $a0, $v0, 0x270
    ctx->pc = 0x166a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x166a98: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x166a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x166a9c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166aa0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166AA0u;
    SET_GPR_U32(ctx, 31, 0x166AA8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166AA8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166AA8u) { return; }
    ctx->pc = 0x166AA8u;
label_166aa8:
    // 0x166aa8: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166aac: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x166aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x166ab0: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x166ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x166ab4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x166ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x166ab8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166AB8u;
    SET_GPR_U32(ctx, 31, 0x166AC0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166AC0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166AC0u) { return; }
    ctx->pc = 0x166AC0u;
label_166ac0:
    // 0x166ac0: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166ac4: 0x24440350  addiu       $a0, $v0, 0x350
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x166ac8: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x166ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x166acc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x166accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166ad0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166AD0u;
    SET_GPR_U32(ctx, 31, 0x166AD8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166AD8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166AD8u) { return; }
    ctx->pc = 0x166AD8u;
label_166ad8:
    // 0x166ad8: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166adc: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x166adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x166ae0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x166ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x166ae4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166ae8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166AE8u;
    SET_GPR_U32(ctx, 31, 0x166AF0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166AF0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166AF0u) { return; }
    ctx->pc = 0x166AF0u;
label_166af0:
    // 0x166af0: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166af4: 0x244403e0  addiu       $a0, $v0, 0x3E0
    ctx->pc = 0x166af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x166af8: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x166af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x166afc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166b00: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166B00u;
    SET_GPR_U32(ctx, 31, 0x166B08u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166B08u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166B08u) { return; }
    ctx->pc = 0x166B08u;
label_166b08:
    // 0x166b08: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166b0c: 0x24440460  addiu       $a0, $v0, 0x460
    ctx->pc = 0x166b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
    // 0x166b10: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x166b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x166b14: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x166b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x166b18: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166B18u;
    SET_GPR_U32(ctx, 31, 0x166B20u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166B20u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166B20u) { return; }
    ctx->pc = 0x166B20u;
label_166b20:
    // 0x166b20: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x166b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x166b24: 0x346400a0  ori         $a0, $v1, 0xA0
    ctx->pc = 0x166b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x166b28: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166b2c: 0x246303e0  addiu       $v1, $v1, 0x3E0
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 992));
    // 0x166b30: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x166b30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x166b34: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x166b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166b38: 0x24630360  addiu       $v1, $v1, 0x360
    ctx->pc = 0x166b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x166b3c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x166b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x166b40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x166b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b44: 0x27bd0380  addiu       $sp, $sp, 0x380
    ctx->pc = 0x166b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x166b48: 0x3e00008  jr          $ra
    ctx->pc = 0x166B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166B50u;
}
