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

// Function: entry_001c962c
// Address: 0x1c962c - 0x1c9684
void entry_001c962c_0x1c962c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c962c_0x1c962c");
#endif

    switch (ctx->pc) {
        case 0x1c9654u: goto label_1c9654;
        case 0x1c9680u: goto label_1c9680;
        default: break;
    }

    ctx->pc = 0x1c962cu;

    // 0x1c962c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1c962cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1c9630: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1c9630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1c9634: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c9634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9638: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c963c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1c963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1c9640: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1c9640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1c9644: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1c9644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1c9648: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c9648u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c964c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C964Cu;
    SET_GPR_U32(ctx, 31, 0x1C9654u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C964Cu, 0x1C9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9654u;
label_1c9654:
    // 0x1c9654: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c9654u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c9658: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c965c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1c965cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1c9660: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1c9660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1c9664: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1c9664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c9668: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c9668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c966c: 0x24040402  addiu       $a0, $zero, 0x402
    ctx->pc = 0x1c966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x1c9670: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1c9674: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c9674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9678: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C9678u;
    SET_GPR_U32(ctx, 31, 0x1C9680u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C9678u, 0x1C9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9680u;
label_1c9680:
    // 0x1c9680: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c9680u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c9684u;
}
