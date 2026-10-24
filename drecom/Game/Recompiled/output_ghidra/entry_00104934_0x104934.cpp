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

// Function: entry_00104934
// Address: 0x104934 - 0x104948
void entry_00104934_0x104934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104934_0x104934");
#endif

    ctx->pc = 0x104934u;

    // 0x104934: 0xc1083  sra         $v0, $t4, 2
    ctx->pc = 0x104934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x104938: 0x131843  sra         $v1, $s3, 1
    ctx->pc = 0x104938u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
    // 0x10493c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104940: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x104940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x104944: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x104944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x104948u;
}
