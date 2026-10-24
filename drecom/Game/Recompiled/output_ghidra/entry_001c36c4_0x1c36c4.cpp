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

// Function: entry_001c36c4
// Address: 0x1c36c4 - 0x1c373c
void entry_001c36c4_0x1c36c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c36c4_0x1c36c4");
#endif

    switch (ctx->pc) {
        case 0x1c36d4u: goto label_1c36d4;
        case 0x1c36e0u: goto label_1c36e0;
        case 0x1c36f4u: goto label_1c36f4;
        case 0x1c3700u: goto label_1c3700;
        default: break;
    }

    ctx->pc = 0x1c36c4u;

    // 0x1c36c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c36c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c36c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c36cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C36CCu;
    SET_GPR_U32(ctx, 31, 0x1C36D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C36CCu, 0x1C36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36D4u;
label_1c36d4:
    // 0x1c36d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c36d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c36d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C36D8u;
    SET_GPR_U32(ctx, 31, 0x1C36E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C36D8u, 0x1C36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36E0u;
label_1c36e0:
    // 0x1c36e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c36e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c36e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c36e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c36e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c36ec: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C36ECu;
    SET_GPR_U32(ctx, 31, 0x1C36F4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C36ECu, 0x1C36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36F4u;
label_1c36f4:
    // 0x1c36f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c36f8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C36F8u;
    SET_GPR_U32(ctx, 31, 0x1C3700u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C36F8u, 0x1C3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3700u;
label_1c3700:
    // 0x1c3700: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c3700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3704: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c3704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c3708: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3708u;
    {
        const bool branch_taken_0x1c3708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3708) {
            ctx->pc = 0x1C373Cu;
            return;
        }
    }
    ctx->pc = 0x1C3710u;
    // 0x1c3710: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3714: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c3718: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c3718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c371c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c371cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c3720: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3720u;
    {
        const bool branch_taken_0x1c3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3720) {
            ctx->pc = 0x1C373Cu;
            return;
        }
    }
    ctx->pc = 0x1C3728u;
    // 0x1c3728: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c372c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c3730: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3734: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c3734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c3738: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c3738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c373cu;
}
