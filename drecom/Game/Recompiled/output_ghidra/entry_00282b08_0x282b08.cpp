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

// Function: entry_00282b08
// Address: 0x282b08 - 0x282b68
void entry_00282b08_0x282b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282b08_0x282b08");
#endif

    ctx->pc = 0x282b08u;

    // 0x282b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b0c: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x282b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x282b10: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x282b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x282b14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x282b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282b18: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x282B18u;
    {
        const bool branch_taken_0x282b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282b18) {
            ctx->pc = 0x282B68u;
            return;
        }
    }
    ctx->pc = 0x282B20u;
    // 0x282b20: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x282b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x282b24: 0x24423390  addiu       $v0, $v0, 0x3390
    ctx->pc = 0x282b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x282b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b2c: 0xac22db9c  sw          $v0, -0x2464($at)
    ctx->pc = 0x282b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDB9Cu, _value); } while (0);
    // 0x282b30: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x282b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x282b34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b38: 0xac22db98  sw          $v0, -0x2468($at)
    ctx->pc = 0x282b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDB98u, _value); } while (0);
    // 0x282b3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x282b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282b40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b44: 0xa022db91  sb          $v0, -0x246F($at)
    ctx->pc = 0x282b44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB91u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDB91u, _value); } while (0);
    // 0x282b48: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x282b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x282b4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b50: 0xa022db93  sb          $v0, -0x246D($at)
    ctx->pc = 0x282b50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB93u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDB93u, _value); } while (0);
    // 0x282b54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b5c: 0xa022d4b1  sb          $v0, -0x2B4F($at)
    ctx->pc = 0x282b5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x282b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282B60u;
    {
        const bool branch_taken_0x282b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b60) {
            ctx->pc = 0x282B74u;
            return;
        }
    }
    ctx->pc = 0x282B68u;
}
