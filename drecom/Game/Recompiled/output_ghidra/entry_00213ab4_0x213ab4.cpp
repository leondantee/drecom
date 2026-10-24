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

// Function: entry_00213ab4
// Address: 0x213ab4 - 0x213ad8
void entry_00213ab4_0x213ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213ab4_0x213ab4");
#endif

    ctx->pc = 0x213ab4u;

    // 0x213ab4: 0x24429cf0  addiu       $v0, $v0, -0x6310
    ctx->pc = 0x213ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941936));
    // 0x213ab8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x213ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x213abc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213ac0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x213ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x213ac4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x213ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x213ac8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213acc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x213accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x213ad0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213ad4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x213ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x213ad8u;
}
