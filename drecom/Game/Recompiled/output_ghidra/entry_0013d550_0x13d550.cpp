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

// Function: entry_0013d550
// Address: 0x13d550 - 0x13d560
void entry_0013d550_0x13d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d550_0x13d550");
#endif

    ctx->pc = 0x13d550u;

    // 0x13d550: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x13d550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x13d554: 0x34640070  ori         $a0, $v1, 0x70
    ctx->pc = 0x13d554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x13d558: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d55c: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x13d55cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    ctx->pc = 0x13d560u;
}
