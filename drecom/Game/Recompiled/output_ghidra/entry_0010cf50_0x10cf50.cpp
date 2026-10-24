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

// Function: entry_0010cf50
// Address: 0x10cf50 - 0x10cf84
void entry_0010cf50_0x10cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cf50_0x10cf50");
#endif

    ctx->pc = 0x10cf50u;

    // 0x10cf50: 0x24503b00  addiu       $s0, $v0, 0x3B00
    ctx->pc = 0x10cf50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15104));
    // 0x10cf54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cf58: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x10cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x10cf5c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x10cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x10cf60: 0xac463b00  sw          $a2, 0x3B00($v0)
    ctx->pc = 0x10cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15104), GPR_U32(ctx, 6));
    // 0x10cf64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cf68: 0x24643940  addiu       $a0, $v1, 0x3940
    ctx->pc = 0x10cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 14656));
    // 0x10cf6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10cf70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cf70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cf74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf78: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10cf78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cf7c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10cf7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf80: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10cf80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x10cf84u;
}
