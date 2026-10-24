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

// Function: entry_0011d180
// Address: 0x11d180 - 0x11d198
void entry_0011d180_0x11d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d180_0x11d180");
#endif

    ctx->pc = 0x11d180u;

    // 0x11d180: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x11d180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11d184: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d188: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11d188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11d18c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x11d18cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11d190: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x11d190u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x11d194: 0x0  nop
    ctx->pc = 0x11d194u;
    // NOP
    ctx->pc = 0x11d198u;
}
