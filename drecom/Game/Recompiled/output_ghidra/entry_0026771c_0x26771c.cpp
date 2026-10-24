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

// Function: entry_0026771c
// Address: 0x26771c - 0x267738
void entry_0026771c_0x26771c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026771c_0x26771c");
#endif

    ctx->pc = 0x26771cu;

    // 0x26771c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26771cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x267720: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x267720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x267724: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x267724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x267728: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x267728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x26772c: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x26772cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x267730: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x267730u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267734: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x267734u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x267738u;
}
