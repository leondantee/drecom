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

// Function: ReadFileSetAddr
// Address: 0x35c6f0 - 0x35c7a4
void ReadFileSetAddr_0x35c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFileSetAddr_0x35c6f0");
#endif

    ctx->pc = 0x35c6f0u;

    // 0x35c6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35c6f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35c6fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x35c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x35c700: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x35c700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x35c704: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c708: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x35c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35c70c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c710: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x35c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c714: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x35c714u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c718: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c71c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x35c71cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35c720: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C720u;
    {
        const bool branch_taken_0x35c720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c720) {
            ctx->pc = 0x35C744u;
            goto label_35c744;
        }
    }
    ctx->pc = 0x35C728u;
    // 0x35c728: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c72c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x35c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35c730: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c734: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x35c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c738: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x35c738u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c73c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35C73Cu;
    {
        const bool branch_taken_0x35c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c73c) {
            ctx->pc = 0x35C74Cu;
            goto label_35c74c;
        }
    }
    ctx->pc = 0x35C744u;
label_35c744:
    // 0x35c744: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x35c744u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c748: 0x0  nop
    ctx->pc = 0x35c748u;
    // NOP
label_35c74c:
    // 0x35c74c: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x35c74cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35c750: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c754: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x35c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35c758: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x35c758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35c75c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c760: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35c764: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x35c764u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x35c768: 0x0  nop
    ctx->pc = 0x35c768u;
    // NOP
    // 0x35c76c: 0x0  nop
    ctx->pc = 0x35c76cu;
    // NOP
    // 0x35c770: 0x1810  mfhi        $v1
    ctx->pc = 0x35c770u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x35c774: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c778: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x35c778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x35c77c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x35c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c780: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x35c780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35c784: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35c788: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x35c788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x35c78c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x35c78cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35c790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c798: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c79c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C7A4u;
}
