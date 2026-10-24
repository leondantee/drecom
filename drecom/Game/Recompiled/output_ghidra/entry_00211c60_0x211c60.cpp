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

// Function: entry_00211c60
// Address: 0x211c60 - 0x211c70
void entry_00211c60_0x211c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211c60_0x211c60");
#endif

    ctx->pc = 0x211c60u;

    // 0x211c60: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x211c60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x211c64: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x211c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x211c68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x211c6c: 0x0  nop
    ctx->pc = 0x211c6cu;
    // NOP
    ctx->pc = 0x211c70u;
}
