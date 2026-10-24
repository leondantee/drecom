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

// Function: entry_0013fba0
// Address: 0x13fba0 - 0x13fbe8
void entry_0013fba0_0x13fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fba0_0x13fba0");
#endif

    switch (ctx->pc) {
        case 0x13fbb0u: goto label_13fbb0;
        case 0x13fbe0u: goto label_13fbe0;
        default: break;
    }

    ctx->pc = 0x13fba0u;

    // 0x13fba0: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fba4: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fba8: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FBA8u;
    SET_GPR_U32(ctx, 31, 0x13FBB0u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FBA8u, 0x13FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBB0u;
label_13fbb0:
    // 0x13fbb0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fbb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fbb4: 0x32030082  andi        $v1, $s0, 0x82
    ctx->pc = 0x13fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)130);
    // 0x13fbb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13FBB8u;
    {
        const bool branch_taken_0x13fbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fbb8) {
            ctx->pc = 0x13FBE8u;
            return;
        }
    }
    ctx->pc = 0x13FBC0u;
    // 0x13fbc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13fbc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fbc8: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fbcc: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fbd0: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fbd4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fbd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fbd8: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FBD8u;
    SET_GPR_U32(ctx, 31, 0x13FBE0u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FBD8u, 0x13FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBE0u;
label_13fbe0:
    // 0x13fbe0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13fbe0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fbe4: 0x0  nop
    ctx->pc = 0x13fbe4u;
    // NOP
    ctx->pc = 0x13fbe8u;
}
