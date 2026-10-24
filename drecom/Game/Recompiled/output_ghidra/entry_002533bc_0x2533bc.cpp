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

// Function: entry_002533bc
// Address: 0x2533bc - 0x2533cc
void entry_002533bc_0x2533bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002533bc_0x2533bc");
#endif

    ctx->pc = 0x2533bcu;

    // 0x2533bc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2533bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2533c0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2533c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2533c4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2533c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2533c8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2533c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x2533ccu;
}
