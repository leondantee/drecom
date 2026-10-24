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

// Function: entry_00105c10
// Address: 0x105c10 - 0x105c80
void entry_00105c10_0x105c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105c10_0x105c10");
#endif

    ctx->pc = 0x105c10u;

label_105c10:
    // 0x105c10: 0x42000039  di
    ctx->pc = 0x105c10u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x105c14: 0x40f  sync.p
    ctx->pc = 0x105c14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x105c18: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x105c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x105c1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105c20: 0x0  nop
    ctx->pc = 0x105c20u;
    // NOP
    // 0x105c24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105C24u;
    {
        const bool branch_taken_0x105c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105c24) {
            ctx->pc = 0x105C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105c10;
        }
    }
    ctx->pc = 0x105C2Cu;
    // 0x105c2c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x105c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x105c30: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x105c30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x105c34: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x105c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x105c38: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x105c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x105c3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x105c40: 0x34a5f590  ori         $a1, $a1, 0xF590
    ctx->pc = 0x105c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62864);
    // 0x105c44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105c48: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x105c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x105c4c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x105c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x105c50: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x105c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x105c54: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105c54u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x105c58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x105c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x105c5c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x105c5cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x105c60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x105c60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x105c64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x105c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x105c68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x105c6c: 0x42000038  ei
    ctx->pc = 0x105c6cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x105c70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105c74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x105c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c78: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105c7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x105c7cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 0));
    ctx->pc = 0x105c80u;
}
