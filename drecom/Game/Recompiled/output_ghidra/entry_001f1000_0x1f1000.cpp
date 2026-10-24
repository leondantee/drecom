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

// Function: entry_001f1000
// Address: 0x1f1000 - 0x1f1034
void entry_001f1000_0x1f1000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1000_0x1f1000");
#endif

    switch (ctx->pc) {
        case 0x1f1008u: goto label_1f1008;
        default: break;
    }

    ctx->pc = 0x1f1000u;

    // 0x1f1000: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1000u;
    SET_GPR_U32(ctx, 31, 0x1F1008u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1000u, 0x1F1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1008u;
label_1f1008:
    // 0x1f1008: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f1008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f100c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1f100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f1010: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1010u;
    {
        const bool branch_taken_0x1f1010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1010) {
            ctx->pc = 0x1F1034u;
            return;
        }
    }
    ctx->pc = 0x1F1018u;
    // 0x1f1018: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x1f1018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1f101c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f1020: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f1024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1028: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x1f1028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f102c: 0x26421330  addiu       $v0, $s2, 0x1330
    ctx->pc = 0x1f102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x1f1030: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f1030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x1f1034u;
}
