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

// Function: entry_0030f574
// Address: 0x30f574 - 0x30f5bc
void entry_0030f574_0x30f574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f574_0x30f574");
#endif

    switch (ctx->pc) {
        case 0x30f5b8u: goto label_30f5b8;
        default: break;
    }

    ctx->pc = 0x30f574u;

    // 0x30f574: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f578: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f57c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x30f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x30f580: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30f584: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30F584u;
    {
        const bool branch_taken_0x30f584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f584) {
            ctx->pc = 0x30F5BCu;
            return;
        }
    }
    ctx->pc = 0x30F58Cu;
    // 0x30f58c: 0x8fa70298  lw          $a3, 0x298($sp)
    ctx->pc = 0x30f58cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f590: 0x8ce41338  lw          $a0, 0x1338($a3)
    ctx->pc = 0x30f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4920)));
    // 0x30f594: 0x30861e00  andi        $a2, $a0, 0x1E00
    ctx->pc = 0x30f594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7680);
    // 0x30f598: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x30F598u;
    {
        const bool branch_taken_0x30f598 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f598) {
            ctx->pc = 0x30F5BCu;
            return;
        }
    }
    ctx->pc = 0x30F5A0u;
    // 0x30f5a0: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f5a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f5a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f5a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30f5ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x30f5acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f5b0: 0xc0c44fc  jal         func_3113F0
    ctx->pc = 0x30F5B0u;
    SET_GPR_U32(ctx, 31, 0x30F5B8u);
    ctx->pc = 0x3113F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3113F0u, 0x30F5B0u, 0x30F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5B8u;
label_30f5b8:
    // 0x30f5b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30f5b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30f5bcu;
}
