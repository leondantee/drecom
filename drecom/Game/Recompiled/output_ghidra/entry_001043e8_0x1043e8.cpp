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

// Function: entry_001043e8
// Address: 0x1043e8 - 0x104428
void entry_001043e8_0x1043e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001043e8_0x1043e8");
#endif

    ctx->pc = 0x1043e8u;

    // 0x1043e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1043ec: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1043ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1043f0: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1043f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1043f4: 0x8e2b0010  lw          $t3, 0x10($s1)
    ctx->pc = 0x1043f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1043f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1043f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1043fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1043fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104400: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104404: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x104404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104408: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10440c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x10440cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104410: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x104410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x104414: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10441c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10441cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104420: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x104420u;
    {
        const bool branch_taken_0x104420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104420u;
        // 0x104424: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104420) {
            ctx->pc = 0x1044D0u;
            return;
        }
    }
    ctx->pc = 0x104428u;
}
