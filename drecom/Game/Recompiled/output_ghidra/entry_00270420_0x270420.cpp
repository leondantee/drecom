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

// Function: entry_00270420
// Address: 0x270420 - 0x27045c
void entry_00270420_0x270420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270420_0x270420");
#endif

    switch (ctx->pc) {
        case 0x270444u: goto label_270444;
        case 0x270450u: goto label_270450;
        default: break;
    }

    ctx->pc = 0x270420u;

    // 0x270420: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270424: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x270424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x270428: 0x3c028200  lui         $v0, 0x8200
    ctx->pc = 0x270428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33280 << 16));
    // 0x27042c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x270430: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x270430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x270434: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27043c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x27043Cu;
    SET_GPR_U32(ctx, 31, 0x270444u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x27043Cu, 0x270444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270444u;
label_270444:
    // 0x270444: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270448: 0xc05cd10  jal         func_173440
    ctx->pc = 0x270448u;
    SET_GPR_U32(ctx, 31, 0x270450u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x270448u, 0x270450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270450u;
label_270450:
    // 0x270450: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270454: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270458: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x270458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x27045cu;
}
