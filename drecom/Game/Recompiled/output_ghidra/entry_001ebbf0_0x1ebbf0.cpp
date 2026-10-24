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

// Function: entry_001ebbf0
// Address: 0x1ebbf0 - 0x1ebc20
void entry_001ebbf0_0x1ebbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebbf0_0x1ebbf0");
#endif

    ctx->pc = 0x1ebbf0u;

    // 0x1ebbf0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1ebbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebbf4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1ebbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ebbf8: 0x30901000  andi        $s0, $a0, 0x1000
    ctx->pc = 0x1ebbf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x1ebbfc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBBFCu;
    {
        const bool branch_taken_0x1ebbfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebbfc) {
            ctx->pc = 0x1EBC20u;
            return;
        }
    }
    ctx->pc = 0x1EBC04u;
    // 0x1ebc04: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1ebc04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebc08: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1ebc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ebc0c: 0x34a30200  ori         $v1, $a1, 0x200
    ctx->pc = 0x1ebc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x1ebc10: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1ebc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x1ebc14: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1ebc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebc18: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1ebc18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ebc1c: 0xa67010a6  sh          $s0, 0x10A6($s3)
    ctx->pc = 0x1ebc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4262), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1ebc20u;
}
