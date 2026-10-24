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

// Function: entry_001e5398
// Address: 0x1e5398 - 0x1e5400
void entry_001e5398_0x1e5398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5398_0x1e5398");
#endif

    switch (ctx->pc) {
        case 0x1e53bcu: goto label_1e53bc;
        default: break;
    }

    ctx->pc = 0x1e5398u;

label_1e5398:
    // 0x1e5398: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e5398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e539c: 0x2987c  dsll32      $s3, $v0, 1
    ctx->pc = 0x1e539cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 1));
    // 0x1e53a0: 0x13987e  dsrl32      $s3, $s3, 1
    ctx->pc = 0x1e53a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 1));
    // 0x1e53a4: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x1e53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1e53a8: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x1e53a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e53ac: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1e53acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e53b0: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e53b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e53b4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1E53B4u;
    SET_GPR_U32(ctx, 31, 0x1E53BCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1E53BCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E53BCu) { return; }
    ctx->pc = 0x1E53BCu;
label_1e53bc:
    // 0x1e53bc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1e53bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e53c0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1e53c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e53c4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e53c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e53c8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1e53c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1e53cc: 0x1680fff2  bnez        $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E53CCu;
    {
        const bool branch_taken_0x1e53cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e53cc) {
            ctx->pc = 0x1E5398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5398;
        }
    }
    ctx->pc = 0x1E53D4u;
    // 0x1e53d4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1e53d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e53d8: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1e53d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e53dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e53dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e53e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e53e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e53e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e53e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e53e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e53e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e53ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e53ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e53f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e53f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e53f4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e53f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e53f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E53F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E53F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5400u;
}
