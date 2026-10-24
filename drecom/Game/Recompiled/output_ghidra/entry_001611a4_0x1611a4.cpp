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

// Function: entry_001611a4
// Address: 0x1611a4 - 0x1611b8
void entry_001611a4_0x1611a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001611a4_0x1611a4");
#endif

    ctx->pc = 0x1611a4u;

    // 0x1611a4: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x1611a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x1611a8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1611ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1611acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1611b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1611b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1611b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1611b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1611b8u;
}
