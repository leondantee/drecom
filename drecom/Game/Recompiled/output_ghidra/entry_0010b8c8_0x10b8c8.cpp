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

// Function: entry_0010b8c8
// Address: 0x10b8c8 - 0x10b928
void entry_0010b8c8_0x10b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b8c8_0x10b8c8");
#endif

    ctx->pc = 0x10b8c8u;

label_10b8c8:
    // 0x10b8c8: 0x42000039  di
    ctx->pc = 0x10b8c8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10b8cc: 0x40f  sync.p
    ctx->pc = 0x10b8ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10b8d0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10b8d4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x10b8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x10b8d8: 0x0  nop
    ctx->pc = 0x10b8d8u;
    // NOP
    // 0x10b8dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B8DCu;
    {
        const bool branch_taken_0x10b8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b8dc) {
            ctx->pc = 0x10B8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b8c8;
        }
    }
    ctx->pc = 0x10B8E4u;
    // 0x10b8e4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b8e8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x10b8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x10b8ec: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10b8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10b8f0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b8f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10b8f8: 0x34a5f590  ori         $a1, $a1, 0xF590
    ctx->pc = 0x10b8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62864);
    // 0x10b8fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b900: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10b900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10b904: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10b904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10b908: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10b908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10b90c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10b90cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x10b910: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10b910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10b914: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x10b914u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 9));
    // 0x10b918: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10b91c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10b920: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10b920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10b924: 0x42000038  ei
    ctx->pc = 0x10b924u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x10b928u;
}
