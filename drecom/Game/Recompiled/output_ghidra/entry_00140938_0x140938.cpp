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

// Function: entry_00140938
// Address: 0x140938 - 0x140994
void entry_00140938_0x140938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140938_0x140938");
#endif

    switch (ctx->pc) {
        case 0x140940u: goto label_140940;
        case 0x140950u: goto label_140950;
        case 0x140958u: goto label_140958;
        default: break;
    }

    ctx->pc = 0x140938u;

    // 0x140938: 0xc04eddc  jal         func_13B770
    ctx->pc = 0x140938u;
    SET_GPR_U32(ctx, 31, 0x140940u);
    ctx->pc = 0x13B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B770u, 0x140938u, 0x140940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140940u;
label_140940:
    // 0x140940: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x140940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x140944: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x140944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140948: 0xc06adac  jal         func_1AB6B0
    ctx->pc = 0x140948u;
    SET_GPR_U32(ctx, 31, 0x140950u);
    ctx->pc = 0x1AB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB6B0u, 0x140948u, 0x140950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140950u;
label_140950:
    // 0x140950: 0xc06aea8  jal         func_1ABAA0
    ctx->pc = 0x140950u;
    SET_GPR_U32(ctx, 31, 0x140958u);
    ctx->pc = 0x1ABAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAA0u, 0x140950u, 0x140958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140958u;
label_140958:
    // 0x140958: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x14095c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x14095cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x140960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140960u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x140964: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140968: 0xac228ed0  sw          $v0, -0x7130($at)
    ctx->pc = 0x140968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8ED0u, _value); } while (0);
    // 0x14096c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14096cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140970: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140974: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x140974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x140978: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14097c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14097Cu;
    {
        const bool branch_taken_0x14097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14097c) {
            ctx->pc = 0x140994u;
            return;
        }
    }
    ctx->pc = 0x140984u;
    // 0x140984: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x140984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x140988: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x140988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x14098c: 0xc057a00  jal         func_15E800
    ctx->pc = 0x14098Cu;
    SET_GPR_U32(ctx, 31, 0x140994u);
    ctx->pc = 0x15E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E800u, 0x14098Cu, 0x140994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140994u;
}
