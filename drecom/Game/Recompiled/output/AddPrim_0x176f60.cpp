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

// Function: AddPrim
// Address: 0x176f60 - 0x176fcc
void AddPrim_0x176f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPrim_0x176f60");
#endif

    ctx->pc = 0x176f60u;

    // 0x176f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176f64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176f6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x176f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x176f70: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x176f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x176f74: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176f78: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176f7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x176f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176f80: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x176f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176f84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176f88: 0x2032024  and         $a0, $s0, $v1
    ctx->pc = 0x176f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x176f8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x176f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176f90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x176f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x176f94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x176f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176f98: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x176f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x176f9c: 0x10207c  dsll32      $a0, $s0, 1
    ctx->pc = 0x176f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 1));
    // 0x176fa0: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x176fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x176fa4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176fa8: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x176fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x176fac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x176facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x176fb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x176fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176fb4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x176fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x176fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176fc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x176fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x176fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x176FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176FCCu;
}
