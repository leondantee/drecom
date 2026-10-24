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

// Function: entry_001a0fd0
// Address: 0x1a0fd0 - 0x1a0ffc
void entry_001a0fd0_0x1a0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0fd0_0x1a0fd0");
#endif

    ctx->pc = 0x1a0fd0u;

    // 0x1a0fd0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fd4: 0x90630039  lbu         $v1, 0x39($v1)
    ctx->pc = 0x1a0fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x1a0fd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0fdc: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x1a0fdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x1a0fe0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0FE0u;
    {
        const bool branch_taken_0x1a0fe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fe0) {
            ctx->pc = 0x1A0FFCu;
            return;
        }
    }
    ctx->pc = 0x1A0FE8u;
    // 0x1a0fe8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0fecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0ff0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1a0ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1a0ff4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ff8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a0ffcu;
}
