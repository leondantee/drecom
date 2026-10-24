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

// Function: entry_00165a58
// Address: 0x165a58 - 0x165ac8
void entry_00165a58_0x165a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a58_0x165a58");
#endif

    switch (ctx->pc) {
        case 0x165a60u: goto label_165a60;
        case 0x165a78u: goto label_165a78;
        case 0x165ac4u: goto label_165ac4;
        default: break;
    }

    ctx->pc = 0x165a58u;

    // 0x165a58: 0xc059330  jal         func_164CC0
    ctx->pc = 0x165A58u;
    SET_GPR_U32(ctx, 31, 0x165A60u);
    ctx->pc = 0x164CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164CC0u, 0x165A58u, 0x165A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A60u;
label_165a60:
    // 0x165a60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a64: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x165a64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x165a68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a6c: 0xac221a90  sw          $v0, 0x1A90($at)
    ctx->pc = 0x165a6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A90u, _value); } while (0);
    // 0x165a70: 0xc067434  jal         func_19D0D0
    ctx->pc = 0x165A70u;
    SET_GPR_U32(ctx, 31, 0x165A78u);
    ctx->pc = 0x19D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D0D0u, 0x165A70u, 0x165A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A78u;
label_165a78:
    // 0x165a78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a7c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x165a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x165a80: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x165a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x165a84: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x165A84u;
    {
        const bool branch_taken_0x165a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165a84) {
            ctx->pc = 0x165AC8u;
            return;
        }
    }
    ctx->pc = 0x165A8Cu;
    // 0x165a8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165a90: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165a90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165a94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x165a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x165a98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165a9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x165A9Cu;
    {
        const bool branch_taken_0x165a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a9c) {
            ctx->pc = 0x165AC8u;
            return;
        }
    }
    ctx->pc = 0x165AA4u;
    // 0x165aa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165aa8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x165aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x165aac: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x165aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x165ab0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165AB4u;
    {
        const bool branch_taken_0x165ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ab4) {
            ctx->pc = 0x165AC8u;
            return;
        }
    }
    ctx->pc = 0x165ABCu;
    // 0x165abc: 0xc0557f8  jal         func_155FE0
    ctx->pc = 0x165ABCu;
    SET_GPR_U32(ctx, 31, 0x165AC4u);
    ctx->pc = 0x155FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FE0u, 0x165ABCu, 0x165AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165AC4u;
label_165ac4:
    // 0x165ac4: 0x0  nop
    ctx->pc = 0x165ac4u;
    // NOP
    ctx->pc = 0x165ac8u;
}
