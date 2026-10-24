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

// Function: entry_00140c10
// Address: 0x140c10 - 0x140c84
void entry_00140c10_0x140c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c10_0x140c10");
#endif

    switch (ctx->pc) {
        case 0x140c18u: goto label_140c18;
        case 0x140c5cu: goto label_140c5c;
        case 0x140c7cu: goto label_140c7c;
        default: break;
    }

    ctx->pc = 0x140c10u;

    // 0x140c10: 0xc050780  jal         func_141E00
    ctx->pc = 0x140C10u;
    SET_GPR_U32(ctx, 31, 0x140C18u);
    ctx->pc = 0x141E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E00u, 0x140C10u, 0x140C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C18u;
label_140c18:
    // 0x140c18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140c1c: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x140c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x140c20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x140c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x140c24: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x140c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x140c28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140c2c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x140c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x140c30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140c30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x140c34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140c38: 0xac228ee8  sw          $v0, -0x7118($at)
    ctx->pc = 0x140c38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EE8u, _value); } while (0);
    // 0x140c3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140c40: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140c40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140c44: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x140c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x140c48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140c4c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x140C4Cu;
    {
        const bool branch_taken_0x140c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140c4c) {
            ctx->pc = 0x140C8Cu;
            return;
        }
    }
    ctx->pc = 0x140C54u;
    // 0x140c54: 0xc061028  jal         func_1840A0
    ctx->pc = 0x140C54u;
    SET_GPR_U32(ctx, 31, 0x140C5Cu);
    ctx->pc = 0x1840A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1840A0u, 0x140C54u, 0x140C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C5Cu;
label_140c5c:
    // 0x140c5c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x140C5Cu;
    {
        const bool branch_taken_0x140c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140c5c) {
            ctx->pc = 0x140C8Cu;
            return;
        }
    }
    ctx->pc = 0x140C64u;
    // 0x140c64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x140c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x140c68: 0x902295a0  lbu         $v0, -0x6A60($at)
    ctx->pc = 0x140c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6195A0u));
    // 0x140c6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140C6Cu;
    {
        const bool branch_taken_0x140c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c6c) {
            ctx->pc = 0x140C84u;
            return;
        }
    }
    ctx->pc = 0x140C74u;
    // 0x140c74: 0xc0a1148  jal         func_284520
    ctx->pc = 0x140C74u;
    SET_GPR_U32(ctx, 31, 0x140C7Cu);
    ctx->pc = 0x284520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284520u, 0x140C74u, 0x140C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C7Cu;
label_140c7c:
    // 0x140c7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140C7Cu;
    {
        const bool branch_taken_0x140c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c7c) {
            ctx->pc = 0x140C8Cu;
            return;
        }
    }
    ctx->pc = 0x140C84u;
}
