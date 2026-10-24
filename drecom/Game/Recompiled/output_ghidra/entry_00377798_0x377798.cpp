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

// Function: entry_00377798
// Address: 0x377798 - 0x3777b0
void entry_00377798_0x377798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377798_0x377798");
#endif

    ctx->pc = 0x377798u;

    // 0x377798: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x377798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x37779c: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x37779cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3777a0: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3777a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x3777a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3777a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3777a8: 0xac720040  sw          $s2, 0x40($v1)
    ctx->pc = 0x3777a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 18));
    // 0x3777ac: 0x0  nop
    ctx->pc = 0x3777acu;
    // NOP
    ctx->pc = 0x3777b0u;
}
