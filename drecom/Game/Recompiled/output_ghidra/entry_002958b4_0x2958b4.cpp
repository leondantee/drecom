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

// Function: entry_002958b4
// Address: 0x2958b4 - 0x295900
void entry_002958b4_0x2958b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002958b4_0x2958b4");
#endif

    switch (ctx->pc) {
        case 0x2958c4u: goto label_2958c4;
        case 0x2958d4u: goto label_2958d4;
        default: break;
    }

    ctx->pc = 0x2958b4u;

    // 0x2958b4: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2958b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2958b8: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2958b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2958bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2958BCu;
    SET_GPR_U32(ctx, 31, 0x2958C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2958BCu, 0x2958C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958C4u;
label_2958c4:
    // 0x2958c4: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2958c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2958c8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2958c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2958cc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2958CCu;
    SET_GPR_U32(ctx, 31, 0x2958D4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2958CCu, 0x2958D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958D4u;
label_2958d4:
    // 0x2958d4: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2958d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2958d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2958d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2958dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2958dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2958e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2958e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2958e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2958e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2958e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2958e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2958ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2958ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2958f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2958f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2958f4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2958f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2958f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2958F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2958F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295900u;
}
