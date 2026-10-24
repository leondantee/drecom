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

// Function: entry_00105f94
// Address: 0x105f94 - 0x105fc0
void entry_00105f94_0x105f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105f94_0x105f94");
#endif

    ctx->pc = 0x105f94u;

    // 0x105f94: 0x8ca33dac  lw          $v1, 0x3DAC($a1)
    ctx->pc = 0x105f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15788)));
    // 0x105f98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x105f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f9c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x105f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x105fa0: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x105fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105fa8: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x105fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x105fac: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x105facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x105fb0: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x105fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    // 0x105fb4: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x105fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x105fb8: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x105fb8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x105fbc: 0x0  nop
    ctx->pc = 0x105fbcu;
    // NOP
    ctx->pc = 0x105fc0u;
}
