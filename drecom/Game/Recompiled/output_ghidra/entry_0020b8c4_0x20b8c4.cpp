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

// Function: entry_0020b8c4
// Address: 0x20b8c4 - 0x20b914
void entry_0020b8c4_0x20b8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b8c4_0x20b8c4");
#endif

    switch (ctx->pc) {
        case 0x20b910u: goto label_20b910;
        default: break;
    }

    ctx->pc = 0x20b8c4u;

    // 0x20b8c4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20b8c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20b8cc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b8d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b8d4: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x20b8d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20b8d8: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x20b8d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x20b8dc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20b8dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b8e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20b8e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b8e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b8e8: 0x244992c0  addiu       $t1, $v0, -0x6D40
    ctx->pc = 0x20b8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b8ec: 0xc7ac017c  lwc1        $f12, 0x17C($sp)
    ctx->pc = 0x20b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b8f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b8f4: 0xc42d94c0  lwc1        $f13, -0x6B40($at)
    ctx->pc = 0x20b8f4u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20b8f8: 0xc7ae0178  lwc1        $f14, 0x178($sp)
    ctx->pc = 0x20b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20b8fc: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x20b8fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20b900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b904: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x20b904u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b908: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20B908u;
    SET_GPR_U32(ctx, 31, 0x20B910u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20B908u, 0x20B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B910u;
label_20b910:
    // 0x20b910: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x20b910u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20b914u;
}
