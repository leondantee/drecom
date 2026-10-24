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

// Function: entry_001a0f60
// Address: 0x1a0f60 - 0x1a0f8c
void entry_001a0f60_0x1a0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0f60_0x1a0f60");
#endif

    ctx->pc = 0x1a0f60u;

    // 0x1a0f60: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f64: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x1a0f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a0f68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0f6c: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x1a0f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x1a0f70: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0F70u;
    {
        const bool branch_taken_0x1a0f70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f70) {
            ctx->pc = 0x1A0F8Cu;
            return;
        }
    }
    ctx->pc = 0x1A0F78u;
    // 0x1a0f78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f7c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0f7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0f80: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1a0f84: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f88: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0f88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a0f8cu;
}
