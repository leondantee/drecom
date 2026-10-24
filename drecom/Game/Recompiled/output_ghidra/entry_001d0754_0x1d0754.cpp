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

// Function: entry_001d0754
// Address: 0x1d0754 - 0x1d07e0
void entry_001d0754_0x1d0754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0754_0x1d0754");
#endif

    switch (ctx->pc) {
        case 0x1d0764u: goto label_1d0764;
        case 0x1d0770u: goto label_1d0770;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d0790u: goto label_1d0790;
        case 0x1d07b0u: goto label_1d07b0;
        default: break;
    }

    ctx->pc = 0x1d0754u;

    // 0x1d0754: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0758: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d075c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1D075Cu;
    SET_GPR_U32(ctx, 31, 0x1D0764u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D075Cu, 0x1D0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0764u;
label_1d0764:
    // 0x1d0764: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0768: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1D0768u;
    SET_GPR_U32(ctx, 31, 0x1D0770u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D0768u, 0x1D0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0770u;
label_1d0770:
    // 0x1d0770: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0774: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0778: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0778u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d077c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1D077Cu;
    SET_GPR_U32(ctx, 31, 0x1D0784u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1D077Cu, 0x1D0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0784u;
label_1d0784:
    // 0x1d0784: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0788: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1D0788u;
    SET_GPR_U32(ctx, 31, 0x1D0790u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D0788u, 0x1D0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0790u;
label_1d0790:
    // 0x1d0790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0794: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1d0794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1d0798: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d0798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d079c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1d079cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d07a0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1D07A0u;
    {
        const bool branch_taken_0x1d07a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07a0) {
            ctx->pc = 0x1D0910u;
            return;
        }
    }
    ctx->pc = 0x1D07A8u;
    // 0x1d07a8: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1D07A8u;
    SET_GPR_U32(ctx, 31, 0x1D07B0u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1D07A8u, 0x1D07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D07B0u;
label_1d07b0:
    // 0x1d07b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D07B0u;
    {
        const bool branch_taken_0x1d07b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d07b0) {
            ctx->pc = 0x1D07E0u;
            return;
        }
    }
    ctx->pc = 0x1D07B8u;
    // 0x1d07b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d07bc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d07bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d07c0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1d07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1d07c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d07c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d07c8: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1D07C8u;
    {
        const bool branch_taken_0x1d07c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07c8) {
            ctx->pc = 0x1D08FCu;
            return;
        }
    }
    ctx->pc = 0x1D07D0u;
    // 0x1d07d0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1d07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1d07d4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d07d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d07d8: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D07D8u;
    {
        const bool branch_taken_0x1d07d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d07d8) {
            ctx->pc = 0x1D08FCu;
            return;
        }
    }
    ctx->pc = 0x1D07E0u;
}
