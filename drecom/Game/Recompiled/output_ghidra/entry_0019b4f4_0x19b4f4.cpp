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

// Function: entry_0019b4f4
// Address: 0x19b4f4 - 0x19b564
void entry_0019b4f4_0x19b4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b4f4_0x19b4f4");
#endif

    switch (ctx->pc) {
        case 0x19b51cu: goto label_19b51c;
        case 0x19b554u: goto label_19b554;
        default: break;
    }

    ctx->pc = 0x19b4f4u;

    // 0x19b4f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4f8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b4fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b500: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19b500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19b504: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B564u;
            return;
        }
    }
    ctx->pc = 0x19B50Cu;
    // 0x19b50c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b510: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x19b510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19b514: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19B514u;
    SET_GPR_U32(ctx, 31, 0x19B51Cu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19B514u, 0x19B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B51Cu;
label_19b51c:
    // 0x19b51c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b520: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x19b520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19b524: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x19b524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x19b528: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19b52c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b530: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x19b530u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19b534: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x19b538: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19b538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19b53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b540: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x19b540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x19b544: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19b544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x19b548: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19b54c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19B54Cu;
    SET_GPR_U32(ctx, 31, 0x19B554u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19B54Cu, 0x19B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B554u;
label_19b554:
    // 0x19b554: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x19b558: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19b55c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19B55Cu;
    SET_GPR_U32(ctx, 31, 0x19B564u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19B55Cu, 0x19B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B564u;
}
