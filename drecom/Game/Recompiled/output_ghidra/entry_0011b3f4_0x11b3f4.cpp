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

// Function: entry_0011b3f4
// Address: 0x11b3f4 - 0x11b410
void entry_0011b3f4_0x11b3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b3f4_0x11b3f4");
#endif

    switch (ctx->pc) {
        case 0x11b3fcu: goto label_11b3fc;
        default: break;
    }

    ctx->pc = 0x11b3f4u;

    // 0x11b3f4: 0xc0472e4  jal         func_11CB90
    ctx->pc = 0x11B3F4u;
    SET_GPR_U32(ctx, 31, 0x11B3FCu);
    ctx->pc = 0x11B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3F4u;
    // 0x11b3f8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CB90u, 0x11B3F4u, 0x11B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3FCu;
label_11b3fc:
    // 0x11b3fc: 0x1440051c  bnez        $v0, . + 4 + (0x51C << 2)
    ctx->pc = 0x11B3FCu;
    {
        const bool branch_taken_0x11b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3FCu;
        // 0x11b400: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3fc) {
            ctx->pc = 0x11C870u;
            return;
        }
    }
    ctx->pc = 0x11B404u;
    // 0x11b404: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x11b404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11b408: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x11b408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11b40c: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x11b40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
    ctx->pc = 0x11b410u;
}
