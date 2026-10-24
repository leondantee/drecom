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

// Function: entry_003618c4
// Address: 0x3618c4 - 0x3618f8
void entry_003618c4_0x3618c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003618c4_0x3618c4");
#endif

    ctx->pc = 0x3618c4u;

    // 0x3618c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3618c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3618c8: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x3618c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x3618cc: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x3618ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3618d0: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x3618d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3618d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3618d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3618d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3618d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3618dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3618dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3618e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3618e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3618e4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3618e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3618e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3618e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3618ec: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x3618ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3618f0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3618F0u;
    {
        const bool branch_taken_0x3618f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3618f0) {
            ctx->pc = 0x361A0Cu;
            return;
        }
    }
    ctx->pc = 0x3618F8u;
}
