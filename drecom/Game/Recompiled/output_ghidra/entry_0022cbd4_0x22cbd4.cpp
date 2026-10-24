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

// Function: entry_0022cbd4
// Address: 0x22cbd4 - 0x22cc20
void entry_0022cbd4_0x22cbd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cbd4_0x22cbd4");
#endif

    switch (ctx->pc) {
        case 0x22cbdcu: goto label_22cbdc;
        case 0x22cc14u: goto label_22cc14;
        default: break;
    }

    ctx->pc = 0x22cbd4u;

    // 0x22cbd4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22CBD4u;
    SET_GPR_U32(ctx, 31, 0x22CBDCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22CBD4u, 0x22CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBDCu;
label_22cbdc:
    // 0x22cbdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cbdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22cbe0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22cbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22cbe4: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x22cbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22cbe8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x22CBE8u;
    {
        const bool branch_taken_0x22cbe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cbe8) {
            ctx->pc = 0x22CC20u;
            return;
        }
    }
    ctx->pc = 0x22CBF0u;
    // 0x22cbf0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22cbf4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x22cbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22cbf8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x22cbf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cbfc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc00: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22cc04: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22cc08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22cc08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22cc0c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22CC0Cu;
    SET_GPR_U32(ctx, 31, 0x22CC14u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22CC0Cu, 0x22CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC14u;
label_22cc14:
    // 0x22cc14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cc14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22cc18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22CC18u;
    {
        const bool branch_taken_0x22cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc18) {
            ctx->pc = 0x22CC48u;
            return;
        }
    }
    ctx->pc = 0x22CC20u;
}
