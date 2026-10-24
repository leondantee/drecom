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

// Function: entry_0017a748
// Address: 0x17a748 - 0x17a758
void entry_0017a748_0x17a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a748_0x17a748");
#endif

    ctx->pc = 0x17a748u;

    // 0x17a748: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a74c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x17a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x17a750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a754: 0x24501200  addiu       $s0, $v0, 0x1200
    ctx->pc = 0x17a754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    ctx->pc = 0x17a758u;
}
