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

// Function: entry_0016e9d8
// Address: 0x16e9d8 - 0x16ea00
void entry_0016e9d8_0x16e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e9d8_0x16e9d8");
#endif

    ctx->pc = 0x16e9d8u;

    // 0x16e9d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e9dc: 0x8c25bcf4  lw          $a1, -0x430C($at)
    ctx->pc = 0x16e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47BCF4u));
    // 0x16e9e0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x16e9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x16e9e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e9e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16e9ec: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x16e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x16e9f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16e9f4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x16e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x16e9f8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x16e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16e9fc: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x16e9fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x16ea00u;
}
