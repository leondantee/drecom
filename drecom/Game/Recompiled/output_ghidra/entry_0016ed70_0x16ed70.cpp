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

// Function: entry_0016ed70
// Address: 0x16ed70 - 0x16ede0
void entry_0016ed70_0x16ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ed70_0x16ed70");
#endif

    switch (ctx->pc) {
        case 0x16ed98u: goto label_16ed98;
        default: break;
    }

    ctx->pc = 0x16ed70u;

    // 0x16ed70: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x16ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16ed74: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16ed78: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16ed7c: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x16ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
    // 0x16ed80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ed84: 0x8ee50a68  lw          $a1, 0xA68($s7)
    ctx->pc = 0x16ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16ed88: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x16ed88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ed8c: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x16ed8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x16ed90: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x16ED90u;
    SET_GPR_U32(ctx, 31, 0x16ED98u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x16ED90u, 0x16ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED98u;
label_16ed98:
    // 0x16ed98: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x16ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x16ed9c: 0x8ef30a68  lw          $s3, 0xA68($s7)
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16eda0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x16eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16eda4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16eda8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x16eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x16edac: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x16edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x16edb0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16edb4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x16edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x16edb8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x16edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16edbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EDBCu;
    {
        const bool branch_taken_0x16edbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16edbc) {
            ctx->pc = 0x16EDE0u;
            return;
        }
    }
    ctx->pc = 0x16EDC4u;
    // 0x16edc4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x16edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16edc8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16edcc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x16edccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x16edd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16edd4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x16edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x16edd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EDD8u;
    {
        const bool branch_taken_0x16edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16edd8) {
            ctx->pc = 0x16EDE8u;
            return;
        }
    }
    ctx->pc = 0x16EDE0u;
}
