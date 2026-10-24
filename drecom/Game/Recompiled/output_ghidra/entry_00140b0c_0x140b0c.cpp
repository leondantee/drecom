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

// Function: entry_00140b0c
// Address: 0x140b0c - 0x140b3c
void entry_00140b0c_0x140b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b0c_0x140b0c");
#endif

    switch (ctx->pc) {
        case 0x140b14u: goto label_140b14;
        case 0x140b1cu: goto label_140b1c;
        default: break;
    }

    ctx->pc = 0x140b0cu;

    // 0x140b0c: 0xc099464  jal         func_265190
    ctx->pc = 0x140B0Cu;
    SET_GPR_U32(ctx, 31, 0x140B14u);
    ctx->pc = 0x265190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265190u, 0x140B0Cu, 0x140B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B14u;
label_140b14:
    // 0x140b14: 0xc05d710  jal         func_175C40
    ctx->pc = 0x140B14u;
    SET_GPR_U32(ctx, 31, 0x140B1Cu);
    ctx->pc = 0x175C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175C40u, 0x140B14u, 0x140B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B1Cu;
label_140b1c:
    // 0x140b1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140b20: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140b24: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x140b28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140b2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140B2Cu;
    {
        const bool branch_taken_0x140b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b2c) {
            ctx->pc = 0x140B3Cu;
            return;
        }
    }
    ctx->pc = 0x140B34u;
    // 0x140b34: 0xc067148  jal         func_19C520
    ctx->pc = 0x140B34u;
    SET_GPR_U32(ctx, 31, 0x140B3Cu);
    ctx->pc = 0x19C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C520u, 0x140B34u, 0x140B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B3Cu;
}
