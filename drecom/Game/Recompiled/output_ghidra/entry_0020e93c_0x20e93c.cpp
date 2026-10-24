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

// Function: entry_0020e93c
// Address: 0x20e93c - 0x20e9a0
void entry_0020e93c_0x20e93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e93c_0x20e93c");
#endif

    ctx->pc = 0x20e93cu;

    // 0x20e93c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e940: 0x94630094  lhu         $v1, 0x94($v1)
    ctx->pc = 0x20e940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x20e944: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20e944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20e948: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e94c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20E94Cu;
    {
        const bool branch_taken_0x20e94c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e94c) {
            ctx->pc = 0x20E9A0u;
            return;
        }
    }
    ctx->pc = 0x20E954u;
    // 0x20e954: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e958: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20e95c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e960: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20e960u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20e964: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e968: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x20e968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20e96c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20e96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20e970: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20e970u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20e974: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x20e974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x20e978: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E978u;
    {
        const bool branch_taken_0x20e978 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e978) {
            ctx->pc = 0x20E9A0u;
            return;
        }
    }
    ctx->pc = 0x20E980u;
    // 0x20e980: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20e980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e984: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e988: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x20e988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x20e98c: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x20e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x20e990: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x20e990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x20e994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e998: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e99c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x20e99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    ctx->pc = 0x20e9a0u;
}
