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

// Function: entry_001da828
// Address: 0x1da828 - 0x1da848
void entry_001da828_0x1da828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da828_0x1da828");
#endif

    ctx->pc = 0x1da828u;

    // 0x1da828: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1da828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1da82c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1da82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1da830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA830u;
    {
        const bool branch_taken_0x1da830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da830) {
            ctx->pc = 0x1DA848u;
            return;
        }
    }
    ctx->pc = 0x1DA838u;
    // 0x1da838: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x1da838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x1da83c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da83cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA840u;
    {
        const bool branch_taken_0x1da840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da840) {
            ctx->pc = 0x1DA850u;
            return;
        }
    }
    ctx->pc = 0x1DA848u;
}
