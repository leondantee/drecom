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

// Function: entry_0010b7a8
// Address: 0x10b7a8 - 0x10b854
void entry_0010b7a8_0x10b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b7a8_0x10b7a8");
#endif

    ctx->pc = 0x10b7a8u;

label_10b7a8:
    // 0x10b7a8: 0x42000039  di
    ctx->pc = 0x10b7a8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10b7ac: 0x40f  sync.p
    ctx->pc = 0x10b7acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10b7b0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10b7b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10b7b8: 0x0  nop
    ctx->pc = 0x10b7b8u;
    // NOP
    // 0x10b7bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B7BCu;
    {
        const bool branch_taken_0x10b7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b7bc) {
            ctx->pc = 0x10B7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b7a8;
        }
    }
    ctx->pc = 0x10B7C4u;
    // 0x10b7c4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b7c8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x10b7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x10b7cc: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x10b7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x10b7d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b7d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10b7d8: 0x3484f590  ori         $a0, $a0, 0xF590
    ctx->pc = 0x10b7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62864);
    // 0x10b7dc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b7e0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x10b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x10b7e4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10b7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10b7e8: 0x34e7b000  ori         $a3, $a3, 0xB000
    ctx->pc = 0x10b7e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45056);
    // 0x10b7ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10b7ecu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x10b7f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10b7f4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x10b7f4u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x10b7f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10b7fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10b800: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10b800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10b804: 0x42000038  ei
    ctx->pc = 0x10b804u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10b808: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b80c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b810: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10b810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x10b814: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x10b814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x10b818: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x10b818u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x10b81c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b820: 0x34842020  ori         $a0, $a0, 0x2020
    ctx->pc = 0x10b820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8224);
    // 0x10b824: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b828: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x10b828u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x10b82c: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x10b82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x10b830: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b830u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x10b834: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x10b834u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x10b838: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b83c: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x10b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x10b840: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b840u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x10b844: 0xad02001c  sw          $v0, 0x1C($t0)
    ctx->pc = 0x10b844u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 2));
    // 0x10b848: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10b848u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x10b84c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B84Cu;
        // 0x10b850: 0xad030020  sw          $v1, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B854u;
}
