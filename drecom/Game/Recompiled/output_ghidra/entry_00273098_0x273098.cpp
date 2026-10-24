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

// Function: entry_00273098
// Address: 0x273098 - 0x2730c8
void entry_00273098_0x273098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273098_0x273098");
#endif

    switch (ctx->pc) {
        case 0x2730c4u: goto label_2730c4;
        default: break;
    }

    ctx->pc = 0x273098u;

    // 0x273098: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x273098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x27309c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27309cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2730a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2730a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2730a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2730A4u;
    {
        const bool branch_taken_0x2730a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2730a4) {
            ctx->pc = 0x2730C8u;
            return;
        }
    }
    ctx->pc = 0x2730ACu;
    // 0x2730ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2730acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2730b0: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2730b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2730b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2730b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2730b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2730b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2730bc: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x2730BCu;
    SET_GPR_U32(ctx, 31, 0x2730C4u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x2730BCu, 0x2730C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730C4u;
label_2730c4:
    // 0x2730c4: 0x0  nop
    ctx->pc = 0x2730c4u;
    // NOP
    ctx->pc = 0x2730c8u;
}
