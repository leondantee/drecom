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

// Function: entry_00106948
// Address: 0x106948 - 0x106968
void entry_00106948_0x106948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106948_0x106948");
#endif

    ctx->pc = 0x106948u;

    // 0x106948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10694c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10694cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x106950: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x106950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x106954: 0x8cc23dac  lw          $v0, 0x3DAC($a2)
    ctx->pc = 0x106954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x106958: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x106958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10695c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x10695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x106960: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x106960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106964: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x106964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x106968u;
}
