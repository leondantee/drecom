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

// Function: entry_001a4478
// Address: 0x1a4478 - 0x1a44a0
void entry_001a4478_0x1a4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4478_0x1a4478");
#endif

    ctx->pc = 0x1a4478u;

    // 0x1a4478: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a447c: 0x90230100  lbu         $v1, 0x100($at)
    ctx->pc = 0x1a447cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0100u));
    // 0x1a4480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4484: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x1a4484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a4488: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4488u;
    {
        const bool branch_taken_0x1a4488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4488) {
            ctx->pc = 0x1A44A0u;
            return;
        }
    }
    ctx->pc = 0x1A4490u;
    // 0x1a4490: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4494: 0x8c8302fc  lw          $v1, 0x2FC($a0)
    ctx->pc = 0x1a4494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 764)));
    // 0x1a4498: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a4498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a449c: 0xac8302fc  sw          $v1, 0x2FC($a0)
    ctx->pc = 0x1a449cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 764), GPR_U32(ctx, 3));
    ctx->pc = 0x1a44a0u;
}
