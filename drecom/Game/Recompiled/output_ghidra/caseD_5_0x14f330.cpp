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

// Function: caseD_5
// Address: 0x14f330 - 0x14f360
void caseD_5_0x14f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14f330");
#endif

    switch (ctx->pc) {
        case 0x14f354u: goto label_14f354;
        default: break;
    }

    ctx->pc = 0x14f330u;

    // 0x14f330: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x14f330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x14f334: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x14f334u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f338: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f33c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14f33cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14f340: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x14f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14f344: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x14f344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14f348: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f34c: 0xc0bbca0  jal         func_2EF280
    ctx->pc = 0x14F34Cu;
    SET_GPR_U32(ctx, 31, 0x14F354u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F34Cu, 0x14F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F354u;
label_14f354:
    // 0x14f354: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14f354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14f358: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14F358u;
    {
        const bool branch_taken_0x14f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f358) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F360u;
}
