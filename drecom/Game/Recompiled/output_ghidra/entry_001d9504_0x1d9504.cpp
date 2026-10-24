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

// Function: entry_001d9504
// Address: 0x1d9504 - 0x1d955c
void entry_001d9504_0x1d9504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9504_0x1d9504");
#endif

    ctx->pc = 0x1d9504u;

    // 0x1d9504: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d9504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d9508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d950c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d950cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1d9510: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1d9510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1d9514: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1d9514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1d9518: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x1d9518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x1d951c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9520: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9524: 0xac22c560  sw          $v0, -0x3AA0($at)
    ctx->pc = 0x1d9524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x1d9528: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d952c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9530: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1d9530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1d9534: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d9534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9538: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d953c: 0xac22c568  sw          $v0, -0x3A98($at)
    ctx->pc = 0x1d953cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC568u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC568u, _value); } while (0);
    // 0x1d9540: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9544: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9548: 0xac22c56c  sw          $v0, -0x3A94($at)
    ctx->pc = 0x1d9548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC56Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC56Cu, _value); } while (0);
    // 0x1d954c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1d954cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d9550: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9554: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d9554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d9558: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d9558u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1d955cu;
}
