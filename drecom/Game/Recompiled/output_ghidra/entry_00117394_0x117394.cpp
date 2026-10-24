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

// Function: entry_00117394
// Address: 0x117394 - 0x1173c8
void entry_00117394_0x117394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117394_0x117394");
#endif

    ctx->pc = 0x117394u;

    // 0x117394: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x117394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x117398: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x117398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11739c: 0xdc644d30  ld          $a0, 0x4D30($v1)
    ctx->pc = 0x11739cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 19760)));
    // 0x1173a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1173a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1173a4: 0x35230001  ori         $v1, $t1, 0x1
    ctx->pc = 0x1173a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x1173a8: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x1173a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x1173ac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1173acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1173b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1173B0u;
    {
        const bool branch_taken_0x1173b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1173B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173B0u;
        // 0x1173b4: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173b0) {
            ctx->pc = 0x1173C8u;
            return;
        }
    }
    ctx->pc = 0x1173B8u;
    // 0x1173b8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1173b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1173bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1173bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173c0: 0xc045d8c  jal         func_117630
    ctx->pc = 0x1173C0u;
    SET_GPR_U32(ctx, 31, 0x1173C8u);
    ctx->pc = 0x1173C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173C0u;
    // 0x1173c4: 0x8c454d38  lw          $a1, 0x4D38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117630u, 0x1173C0u, 0x1173C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173C8u;
}
