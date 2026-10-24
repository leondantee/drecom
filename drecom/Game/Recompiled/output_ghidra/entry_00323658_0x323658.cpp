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

// Function: entry_00323658
// Address: 0x323658 - 0x32366c
void entry_00323658_0x323658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00323658_0x323658");
#endif

    ctx->pc = 0x323658u;

    // 0x323658: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x323658u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32365c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32365cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x323660: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x323660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x323664: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x323664u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323668: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x323668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x32366cu;
}
