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

// Function: entry_001a05e4
// Address: 0x1a05e4 - 0x1a0634
void entry_001a05e4_0x1a05e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a05e4_0x1a05e4");
#endif

    switch (ctx->pc) {
        case 0x1a061cu: goto label_1a061c;
        default: break;
    }

    ctx->pc = 0x1a05e4u;

    // 0x1a05e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a05e8: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a05ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a05ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a05f0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A05F0u;
    {
        const bool branch_taken_0x1a05f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05f0) {
            ctx->pc = 0x1A0654u;
            return;
        }
    }
    ctx->pc = 0x1A05F8u;
    // 0x1a05f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a05f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a05fc: 0x94222742  lhu         $v0, 0x2742($at)
    ctx->pc = 0x1a05fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D2742u));
    // 0x1a0600: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1a0600u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a0604: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a0604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0608: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a0608u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a060c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0610: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a0610u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a0614: 0xc04321a  jal         func_10C868
    ctx->pc = 0x1A0614u;
    SET_GPR_U32(ctx, 31, 0x1A061Cu);
    ctx->pc = 0x10C868u;
    {
        ctx->pc = 0x1A061Cu;
        ps2_stubs::scePadInfoMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A061Cu) { return; }
    ctx->pc = 0x1A061Cu;
label_1a061c:
    // 0x1a061c: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A061Cu;
    {
        const bool branch_taken_0x1a061c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a061c) {
            ctx->pc = 0x1A0634u;
            return;
        }
    }
    ctx->pc = 0x1A0624u;
    // 0x1a0624: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0628: 0xac202748  sw          $zero, 0x2748($at)
    ctx->pc = 0x1a0628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a062c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0630: 0xa4202740  sh          $zero, 0x2740($at)
    ctx->pc = 0x1a0630u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    ctx->pc = 0x1a0634u;
}
