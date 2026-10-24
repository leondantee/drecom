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

// Function: entry_001758f8
// Address: 0x1758f8 - 0x175908
void entry_001758f8_0x1758f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001758f8_0x1758f8");
#endif

    ctx->pc = 0x1758f8u;

    // 0x1758f8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1758f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1758fc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1758fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175900: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175900u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175904: 0x0  nop
    ctx->pc = 0x175904u;
    // NOP
    ctx->pc = 0x175908u;
}
