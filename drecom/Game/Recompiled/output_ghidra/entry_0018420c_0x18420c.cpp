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

// Function: entry_0018420c
// Address: 0x18420c - 0x184218
void entry_0018420c_0x18420c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018420c_0x18420c");
#endif

    ctx->pc = 0x18420cu;

    // 0x18420c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x18420cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x184210: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x184210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x184214: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x184214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x184218u;
}
