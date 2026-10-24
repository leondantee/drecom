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

// Function: entry_0023cb50
// Address: 0x23cb50 - 0x23cb64
void entry_0023cb50_0x23cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cb50_0x23cb50");
#endif

    ctx->pc = 0x23cb50u;

    // 0x23cb50: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb54: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x23cb54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x23cb58: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x23cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x23cb5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23cb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23cb60: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x23cb60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23cb64u;
}
