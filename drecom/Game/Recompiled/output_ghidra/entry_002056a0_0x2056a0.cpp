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

// Function: entry_002056a0
// Address: 0x2056a0 - 0x2056c0
void entry_002056a0_0x2056a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002056a0_0x2056a0");
#endif

    ctx->pc = 0x2056a0u;

    // 0x2056a0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2056a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2056a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2056a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2056a8: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x2056a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x2056ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2056acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2056b0: 0x8c741390  lw          $s4, 0x1390($v1)
    ctx->pc = 0x2056b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x2056b4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x2056b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x2056b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2056b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2056bc: 0x0  nop
    ctx->pc = 0x2056bcu;
    // NOP
    ctx->pc = 0x2056c0u;
}
