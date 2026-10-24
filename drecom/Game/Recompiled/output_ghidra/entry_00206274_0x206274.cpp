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

// Function: entry_00206274
// Address: 0x206274 - 0x20629c
void entry_00206274_0x206274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206274_0x206274");
#endif

    ctx->pc = 0x206274u;

    // 0x206274: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x206274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x206278: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x206278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20627c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x206280: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206284: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206284u;
    {
        const bool branch_taken_0x206284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206284) {
            ctx->pc = 0x20629Cu;
            return;
        }
    }
    ctx->pc = 0x20628Cu;
    // 0x20628c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206290: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x206290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x206294: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x206294u;
    SET_GPR_U32(ctx, 31, 0x20629Cu);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x206294u, 0x20629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20629Cu;
}
