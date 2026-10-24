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

// Function: entry_0010bc60
// Address: 0x10bc60 - 0x10bc98
void entry_0010bc60_0x10bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bc60_0x10bc60");
#endif

    ctx->pc = 0x10bc60u;

label_10bc60:
    // 0x10bc60: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10bc64: 0x0  nop
    ctx->pc = 0x10bc64u;
    // NOP
    // 0x10bc68: 0x0  nop
    ctx->pc = 0x10bc68u;
    // NOP
    // 0x10bc6c: 0x0  nop
    ctx->pc = 0x10bc6cu;
    // NOP
    // 0x10bc70: 0x0  nop
    ctx->pc = 0x10bc70u;
    // NOP
    // 0x10bc74: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BC74u;
    {
        const bool branch_taken_0x10bc74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bc74) {
            ctx->pc = 0x10BC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bc60;
        }
    }
    ctx->pc = 0x10BC7Cu;
    // 0x10bc7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc80: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x10bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x10bc84: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10bc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10bc88: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bc8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bc8cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x10bc90: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10bc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10bc94: 0x0  nop
    ctx->pc = 0x10bc94u;
    // NOP
    ctx->pc = 0x10bc98u;
}
