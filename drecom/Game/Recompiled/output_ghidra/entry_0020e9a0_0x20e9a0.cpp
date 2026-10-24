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

// Function: entry_0020e9a0
// Address: 0x20e9a0 - 0x20e9f0
void entry_0020e9a0_0x20e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e9a0_0x20e9a0");
#endif

    ctx->pc = 0x20e9a0u;

    // 0x20e9a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9a4: 0x94630094  lhu         $v1, 0x94($v1)
    ctx->pc = 0x20e9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x20e9a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20e9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20e9ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20e9b0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20E9B0u;
    {
        const bool branch_taken_0x20e9b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e9b0) {
            ctx->pc = 0x20E9F0u;
            return;
        }
    }
    ctx->pc = 0x20E9B8u;
    // 0x20e9b8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x20e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x20e9bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e9c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9c4: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x20e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e9c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20e9cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9d0: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x20e9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e9d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9d8: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x20e9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e9dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e9e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9e4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x20e9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x20e9e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9ec: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20e9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x20e9f0u;
}
