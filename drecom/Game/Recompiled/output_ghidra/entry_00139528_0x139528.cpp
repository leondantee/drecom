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

// Function: entry_00139528
// Address: 0x139528 - 0x139560
void entry_00139528_0x139528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139528_0x139528");
#endif

    switch (ctx->pc) {
        case 0x139558u: goto label_139558;
        default: break;
    }

    ctx->pc = 0x139528u;

    // 0x139528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13952c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x13952cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x139530: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x139530u;
    {
        const bool branch_taken_0x139530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139530) {
            ctx->pc = 0x139560u;
            return;
        }
    }
    ctx->pc = 0x139538u;
    // 0x139538: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x139538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13953c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13953cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x139540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x139544: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x139544u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x139548: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13954c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139550: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x139550u;
    SET_GPR_U32(ctx, 31, 0x139558u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x139550u, 0x139558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139558u;
label_139558:
    // 0x139558: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139558u;
    {
        const bool branch_taken_0x139558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139558) {
            ctx->pc = 0x139570u;
            return;
        }
    }
    ctx->pc = 0x139560u;
}
