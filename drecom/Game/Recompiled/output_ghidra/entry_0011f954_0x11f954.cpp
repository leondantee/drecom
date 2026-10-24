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

// Function: entry_0011f954
// Address: 0x11f954 - 0x11f9b8
void entry_0011f954_0x11f954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f954_0x11f954");
#endif

    ctx->pc = 0x11f954u;

    // 0x11f954: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x11f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11f958: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x11f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11f95c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x11f95cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11f960: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x11f960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11f964: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f968: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x11f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x11f96c: 0x2812  mflo        $a1
    ctx->pc = 0x11f96cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x11f970: 0x2010  mfhi        $a0
    ctx->pc = 0x11f970u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x11f974: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11f974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11f978: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11f978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11f97c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11f97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11f980: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f984: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x11f984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x11f988: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x11f988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x11f98c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x11f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11f990: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f994: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x11f994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x11f998: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x11f998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11f99c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11f99cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11f9a0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11f9a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11f9a4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x11F9A4u;
    {
        const bool branch_taken_0x11f9a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9A4u;
        // 0x11f9a8: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9a4) {
            ctx->pc = 0x11F9D8u;
            return;
        }
    }
    ctx->pc = 0x11F9ACu;
    // 0x11f9ac: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x11f9acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x11f9b0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x11f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x11f9b4: 0x0  nop
    ctx->pc = 0x11f9b4u;
    // NOP
    ctx->pc = 0x11f9b8u;
}
