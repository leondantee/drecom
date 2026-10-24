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

// Function: caseD_9
// Address: 0x1a099c - 0x1a09dc
void caseD_9_0x1a099c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1a099c");
#endif

    switch (ctx->pc) {
        case 0x1a09c8u: goto label_1a09c8;
        default: break;
    }

    ctx->pc = 0x1a099cu;

    // 0x1a099c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a099cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a09a0: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a09a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a09a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a09a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a09a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a09ac: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a09acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a09b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a09b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a09b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a09b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a09b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a09b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a09bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a09bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a09c0: 0xc04321a  jal         func_10C868
    ctx->pc = 0x1A09C0u;
    SET_GPR_U32(ctx, 31, 0x1A09C8u);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A09C8u;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A09C8u) { return; }
    ctx->pc = 0x1A09C8u;
label_1a09c8:
    // 0x1a09c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a09c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a09cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a09ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a09d0: 0xa4222742  sh          $v0, 0x2742($at)
    ctx->pc = 0x1a09d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2742u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2742u, _value); } while (0);
    // 0x1a09d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a09d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a09d8: 0xa4202740  sh          $zero, 0x2740($at)
    ctx->pc = 0x1a09d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    ctx->pc = 0x1a09dcu;
}
