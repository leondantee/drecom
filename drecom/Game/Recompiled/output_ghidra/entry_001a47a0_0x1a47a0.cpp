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

// Function: entry_001a47a0
// Address: 0x1a47a0 - 0x1a47cc
void entry_001a47a0_0x1a47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a47a0_0x1a47a0");
#endif

    ctx->pc = 0x1a47a0u;

    // 0x1a47a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47a4: 0x90630312  lbu         $v1, 0x312($v1)
    ctx->pc = 0x1a47a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 786)));
    // 0x1a47a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a47a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a47ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a47acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a47b0: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x1a47b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1a47b4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A47B4u;
    {
        const bool branch_taken_0x1a47b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47b4) {
            ctx->pc = 0x1A47CCu;
            return;
        }
    }
    ctx->pc = 0x1A47BCu;
    // 0x1a47bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47c0: 0x90830312  lbu         $v1, 0x312($a0)
    ctx->pc = 0x1a47c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 786)));
    // 0x1a47c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a47c8: 0xa0830312  sb          $v1, 0x312($a0)
    ctx->pc = 0x1a47c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 786), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a47ccu;
}
