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

// Function: entry_00150534
// Address: 0x150534 - 0x150544
void entry_00150534_0x150534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150534_0x150534");
#endif

    ctx->pc = 0x150534u;

    // 0x150534: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x150534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x150538: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x150538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x15053c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x150540: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x150540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x150544u;
}
