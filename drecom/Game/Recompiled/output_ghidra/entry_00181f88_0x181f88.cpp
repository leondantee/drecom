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

// Function: entry_00181f88
// Address: 0x181f88 - 0x181fa0
void entry_00181f88_0x181f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f88_0x181f88");
#endif

    ctx->pc = 0x181f88u;

    // 0x181f88: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x181f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x181f8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f90: 0xac26f218  sw          $a2, -0xDE8($at)
    ctx->pc = 0x181f90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181f98: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181f9c: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    ctx->pc = 0x181fa0u;
}
