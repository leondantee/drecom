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

// Function: entry_002927b4
// Address: 0x2927b4 - 0x2927f8
void entry_002927b4_0x2927b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002927b4_0x2927b4");
#endif

    switch (ctx->pc) {
        case 0x2927c4u: goto label_2927c4;
        case 0x2927d0u: goto label_2927d0;
        case 0x2927ecu: goto label_2927ec;
        default: break;
    }

    ctx->pc = 0x2927b4u;

    // 0x2927b4: 0x240400a3  addiu       $a0, $zero, 0xA3
    ctx->pc = 0x2927b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2927b8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2927b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2927bc: 0xc0a4a44  jal         func_292910
    ctx->pc = 0x2927BCu;
    SET_GPR_U32(ctx, 31, 0x2927C4u);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x2927BCu, 0x2927C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927C4u;
label_2927c4:
    // 0x2927c4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2927c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2927c8: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x2927C8u;
    SET_GPR_U32(ctx, 31, 0x2927D0u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x2927C8u, 0x2927D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927D0u;
label_2927d0:
    // 0x2927d0: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x2927d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x2927d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2927D4u;
    {
        const bool branch_taken_0x2927d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2927d4) {
            ctx->pc = 0x2927F8u;
            return;
        }
    }
    ctx->pc = 0x2927DCu;
    // 0x2927dc: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x2927dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x2927e0: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x2927e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x2927e4: 0xc0a4a44  jal         func_292910
    ctx->pc = 0x2927E4u;
    SET_GPR_U32(ctx, 31, 0x2927ECu);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x2927E4u, 0x2927ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927ECu;
label_2927ec:
    // 0x2927ec: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2927ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2927f0: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x2927F0u;
    SET_GPR_U32(ctx, 31, 0x2927F8u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x2927F0u, 0x2927F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927F8u;
}
