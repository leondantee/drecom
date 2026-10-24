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

// Function: entry_001ca514
// Address: 0x1ca514 - 0x1ca54c
void entry_001ca514_0x1ca514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca514_0x1ca514");
#endif

    switch (ctx->pc) {
        case 0x1ca534u: goto label_1ca534;
        case 0x1ca544u: goto label_1ca544;
        default: break;
    }

    ctx->pc = 0x1ca514u;

    // 0x1ca514: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca518: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca51c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca520: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ca520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ca524: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA524u;
    {
        const bool branch_taken_0x1ca524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca524) {
            ctx->pc = 0x1CA54Cu;
            return;
        }
    }
    ctx->pc = 0x1CA52Cu;
    // 0x1ca52c: 0xc0584bc  jal         func_1612F0
    ctx->pc = 0x1CA52Cu;
    SET_GPR_U32(ctx, 31, 0x1CA534u);
    ctx->pc = 0x1612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1612F0u, 0x1CA52Cu, 0x1CA534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA534u;
label_1ca534:
    // 0x1ca534: 0x144000ec  bnez        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x1CA534u;
    {
        const bool branch_taken_0x1ca534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca534) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA53Cu;
    // 0x1ca53c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1CA53Cu;
    SET_GPR_U32(ctx, 31, 0x1CA544u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1CA53Cu, 0x1CA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA544u;
label_1ca544:
    // 0x1ca544: 0x144000e8  bnez        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x1CA544u;
    {
        const bool branch_taken_0x1ca544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca544) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA54Cu;
}
