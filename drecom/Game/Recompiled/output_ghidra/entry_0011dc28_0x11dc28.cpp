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

// Function: entry_0011dc28
// Address: 0x11dc28 - 0x11dc40
void entry_0011dc28_0x11dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc28_0x11dc28");
#endif

    ctx->pc = 0x11dc28u;

    // 0x11dc28: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11dc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11dc2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11dc30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x11dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11dc34: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11dc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dc38: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x11dc38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11dc3c: 0x0  nop
    ctx->pc = 0x11dc3cu;
    // NOP
    ctx->pc = 0x11dc40u;
}
