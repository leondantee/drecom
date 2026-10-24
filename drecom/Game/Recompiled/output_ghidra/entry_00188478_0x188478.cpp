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

// Function: entry_00188478
// Address: 0x188478 - 0x1884b4
void entry_00188478_0x188478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188478_0x188478");
#endif

    switch (ctx->pc) {
        case 0x18848cu: goto label_18848c;
        default: break;
    }

    ctx->pc = 0x188478u;

    // 0x188478: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x188478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18847c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18847Cu;
    {
        const bool branch_taken_0x18847c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18847c) {
            ctx->pc = 0x1884ECu;
            return;
        }
    }
    ctx->pc = 0x188484u;
    // 0x188484: 0xc05f7dc  jal         func_17DF70
    ctx->pc = 0x188484u;
    SET_GPR_U32(ctx, 31, 0x18848Cu);
    ctx->pc = 0x17DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DF70u, 0x188484u, 0x18848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18848Cu;
label_18848c:
    // 0x18848c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188490: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x188490u;
    {
        const bool branch_taken_0x188490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x188490) {
            ctx->pc = 0x1884E4u;
            return;
        }
    }
    ctx->pc = 0x188498u;
    // 0x188498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18849c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18849Cu;
    {
        const bool branch_taken_0x18849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18849c) {
            ctx->pc = 0x1884D4u;
            return;
        }
    }
    ctx->pc = 0x1884A4u;
    // 0x1884a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1884A4u;
    {
        const bool branch_taken_0x1884a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884a4) {
            ctx->pc = 0x1884B4u;
            return;
        }
    }
    ctx->pc = 0x1884ACu;
    // 0x1884ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1884ACu;
    {
        const bool branch_taken_0x1884ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884ac) {
            ctx->pc = 0x1884ECu;
            return;
        }
    }
    ctx->pc = 0x1884B4u;
}
