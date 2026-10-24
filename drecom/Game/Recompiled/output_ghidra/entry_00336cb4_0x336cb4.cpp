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

// Function: entry_00336cb4
// Address: 0x336cb4 - 0x336cf4
void entry_00336cb4_0x336cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336cb4_0x336cb4");
#endif

    switch (ctx->pc) {
        case 0x336cbcu: goto label_336cbc;
        default: break;
    }

    ctx->pc = 0x336cb4u;

    // 0x336cb4: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x336CB4u;
    SET_GPR_U32(ctx, 31, 0x336CBCu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x336CB4u, 0x336CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336CBCu;
label_336cbc:
    // 0x336cbc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x336CBCu;
    {
        const bool branch_taken_0x336cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336cbc) {
            ctx->pc = 0x336D00u;
            return;
        }
    }
    ctx->pc = 0x336CC4u;
    // 0x336cc4: 0x8e04685c  lw          $a0, 0x685C($s0)
    ctx->pc = 0x336cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x336cc8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x336cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x336ccc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x336cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x336cd0: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x336cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x336cd4: 0x8e036870  lw          $v1, 0x6870($s0)
    ctx->pc = 0x336cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x336cd8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x336cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x336cdc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x336CDCu;
    {
        const bool branch_taken_0x336cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336cdc) {
            ctx->pc = 0x336CF4u;
            return;
        }
    }
    ctx->pc = 0x336CE4u;
    // 0x336ce4: 0x8e046870  lw          $a0, 0x6870($s0)
    ctx->pc = 0x336ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x336ce8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x336ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x336cec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x336cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x336cf0: 0xae036870  sw          $v1, 0x6870($s0)
    ctx->pc = 0x336cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 3));
    ctx->pc = 0x336cf4u;
}
