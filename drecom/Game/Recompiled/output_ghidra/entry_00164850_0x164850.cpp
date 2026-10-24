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

// Function: entry_00164850
// Address: 0x164850 - 0x164980
void entry_00164850_0x164850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164850_0x164850");
#endif

    ctx->pc = 0x164850u;

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
    ctx->pc = 0x164980u;
}
