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

// Function: ectrl1d_move10
// Address: 0x253e50 - 0x253efc
void ectrl1d_move10_0x253e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1d_move10_0x253e50");
#endif

    ctx->pc = 0x253e50u;

    // 0x253e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253e54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253e58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x253e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x253e5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x253e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253e60: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x253e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x253e64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x253e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253e68: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x253e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x253e6c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x253e6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x253e70: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x253E70u;
    {
        const bool branch_taken_0x253e70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x253e70) {
            ctx->pc = 0x253E84u;
            goto label_253e84;
        }
    }
    ctx->pc = 0x253E78u;
    // 0x253e78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x253e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253e7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x253e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253e80: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x253e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_253e84:
    // 0x253e84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x253e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253e88: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x253e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x253e8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x253e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x253e90: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x253e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x253e94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x253e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253e98: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x253e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x253e9c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x253e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x253ea0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x253ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x253ea4: 0x12030011  beq         $s0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x253EA4u;
    {
        const bool branch_taken_0x253ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x253ea4) {
            ctx->pc = 0x253EECu;
            goto label_253eec;
        }
    }
    ctx->pc = 0x253EACu;
    // 0x253eac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x253eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253eb0: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x253eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x253eb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x253EB4u;
    {
        const bool branch_taken_0x253eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253eb4) {
            ctx->pc = 0x253ED8u;
            goto label_253ed8;
        }
    }
    ctx->pc = 0x253EBCu;
    // 0x253ebc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x253ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253ec0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x253ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x253ec4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x253ec4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253ec8: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x253ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x253ecc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x253eccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x253ed0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x253ED0u;
    {
        const bool branch_taken_0x253ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253ed0) {
            ctx->pc = 0x253EECu;
            goto label_253eec;
        }
    }
    ctx->pc = 0x253ED8u;
label_253ed8:
    // 0x253ed8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x253ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253edc: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x253ee0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x253ee0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253ee4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x253ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x253ee8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x253ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_253eec:
    // 0x253eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253ef0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x253EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253EFCu;
}
