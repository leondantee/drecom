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

// Function: entry_002843b4
// Address: 0x2843b4 - 0x2843d8
void entry_002843b4_0x2843b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002843b4_0x2843b4");
#endif

    ctx->pc = 0x2843b4u;

    // 0x2843b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2843b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2843b8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2843b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2843bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2843bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2843c0: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x2843c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2843c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2843c8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2843cc: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x2843ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x2843d0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2843D0u;
    {
        const bool branch_taken_0x2843d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2843d0) {
            ctx->pc = 0x284458u;
            return;
        }
    }
    ctx->pc = 0x2843D8u;
}
