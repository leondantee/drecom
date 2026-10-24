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

// Function: entry_001160b8
// Address: 0x1160b8 - 0x1160e0
void entry_001160b8_0x1160b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001160b8_0x1160b8");
#endif

    ctx->pc = 0x1160b8u;

    // 0x1160b8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1160b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1160bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1160bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160c0: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1160c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1160c4: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x1160c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1160c8: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1160c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1160cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1160CCu;
    {
        const bool branch_taken_0x1160cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1160D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160CCu;
        // 0x1160d0: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160cc) {
            ctx->pc = 0x1160E0u;
            return;
        }
    }
    ctx->pc = 0x1160D4u;
    // 0x1160d4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1160d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1160d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1160d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160dc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1160dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x1160e0u;
}
