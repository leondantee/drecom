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

// Function: entry_001100a4
// Address: 0x1100a4 - 0x1100c8
void entry_001100a4_0x1100a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001100a4_0x1100a4");
#endif

    ctx->pc = 0x1100a4u;

    // 0x1100a4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1100a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1100a8: 0x24e75280  addiu       $a3, $a3, 0x5280
    ctx->pc = 0x1100a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x1100ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1100acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100b0: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1100b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x1100b4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1100b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1100b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1100b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1100bc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1100bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1100c0: 0x260967c0  addiu       $t1, $s0, 0x67C0
    ctx->pc = 0x1100c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 26560));
    // 0x1100c4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1100c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1100c8u;
}
