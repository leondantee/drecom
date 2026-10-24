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

// Function: entry_0037b3c4
// Address: 0x37b3c4 - 0x37b408
void entry_0037b3c4_0x37b3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b3c4_0x37b3c4");
#endif

    ctx->pc = 0x37b3c4u;

    // 0x37b3c4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b3c8: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b3cc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x37b3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37b3d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37B3D0u;
    {
        const bool branch_taken_0x37b3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b3d0) {
            ctx->pc = 0x37B408u;
            return;
        }
    }
    ctx->pc = 0x37B3D8u;
    // 0x37b3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b3dc: 0xae235dc8  sw          $v1, 0x5DC8($s1)
    ctx->pc = 0x37b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 3));
    // 0x37b3e0: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x37b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x37b3e4: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
    // 0x37b3e8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b3ec: 0x8c2605a0  lw          $a2, 0x5A0($at)
    ctx->pc = 0x37b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37b3f0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x37b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x37b3f4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x37b3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37b3f8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b3fc: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37b3fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x37b400: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37B400u;
    {
        const bool branch_taken_0x37b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b400) {
            ctx->pc = 0x37B46Cu;
            return;
        }
    }
    ctx->pc = 0x37B408u;
}
