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

// Function: entry_001e5458
// Address: 0x1e5458 - 0x1e54cc
void entry_001e5458_0x1e5458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5458_0x1e5458");
#endif

    switch (ctx->pc) {
        case 0x1e5488u: goto label_1e5488;
        default: break;
    }

    ctx->pc = 0x1e5458u;

label_1e5458:
    // 0x1e5458: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e5458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e545c: 0x2987c  dsll32      $s3, $v0, 1
    ctx->pc = 0x1e545cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 1));
    // 0x1e5460: 0x13987e  dsrl32      $s3, $s3, 1
    ctx->pc = 0x1e5460u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 1));
    // 0x1e5464: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1e5464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1e5468: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e546c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e546cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1e5470: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e5470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e5474: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1e5474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e5478: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x1e5478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1e547c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e547cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e5480: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1E5480u;
    SET_GPR_U32(ctx, 31, 0x1E5488u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1E5488u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5488u) { return; }
    ctx->pc = 0x1E5488u;
label_1e5488:
    // 0x1e5488: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1e5488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e548c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1e548cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5490: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e5490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e5494: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1e5494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1e5498: 0x1680ffef  bnez        $s4, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E5498u;
    {
        const bool branch_taken_0x1e5498 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5498) {
            ctx->pc = 0x1E5458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5458;
        }
    }
    ctx->pc = 0x1E54A0u;
    // 0x1e54a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1e54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e54a4: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1e54a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e54a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e54a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e54ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e54acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e54b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e54b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e54b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e54b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e54b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e54b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e54bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e54bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e54c0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e54c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e54c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E54C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E54CCu;
}
