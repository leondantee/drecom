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

// Function: entry_00104e4c
// Address: 0x104e4c - 0x104e5c
void entry_00104e4c_0x104e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e4c_0x104e4c");
#endif

    ctx->pc = 0x104e4cu;

    // 0x104e4c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x104e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x104e50: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x104e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x104e54: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x104e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104e58: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x104e58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    ctx->pc = 0x104e5cu;
}
