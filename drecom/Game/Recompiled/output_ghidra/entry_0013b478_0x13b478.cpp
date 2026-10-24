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

// Function: entry_0013b478
// Address: 0x13b478 - 0x13b4c8
void entry_0013b478_0x13b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b478_0x13b478");
#endif

    switch (ctx->pc) {
        case 0x13b488u: goto label_13b488;
        case 0x13b494u: goto label_13b494;
        case 0x13b4a8u: goto label_13b4a8;
        case 0x13b4b4u: goto label_13b4b4;
        default: break;
    }

    ctx->pc = 0x13b478u;

    // 0x13b478: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b47c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b47cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b480: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13B480u;
    SET_GPR_U32(ctx, 31, 0x13B488u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13B480u, 0x13B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B488u;
label_13b488:
    // 0x13b488: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b48c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13B48Cu;
    SET_GPR_U32(ctx, 31, 0x13B494u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13B48Cu, 0x13B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B494u;
label_13b494:
    // 0x13b494: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13b494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13b498: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b49c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b4a0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13B4A0u;
    SET_GPR_U32(ctx, 31, 0x13B4A8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13B4A0u, 0x13B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B4A8u;
label_13b4a8:
    // 0x13b4a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13b4a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b4ac: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x13B4ACu;
    SET_GPR_U32(ctx, 31, 0x13B4B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13B4ACu, 0x13B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B4B4u;
label_13b4b4:
    // 0x13b4b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b4b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13b4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x13b4bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B4BCu;
    {
        const bool branch_taken_0x13b4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b4bc) {
            ctx->pc = 0x13B4DCu;
            return;
        }
    }
    ctx->pc = 0x13B4C4u;
    // 0x13b4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x13b4c8u;
}
