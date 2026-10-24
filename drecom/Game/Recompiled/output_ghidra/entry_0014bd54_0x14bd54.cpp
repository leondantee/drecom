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

// Function: entry_0014bd54
// Address: 0x14bd54 - 0x14bda0
void entry_0014bd54_0x14bd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bd54_0x14bd54");
#endif

    ctx->pc = 0x14bd54u;

    // 0x14bd54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd58: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14bd58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14bd5c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14BD5Cu;
    {
        const bool branch_taken_0x14bd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bd5c) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BD64u;
    // 0x14bd64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bd68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14bd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14bd70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd74: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14bd74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14bd78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14bd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14bd80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14bd84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14bd88: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14bd8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd90: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14bd94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bd98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bd9c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x14bda0u;
}
