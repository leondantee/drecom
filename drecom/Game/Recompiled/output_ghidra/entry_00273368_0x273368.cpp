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

// Function: entry_00273368
// Address: 0x273368 - 0x2733b0
void entry_00273368_0x273368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273368_0x273368");
#endif

    ctx->pc = 0x273368u;

    // 0x273368: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x273368u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27336c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273370: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x273370u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273374: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x273374u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x273378: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x273378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x27337c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27337cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273380: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x273380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x273384: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x273384u;
    {
        const bool branch_taken_0x273384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273384) {
            ctx->pc = 0x2732B0u;
            return;
        }
    }
    ctx->pc = 0x27338Cu;
    // 0x27338c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x27338cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x273390: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x273390u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x273394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273398: 0x2602134c  addiu       $v0, $s0, 0x134C
    ctx->pc = 0x273398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4940));
    // 0x27339c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2733a0: 0xac4301c8  sw          $v1, 0x1C8($v0)
    ctx->pc = 0x2733a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 3));
    // 0x2733a4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2733a4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2733a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2733A8u;
    {
        const bool branch_taken_0x2733a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733a8) {
            ctx->pc = 0x273468u;
            return;
        }
    }
    ctx->pc = 0x2733B0u;
}
