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

// Function: entry_0018ab18
// Address: 0x18ab18 - 0x18ab7c
void entry_0018ab18_0x18ab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab18_0x18ab18");
#endif

    switch (ctx->pc) {
        case 0x18ab38u: goto label_18ab38;
        case 0x18ab68u: goto label_18ab68;
        default: break;
    }

    ctx->pc = 0x18ab18u;

    // 0x18ab18: 0x1a00fffa  blez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AB18u;
    {
        const bool branch_taken_0x18ab18 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x18ab18) {
            ctx->pc = 0x18AB04u;
            return;
        }
    }
    ctx->pc = 0x18AB20u;
    // 0x18ab20: 0x24040099  addiu       $a0, $zero, 0x99
    ctx->pc = 0x18ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x18ab24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab28: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ab30: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18AB30u;
    SET_GPR_U32(ctx, 31, 0x18AB38u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18AB30u, 0x18AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB38u;
label_18ab38:
    // 0x18ab38: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18ab38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18ab3c: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x18AB3Cu;
    {
        const bool branch_taken_0x18ab3c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x18ab3c) {
            ctx->pc = 0x18AB7Cu;
            return;
        }
    }
    ctx->pc = 0x18AB44u;
    // 0x18ab44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab48: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18ab4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18ab50: 0xac22a608  sw          $v0, -0x59F8($at)
    ctx->pc = 0x18ab50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A608u, _value); } while (0);
    // 0x18ab54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab58: 0x8c24ac50  lw          $a0, -0x53B0($at)
    ctx->pc = 0x18ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab5c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x18ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18ab60: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x18AB60u;
    SET_GPR_U32(ctx, 31, 0x18AB68u);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x18AB60u, 0x18AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB68u;
label_18ab68:
    // 0x18ab68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab6c: 0x8c22ac50  lw          $v0, -0x53B0($at)
    ctx->pc = 0x18ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18ab70: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18ab74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18ab78: 0xac22ac50  sw          $v0, -0x53B0($at)
    ctx->pc = 0x18ab78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    ctx->pc = 0x18ab7cu;
}
