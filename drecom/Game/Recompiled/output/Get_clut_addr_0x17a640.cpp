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

// Function: Get_clut_addr
// Address: 0x17a640 - 0x17a6c0
void Get_clut_addr_0x17a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_clut_addr_0x17a640");
#endif

    ctx->pc = 0x17a640u;

    // 0x17a640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a648: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x17a648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x17a64c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a650: 0x2c410020  sltiu       $at, $v0, 0x20
    ctx->pc = 0x17a650u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17a654: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A654u;
    {
        const bool branch_taken_0x17a654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a654) {
            ctx->pc = 0x17A69Cu;
            goto label_17a69c;
        }
    }
    ctx->pc = 0x17A65Cu;
    // 0x17a65c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a660: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a664: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x17a664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17a668: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17a668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17a66c: 0x24501100  addiu       $s0, $v0, 0x1100
    ctx->pc = 0x17a66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x17a670: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a678: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x17a678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x17a67c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x17a680: 0x244258b0  addiu       $v0, $v0, 0x58B0
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22704));
    // 0x17a684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a688: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17a688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a68c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a690: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17a690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17a694: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17A694u;
    {
        const bool branch_taken_0x17a694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a694) {
            ctx->pc = 0x17A6ACu;
            goto label_17a6ac;
        }
    }
    ctx->pc = 0x17A69Cu;
label_17a69c:
    // 0x17a69c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a6a0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x17a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x17a6a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a6a8: 0x24501200  addiu       $s0, $v0, 0x1200
    ctx->pc = 0x17a6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
label_17a6ac:
    // 0x17a6ac: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x17a6acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17a6b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a6b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17a6b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17a6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A6C0u;
}
