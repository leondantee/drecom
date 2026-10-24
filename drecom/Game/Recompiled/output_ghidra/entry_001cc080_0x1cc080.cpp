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

// Function: entry_001cc080
// Address: 0x1cc080 - 0x1cc0fc
void entry_001cc080_0x1cc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc080_0x1cc080");
#endif

    ctx->pc = 0x1cc080u;

    // 0x1cc080: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc084: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cc084u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cc088: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1cc088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1cc08c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cc08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cc090: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc094: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cc094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cc098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc09c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc0a0: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x1cc0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x1cc0a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc0a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc0ac: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1cc0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1cc0b0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1cc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1cc0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc0b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc0bc: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1cc0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1cc0c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc0c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc0c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cc0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc0cc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1cc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cc0d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc0d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cc0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc0d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc0dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cc0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc0e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc0e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cc0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc0e8: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1cc0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1cc0ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc0f0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cc0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1cc0f4: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x1CC0F4u;
    {
        const bool branch_taken_0x1cc0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc0f4) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC0FCu;
}
