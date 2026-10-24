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

// Function: entry_003619a4
// Address: 0x3619a4 - 0x3619d4
void entry_003619a4_0x3619a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003619a4_0x3619a4");
#endif

    ctx->pc = 0x3619a4u;

    // 0x3619a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3619a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3619a8: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x3619a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x3619ac: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x3619acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3619b0: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x3619b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3619b4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3619b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3619b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3619b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3619bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3619bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3619c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3619c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3619c4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3619c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3619c8: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x3619c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3619cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3619CCu;
    {
        const bool branch_taken_0x3619cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3619cc) {
            ctx->pc = 0x361A0Cu;
            return;
        }
    }
    ctx->pc = 0x3619D4u;
}
