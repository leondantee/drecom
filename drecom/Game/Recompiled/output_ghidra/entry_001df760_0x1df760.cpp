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

// Function: entry_001df760
// Address: 0x1df760 - 0x1df790
void entry_001df760_0x1df760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df760_0x1df760");
#endif

    ctx->pc = 0x1df760u;

    // 0x1df760: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1df760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1df764: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1df764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1df768: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df76c: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DF76Cu;
    {
        const bool branch_taken_0x1df76c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df76c) {
            ctx->pc = 0x1DF720u;
            return;
        }
    }
    ctx->pc = 0x1DF774u;
    // 0x1df774: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df778: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df77c: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df77cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df780: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df784: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df788: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df78c: 0xac720040  sw          $s2, 0x40($v1)
    ctx->pc = 0x1df78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 18));
    ctx->pc = 0x1df790u;
}
