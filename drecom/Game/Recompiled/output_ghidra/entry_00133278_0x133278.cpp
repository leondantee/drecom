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

// Function: entry_00133278
// Address: 0x133278 - 0x1332a4
void entry_00133278_0x133278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133278_0x133278");
#endif

    switch (ctx->pc) {
        case 0x133288u: goto label_133288;
        case 0x13329cu: goto label_13329c;
        default: break;
    }

    ctx->pc = 0x133278u;

    // 0x133278: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x133278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x13327c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x13327cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x133280: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x133280u;
    SET_GPR_U32(ctx, 31, 0x133288u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x133280u, 0x133288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133288u;
label_133288:
    // 0x133288: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x133288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x13328c: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x13328cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x133290: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x133290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x133294: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x133294u;
    SET_GPR_U32(ctx, 31, 0x13329Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x133294u, 0x13329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13329Cu;
label_13329c:
    // 0x13329c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x13329Cu;
    {
        const bool branch_taken_0x13329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13329c) {
            ctx->pc = 0x1334B4u;
            return;
        }
    }
    ctx->pc = 0x1332A4u;
}
