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

// Function: entry_00284230
// Address: 0x284230 - 0x28424c
void entry_00284230_0x284230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284230_0x284230");
#endif

    ctx->pc = 0x284230u;

    // 0x284230: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284234: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284238: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x284238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28423c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28423cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x284240: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x284240u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x284244: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284248: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    ctx->pc = 0x28424cu;
}
