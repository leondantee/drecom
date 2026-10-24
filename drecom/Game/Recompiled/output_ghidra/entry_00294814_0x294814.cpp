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

// Function: entry_00294814
// Address: 0x294814 - 0x294848
void entry_00294814_0x294814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294814_0x294814");
#endif

    ctx->pc = 0x294814u;

    // 0x294814: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x294814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x294818: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x294818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x29481c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x29481cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x294820: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x294820u;
    {
        const bool branch_taken_0x294820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x294820) {
            ctx->pc = 0x294848u;
            return;
        }
    }
    ctx->pc = 0x294828u;
    // 0x294828: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x294828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x29482c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294830: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x294830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x294834: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x294838: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x294838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29483c: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x29483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x294840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x294840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x294844: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x294844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    ctx->pc = 0x294848u;
}
