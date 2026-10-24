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

// Function: entry_0037b864
// Address: 0x37b864 - 0x37b8a4
void entry_0037b864_0x37b864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b864_0x37b864");
#endif

    switch (ctx->pc) {
        case 0x37b86cu: goto label_37b86c;
        default: break;
    }

    ctx->pc = 0x37b864u;

    // 0x37b864: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x37B864u;
    SET_GPR_U32(ctx, 31, 0x37B86Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x37B864u, 0x37B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B86Cu;
label_37b86c:
    // 0x37b86c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x37B86Cu;
    {
        const bool branch_taken_0x37b86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b86c) {
            ctx->pc = 0x37B950u;
            return;
        }
    }
    ctx->pc = 0x37B874u;
    // 0x37b874: 0x8e26685c  lw          $a2, 0x685C($s1)
    ctx->pc = 0x37b874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x37b878: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x37b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x37b87c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x37b87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37b880: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x37b880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x37b884: 0x8e236870  lw          $v1, 0x6870($s1)
    ctx->pc = 0x37b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26736)));
    // 0x37b888: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x37b888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x37b88c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B88Cu;
    {
        const bool branch_taken_0x37b88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b88c) {
            ctx->pc = 0x37B8A4u;
            return;
        }
    }
    ctx->pc = 0x37B894u;
    // 0x37b894: 0x8e266870  lw          $a2, 0x6870($s1)
    ctx->pc = 0x37b894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26736)));
    // 0x37b898: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x37b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x37b89c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x37b89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37b8a0: 0xae236870  sw          $v1, 0x6870($s1)
    ctx->pc = 0x37b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26736), GPR_U32(ctx, 3));
    ctx->pc = 0x37b8a4u;
}
