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

// Function: entry_0013d5e8
// Address: 0x13d5e8 - 0x13d600
void entry_0013d5e8_0x13d5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d5e8_0x13d5e8");
#endif

    ctx->pc = 0x13d5e8u;

    // 0x13d5e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d5ec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13d5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d5f0: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x13d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x13d5f4: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x13d5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x13d5f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13d5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13d5fc: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x13d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    ctx->pc = 0x13d600u;
}
