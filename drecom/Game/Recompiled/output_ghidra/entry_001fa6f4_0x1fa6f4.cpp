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

// Function: entry_001fa6f4
// Address: 0x1fa6f4 - 0x1fa704
void entry_001fa6f4_0x1fa6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa6f4_0x1fa6f4");
#endif

    ctx->pc = 0x1fa6f4u;

    // 0x1fa6f4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1fa6f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa700: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1fa700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x1fa704u;
}
