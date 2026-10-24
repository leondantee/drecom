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

// Function: entry_0036d6bc
// Address: 0x36d6bc - 0x36d6f8
void entry_0036d6bc_0x36d6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d6bc_0x36d6bc");
#endif

    ctx->pc = 0x36d6bcu;

    // 0x36d6bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x36d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36d6c0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x36d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36d6c4: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x36d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36d6c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x36d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x36d6cc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x36d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x36d6d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x36d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d6d4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x36d6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36d6d8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x36d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x36d6dc: 0x1060015e  beqz        $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x36D6DCu;
    {
        const bool branch_taken_0x36d6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6dc) {
            ctx->pc = 0x36DC58u;
            return;
        }
    }
    ctx->pc = 0x36D6E4u;
    // 0x36d6e4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x36d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36d6e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D6E8u;
    {
        const bool branch_taken_0x36d6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6e8) {
            ctx->pc = 0x36D6F8u;
            return;
        }
    }
    ctx->pc = 0x36D6F0u;
    // 0x36d6f0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x36D6F0u;
    {
        const bool branch_taken_0x36d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6f0) {
            ctx->pc = 0x36D848u;
            return;
        }
    }
    ctx->pc = 0x36D6F8u;
}
