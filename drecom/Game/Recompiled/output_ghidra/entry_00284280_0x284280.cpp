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

// Function: entry_00284280
// Address: 0x284280 - 0x28429c
void entry_00284280_0x284280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284280_0x284280");
#endif

    ctx->pc = 0x284280u;

    // 0x284280: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284284: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284288: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x284288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28428c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28428cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x284290: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x284290u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x284294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284298: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    ctx->pc = 0x28429cu;
}
