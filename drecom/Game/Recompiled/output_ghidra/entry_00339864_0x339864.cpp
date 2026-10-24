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

// Function: entry_00339864
// Address: 0x339864 - 0x3398f4
void entry_00339864_0x339864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339864_0x339864");
#endif

    ctx->pc = 0x339864u;

    // 0x339864: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339868: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33986c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33986cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339870: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339874: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339878: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x339878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33987c: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x33987cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339880: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339884: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x339884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x339888: 0x97a20028  lhu         $v0, 0x28($sp)
    ctx->pc = 0x339888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33988c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339890: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x339890u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x339894: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x339894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339898: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x33989c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x33989cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x3398a0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x3398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x3398a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3398a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3398a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3398a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3398ac: 0x97a20028  lhu         $v0, 0x28($sp)
    ctx->pc = 0x3398acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3398b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3398b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3398b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3398b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3398b8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3398b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3398bc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3398bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3398c0: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3398c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3398c4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3398c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3398c8: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3398c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3398cc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3398ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3398d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3398d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3398d4: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x3398d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3398d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3398d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3398dc: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3398dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3398e0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3398E0u;
    {
        const bool branch_taken_0x3398e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3398e0) {
            ctx->pc = 0x3398F4u;
            return;
        }
    }
    ctx->pc = 0x3398E8u;
    // 0x3398e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3398E8u;
    {
        const bool branch_taken_0x3398e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3398e8) {
            ctx->pc = 0x3398F4u;
            return;
        }
    }
    ctx->pc = 0x3398F0u;
    // 0x3398f0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3398f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x3398f4u;
}
