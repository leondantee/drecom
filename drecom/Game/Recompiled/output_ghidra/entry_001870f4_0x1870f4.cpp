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

// Function: entry_001870f4
// Address: 0x1870f4 - 0x187150
void entry_001870f4_0x1870f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001870f4_0x1870f4");
#endif

    switch (ctx->pc) {
        case 0x187114u: goto label_187114;
        case 0x18712cu: goto label_18712c;
        case 0x187144u: goto label_187144;
        default: break;
    }

    ctx->pc = 0x1870f4u;

    // 0x1870f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1870f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1870f8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x1870f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x1870fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1870fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187100: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x187104: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x187108: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x187108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x18710c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x18710Cu;
    SET_GPR_U32(ctx, 31, 0x187114u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x18710Cu, 0x187114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187114u;
label_187114:
    // 0x187114: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x187114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x187118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x187118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18711c: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x187120: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187124: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x187124u;
    SET_GPR_U32(ctx, 31, 0x18712Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x187124u, 0x18712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18712Cu;
label_18712c:
    // 0x18712c: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x18712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x187130: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x187134: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x187134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x187138: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x187138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18713c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x18713Cu;
    SET_GPR_U32(ctx, 31, 0x187144u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x18713Cu, 0x187144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187144u;
label_187144:
    // 0x187144: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x187144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x187148: 0xc056518  jal         func_159460
    ctx->pc = 0x187148u;
    SET_GPR_U32(ctx, 31, 0x187150u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x187148u, 0x187150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187150u;
}
