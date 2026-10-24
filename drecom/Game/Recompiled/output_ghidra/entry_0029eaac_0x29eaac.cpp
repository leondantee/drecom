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

// Function: entry_0029eaac
// Address: 0x29eaac - 0x29eaf4
void entry_0029eaac_0x29eaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029eaac_0x29eaac");
#endif

    switch (ctx->pc) {
        case 0x29ead8u: goto label_29ead8;
        default: break;
    }

    ctx->pc = 0x29eaacu;

    // 0x29eaac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eab0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eab4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29eab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29eab8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eabc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29eac0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29eac4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29eac8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29EAC8u;
    {
        const bool branch_taken_0x29eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eac8) {
            ctx->pc = 0x29EAF4u;
            return;
        }
    }
    ctx->pc = 0x29EAD0u;
    // 0x29ead0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EAD0u;
    SET_GPR_U32(ctx, 31, 0x29EAD8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EAD0u, 0x29EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAD8u;
label_29ead8:
    // 0x29ead8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eadc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29eae0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29eae4: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x29eae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29eae8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29eae8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eaec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29EAECu;
    {
        const bool branch_taken_0x29eaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eaec) {
            ctx->pc = 0x29EB10u;
            return;
        }
    }
    ctx->pc = 0x29EAF4u;
}
