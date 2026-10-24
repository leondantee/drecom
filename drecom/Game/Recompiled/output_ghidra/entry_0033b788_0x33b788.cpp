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

// Function: entry_0033b788
// Address: 0x33b788 - 0x33b7e8
void entry_0033b788_0x33b788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b788_0x33b788");
#endif

    ctx->pc = 0x33b788u;

    // 0x33b788: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33b788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33b78c: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x33b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33b790: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x33b790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33b794: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x33B794u;
    {
        const bool branch_taken_0x33b794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b794) {
            ctx->pc = 0x33B6C0u;
            return;
        }
    }
    ctx->pc = 0x33B79Cu;
    // 0x33b79c: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b7a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b7a8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33B7A8u;
    {
        const bool branch_taken_0x33b7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b7a8) {
            ctx->pc = 0x33B7F4u;
            return;
        }
    }
    ctx->pc = 0x33B7B0u;
    // 0x33b7b0: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b7b8: 0x24641c20  addiu       $a0, $v1, 0x1C20
    ctx->pc = 0x33b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7200));
    // 0x33b7bc: 0x8fc300bc  lw          $v1, 0xBC($fp)
    ctx->pc = 0x33b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x33b7c0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x33b7c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33b7c4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B7C4u;
    {
        const bool branch_taken_0x33b7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7c4) {
            ctx->pc = 0x33B7E8u;
            return;
        }
    }
    ctx->pc = 0x33B7CCu;
    // 0x33b7cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b7d0: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7d4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33b7d8: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7dc: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b7e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33B7E0u;
    {
        const bool branch_taken_0x33b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7e0) {
            ctx->pc = 0x33B7F4u;
            return;
        }
    }
    ctx->pc = 0x33B7E8u;
}
