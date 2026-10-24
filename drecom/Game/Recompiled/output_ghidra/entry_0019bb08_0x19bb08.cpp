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

// Function: entry_0019bb08
// Address: 0x19bb08 - 0x19bb58
void entry_0019bb08_0x19bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb08_0x19bb08");
#endif

    ctx->pc = 0x19bb08u;

    // 0x19bb08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb0c: 0x94630094  lhu         $v1, 0x94($v1)
    ctx->pc = 0x19bb0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x19bb10: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19bb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19bb14: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19bb18: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19BB18u;
    {
        const bool branch_taken_0x19bb18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bb18) {
            ctx->pc = 0x19BB58u;
            return;
        }
    }
    ctx->pc = 0x19BB20u;
    // 0x19bb20: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x19bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x19bb24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19bb24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bb28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb2c: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19bb30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19bb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19bb34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb38: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x19bb38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x19bb3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb40: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x19bb40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19bb44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19bb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bb48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb4c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x19bb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x19bb50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb54: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x19bb54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19bb58u;
}
