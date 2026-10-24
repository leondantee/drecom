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

// Function: entry_0027e690
// Address: 0x27e690 - 0x27e700
void entry_0027e690_0x27e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e690_0x27e690");
#endif

    ctx->pc = 0x27e690u;

    // 0x27e690: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e694: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x27e694u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e698: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27e698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27e69c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27e69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27e6a0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x27E6A0u;
    {
        const bool branch_taken_0x27e6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e6a0) {
            ctx->pc = 0x27E700u;
            return;
        }
    }
    ctx->pc = 0x27E6A8u;
    // 0x27e6a8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27e6ac: 0x2463efd0  addiu       $v1, $v1, -0x1030
    ctx->pc = 0x27e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963152));
    // 0x27e6b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6b4: 0xac23d9bc  sw          $v1, -0x2644($at)
    ctx->pc = 0x27e6b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD9BCu, _value); } while (0);
    // 0x27e6b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6c0: 0xac23d9b8  sw          $v1, -0x2648($at)
    ctx->pc = 0x27e6c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD9B8u, _value); } while (0);
    // 0x27e6c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27e6c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6cc: 0xa023d9b1  sb          $v1, -0x264F($at)
    ctx->pc = 0x27e6ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD9B1u, _value); } while (0);
    // 0x27e6d0: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27e6d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6d8: 0xa023d9b3  sb          $v1, -0x264D($at)
    ctx->pc = 0x27e6d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD9B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD9B3u, _value); } while (0);
    // 0x27e6dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e6e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e6e4: 0xa023d5f1  sb          $v1, -0x2A0F($at)
    ctx->pc = 0x27e6e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x27e6e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e6ec: 0x8c32f9e4  lw          $s2, -0x61C($at)
    ctx->pc = 0x27e6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27e6f0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x27e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x27e6f4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x27e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x27e6f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E6F8u;
    {
        const bool branch_taken_0x27e6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e6f8) {
            ctx->pc = 0x27E70Cu;
            return;
        }
    }
    ctx->pc = 0x27E700u;
}
