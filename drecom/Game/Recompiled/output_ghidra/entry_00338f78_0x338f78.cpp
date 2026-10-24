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

// Function: entry_00338f78
// Address: 0x338f78 - 0x339028
void entry_00338f78_0x338f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338f78_0x338f78");
#endif

    ctx->pc = 0x338f78u;

    // 0x338f78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338f7c: 0x8c305438  lw          $s0, 0x5438($at)
    ctx->pc = 0x338f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x895438u));
    // 0x338f80: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x338f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338f84: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338f88: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x338f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x338f8c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x338f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x338f90: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x338f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x338f94: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x338f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x338f98: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x338f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338f9c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338fa0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338fa4: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338fac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x338fb0: 0x83a40068  lb          $a0, 0x68($sp)
    ctx->pc = 0x338fb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x338fb4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338fb8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338fbc: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338fc4: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x338fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x338fc8: 0x83a40070  lb          $a0, 0x70($sp)
    ctx->pc = 0x338fc8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338fcc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338fd0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338fd4: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338fdc: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x338fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x338fe0: 0x87a40078  lh          $a0, 0x78($sp)
    ctx->pc = 0x338fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x338fe4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x338fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x338fe8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x338fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x338fec: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x338fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x338ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338ff4: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x338ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x338ff8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338ffc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x338ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339000: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339004: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339008: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33900c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339010: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339014: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339014u;
    {
        const bool branch_taken_0x339014 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339014) {
            ctx->pc = 0x339028u;
            return;
        }
    }
    ctx->pc = 0x33901Cu;
    // 0x33901c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33901Cu;
    {
        const bool branch_taken_0x33901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33901c) {
            ctx->pc = 0x339028u;
            return;
        }
    }
    ctx->pc = 0x339024u;
    // 0x339024: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x339028u;
}
