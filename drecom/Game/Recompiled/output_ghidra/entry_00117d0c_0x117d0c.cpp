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

// Function: entry_00117d0c
// Address: 0x117d0c - 0x117d18
void entry_00117d0c_0x117d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117d0c_0x117d0c");
#endif

    ctx->pc = 0x117d0cu;

    // 0x117d0c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x117d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x117d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117d14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x117d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117d18u;
}
