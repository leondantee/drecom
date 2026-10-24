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

// Function: entry_0016e250
// Address: 0x16e250 - 0x16e264
void entry_0016e250_0x16e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e250_0x16e250");
#endif

    ctx->pc = 0x16e250u;

    // 0x16e250: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e254: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16e258: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e25c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x16e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16e260: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x16e264u;
}
