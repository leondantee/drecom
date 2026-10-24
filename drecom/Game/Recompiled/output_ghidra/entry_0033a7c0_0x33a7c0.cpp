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

// Function: entry_0033a7c0
// Address: 0x33a7c0 - 0x33a808
void entry_0033a7c0_0x33a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a7c0_0x33a7c0");
#endif

    ctx->pc = 0x33a7c0u;

    // 0x33a7c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a7c4: 0x2021006  srlv        $v0, $v0, $s0
    ctx->pc = 0x33a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x33a7c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a7cc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33a7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a7d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a7d4: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a7d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a7dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a7e0: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a7e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a7e4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a7e8: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a7f0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a7f4: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x33a7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x33a7f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x33a7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x33a7fc: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x33a7fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a800: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x33a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x33a804: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x33a808u;
}
