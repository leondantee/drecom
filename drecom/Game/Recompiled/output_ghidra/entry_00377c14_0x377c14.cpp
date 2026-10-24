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

// Function: entry_00377c14
// Address: 0x377c14 - 0x377c28
void entry_00377c14_0x377c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377c14_0x377c14");
#endif

    ctx->pc = 0x377c14u;

    // 0x377c14: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x377c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377c18: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377c1c: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377c24: 0xac7100cc  sw          $s1, 0xCC($v1)
    ctx->pc = 0x377c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 17));
    ctx->pc = 0x377c28u;
}
