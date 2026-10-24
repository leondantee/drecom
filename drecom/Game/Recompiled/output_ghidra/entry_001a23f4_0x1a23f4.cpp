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

// Function: entry_001a23f4
// Address: 0x1a23f4 - 0x1a2460
void entry_001a23f4_0x1a23f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a23f4_0x1a23f4");
#endif

    switch (ctx->pc) {
        case 0x1a2408u: goto label_1a2408;
        case 0x1a2430u: goto label_1a2430;
        case 0x1a2454u: goto label_1a2454;
        default: break;
    }

    ctx->pc = 0x1a23f4u;

    // 0x1a23f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23f8: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1a23f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1a23fc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1a23fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2400: 0xc076198  jal         func_1D8660
    ctx->pc = 0x1A2400u;
    SET_GPR_U32(ctx, 31, 0x1A2408u);
    ctx->pc = 0x1D8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8660u, 0x1A2400u, 0x1A2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2408u;
label_1a2408:
    // 0x1a2408: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a240c: 0x90620007  lbu         $v0, 0x7($v1)
    ctx->pc = 0x1a240cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x1a2410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2414: 0xa0620007  sb          $v0, 0x7($v1)
    ctx->pc = 0x1a2414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2418: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a241c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a241cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2420: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a2420u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2424: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2424u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2428: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x1A2428u;
    SET_GPR_U32(ctx, 31, 0x1A2430u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x1A2428u, 0x1A2430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2430u;
label_1a2430:
    // 0x1a2430: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2434: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2438: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a2438u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a243c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a243cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2440: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1a2440u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2444: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a2444u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2448: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x1a2448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a244c: 0xc059190  jal         func_164640
    ctx->pc = 0x1A244Cu;
    SET_GPR_U32(ctx, 31, 0x1A2454u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A244Cu, 0x1A2454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2454u;
label_1a2454:
    // 0x1a2454: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2458: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a245c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a245cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a2460u;
}
