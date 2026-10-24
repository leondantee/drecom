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

// Function: entry_001c2804
// Address: 0x1c2804 - 0x1c287c
void entry_001c2804_0x1c2804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2804_0x1c2804");
#endif

    switch (ctx->pc) {
        case 0x1c2814u: goto label_1c2814;
        case 0x1c2820u: goto label_1c2820;
        case 0x1c2834u: goto label_1c2834;
        case 0x1c2840u: goto label_1c2840;
        default: break;
    }

    ctx->pc = 0x1c2804u;

    // 0x1c2804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c280c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C280Cu;
    SET_GPR_U32(ctx, 31, 0x1C2814u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C280Cu, 0x1C2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2814u;
label_1c2814:
    // 0x1c2814: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2818: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2818u;
    SET_GPR_U32(ctx, 31, 0x1C2820u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2818u, 0x1C2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2820u;
label_1c2820:
    // 0x1c2820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2824: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2828: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c282c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C282Cu;
    SET_GPR_U32(ctx, 31, 0x1C2834u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C282Cu, 0x1C2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2834u;
label_1c2834:
    // 0x1c2834: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c2834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2838: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2838u;
    SET_GPR_U32(ctx, 31, 0x1C2840u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2838u, 0x1C2840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2840u;
label_1c2840:
    // 0x1c2840: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c2840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2844: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c2844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c2848: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2848u;
    {
        const bool branch_taken_0x1c2848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2848) {
            ctx->pc = 0x1C287Cu;
            return;
        }
    }
    ctx->pc = 0x1C2850u;
    // 0x1c2850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2854: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2858: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c2858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c285c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c2860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2860u;
    {
        const bool branch_taken_0x1c2860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2860) {
            ctx->pc = 0x1C287Cu;
            return;
        }
    }
    ctx->pc = 0x1C2868u;
    // 0x1c2868: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c286c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c2870: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2874: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2878: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c2878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c287cu;
}
