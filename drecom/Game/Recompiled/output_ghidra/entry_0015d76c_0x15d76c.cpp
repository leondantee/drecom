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

// Function: entry_0015d76c
// Address: 0x15d76c - 0x15d794
void entry_0015d76c_0x15d76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d76c_0x15d76c");
#endif

    ctx->pc = 0x15d76cu;

    // 0x15d76c: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d774: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15d778: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D778u;
    {
        const bool branch_taken_0x15d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d778) {
            ctx->pc = 0x15D794u;
            return;
        }
    }
    ctx->pc = 0x15D780u;
    // 0x15d780: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d784: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d788: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15d78c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15D78Cu;
    {
        const bool branch_taken_0x15d78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d78c) {
            ctx->pc = 0x15D7C0u;
            return;
        }
    }
    ctx->pc = 0x15D794u;
}
