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

// Function: entry_001425e8
// Address: 0x1425e8 - 0x142694
void entry_001425e8_0x1425e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001425e8_0x1425e8");
#endif

    switch (ctx->pc) {
        case 0x1425f4u: goto label_1425f4;
        default: break;
    }

    ctx->pc = 0x1425e8u;

    // 0x1425e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1425e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1425ec: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1425ECu;
    SET_GPR_U32(ctx, 31, 0x1425F4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1425ECu, 0x1425F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425F4u;
label_1425f4:
    // 0x1425f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1425f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1425f8: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1425F8u;
    {
        const bool branch_taken_0x1425f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425f8) {
            ctx->pc = 0x1427F8u;
            return;
        }
    }
    ctx->pc = 0x142600u;
    // 0x142600: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142604: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x142604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142608: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x142608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x14260c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x142610: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x142610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142614: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142618: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14261c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142620: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x142620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142624: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x142624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x142628: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14262c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x14262cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142634: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x142634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142638: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x142638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14263c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142640: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142644: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142648: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x142648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x14264c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x14264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x142650: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142654: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142658: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14265c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x14265cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142660: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x142660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x142664: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142668: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14266c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142670: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x142670u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142674: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x142674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x142678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14267c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x14267cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142680: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142688: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142688u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x14268c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x14268Cu;
    {
        const bool branch_taken_0x14268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14268c) {
            ctx->pc = 0x1427F8u;
            return;
        }
    }
    ctx->pc = 0x142694u;
}
