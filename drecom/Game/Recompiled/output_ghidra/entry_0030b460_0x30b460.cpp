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

// Function: entry_0030b460
// Address: 0x30b460 - 0x30b4e8
void entry_0030b460_0x30b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b460_0x30b460");
#endif

    switch (ctx->pc) {
        case 0x30b484u: goto label_30b484;
        default: break;
    }

    ctx->pc = 0x30b460u;

    // 0x30b460: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x30B460u;
    {
        const bool branch_taken_0x30b460 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b460) {
            ctx->pc = 0x30B3E0u;
            return;
        }
    }
    ctx->pc = 0x30B468u;
    // 0x30b468: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b46c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30b470: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30b470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b474: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x30b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x30b478: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30b478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b47c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x30B47Cu;
    SET_GPR_U32(ctx, 31, 0x30B484u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x30B484u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30B484u) { return; }
    ctx->pc = 0x30B484u;
label_30b484:
    // 0x30b484: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30b484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30b488: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x30b488u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b48c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b490: 0x24631340  addiu       $v1, $v1, 0x1340
    ctx->pc = 0x30b490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x30b494: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x30b494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x30b498: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30b4a0: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x30b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x30b4a4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x30b4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x30b4a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b4ac: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30b4b0: 0x24630330  addiu       $v1, $v1, 0x330
    ctx->pc = 0x30b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
    // 0x30b4b4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x30b4b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b4b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30b4bc: 0x24631340  addiu       $v1, $v1, 0x1340
    ctx->pc = 0x30b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x30b4c0: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x30b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x30b4c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30b4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30b4cc: 0x24630190  addiu       $v1, $v1, 0x190
    ctx->pc = 0x30b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x30b4d0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x30b4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x30b4d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30b4d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b4dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30b4dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30b4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x30B4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B4E8u;
}
