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

// Function: entry_0010b9c0
// Address: 0x10b9c0 - 0x10ba20
void entry_0010b9c0_0x10b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b9c0_0x10b9c0");
#endif

    ctx->pc = 0x10b9c0u;

label_10b9c0:
    // 0x10b9c0: 0x42000039  di
    ctx->pc = 0x10b9c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10b9c4: 0x40f  sync.p
    ctx->pc = 0x10b9c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10b9c8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10b9cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x10b9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x10b9d0: 0x0  nop
    ctx->pc = 0x10b9d0u;
    // NOP
    // 0x10b9d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B9D4u;
    {
        const bool branch_taken_0x10b9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b9d4) {
            ctx->pc = 0x10B9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b9c0;
        }
    }
    ctx->pc = 0x10B9DCu;
    // 0x10b9dc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b9e0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x10b9e4: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10b9e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10b9e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b9ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10b9f0: 0x34a5f590  ori         $a1, $a1, 0xF590
    ctx->pc = 0x10b9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62864);
    // 0x10b9f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b9f8: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10b9fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10b9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10ba00: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10ba00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10ba04: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10ba04u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x10ba08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10ba08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10ba0c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x10ba0cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 8));
    // 0x10ba10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10ba14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10ba18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10ba1c: 0x42000038  ei
    ctx->pc = 0x10ba1cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x10ba20u;
}
