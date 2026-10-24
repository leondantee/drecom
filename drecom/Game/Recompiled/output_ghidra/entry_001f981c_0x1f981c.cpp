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

// Function: entry_001f981c
// Address: 0x1f981c - 0x1f984c
void entry_001f981c_0x1f981c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f981c_0x1f981c");
#endif

    ctx->pc = 0x1f981cu;

    // 0x1f981c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9820: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9824: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x1f9824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f9828: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9828u;
    {
        const bool branch_taken_0x1f9828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9828) {
            ctx->pc = 0x1F984Cu;
            return;
        }
    }
    ctx->pc = 0x1F9830u;
    // 0x1f9830: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f9830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f9834: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9838: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x1f9838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f983c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f983cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f9840: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1f9840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1f9844: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x1f9844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x1f9848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1f984cu;
}
