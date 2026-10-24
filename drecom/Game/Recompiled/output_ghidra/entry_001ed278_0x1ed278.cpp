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

// Function: entry_001ed278
// Address: 0x1ed278 - 0x1ed2b8
void entry_001ed278_0x1ed278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed278_0x1ed278");
#endif

    ctx->pc = 0x1ed278u;

    // 0x1ed278: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed27c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed280: 0x84630078  lh          $v1, 0x78($v1)
    ctx->pc = 0x1ed280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1ed284: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed288: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed288u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed28c: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1ed28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1ed290: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ed290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ed294: 0x8c230aa0  lw          $v1, 0xAA0($at)
    ctx->pc = 0x1ed294u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AA0u));
    // 0x1ed298: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED298u;
    {
        const bool branch_taken_0x1ed298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed298) {
            ctx->pc = 0x1ED2B8u;
            return;
        }
    }
    ctx->pc = 0x1ED2A0u;
    // 0x1ed2a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed2a4: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed2a8: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ed2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ed2ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed2b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed2b4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed2b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x1ed2b8u;
}
