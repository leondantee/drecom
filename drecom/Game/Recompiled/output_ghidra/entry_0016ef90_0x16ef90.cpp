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

// Function: entry_0016ef90
// Address: 0x16ef90 - 0x16efc8
void entry_0016ef90_0x16ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef90_0x16ef90");
#endif

    switch (ctx->pc) {
        case 0x16efc4u: goto label_16efc4;
        default: break;
    }

    ctx->pc = 0x16ef90u;

    // 0x16ef90: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x16ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x16ef94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16EF94u;
    {
        const bool branch_taken_0x16ef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef94) {
            ctx->pc = 0x16EFC8u;
            return;
        }
    }
    ctx->pc = 0x16EF9Cu;
    // 0x16ef9c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x16ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16efa0: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x16efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x16efa4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16efa8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x16efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x16efac: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x16efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x16efb0: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x16efb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16efb4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x16efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16efb8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x16efb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16efbc: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x16EFBCu;
    SET_GPR_U32(ctx, 31, 0x16EFC4u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x16EFBCu, 0x16EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFC4u;
label_16efc4:
    // 0x16efc4: 0x0  nop
    ctx->pc = 0x16efc4u;
    // NOP
    ctx->pc = 0x16efc8u;
}
