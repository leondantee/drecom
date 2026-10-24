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

// Function: entry_001cb7a8
// Address: 0x1cb7a8 - 0x1cb824
void entry_001cb7a8_0x1cb7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb7a8_0x1cb7a8");
#endif

    ctx->pc = 0x1cb7a8u;

    // 0x1cb7a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb7ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7b0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cb7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1cb7b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cb7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cb7c0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cb7c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cb7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cb7cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7d0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cb7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb7d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cb7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb7dc: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1cb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1cb7e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7e4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cb7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1cb7e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb7ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7f0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1cb7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1cb7f4: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1cb7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1cb7f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cb7f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb7fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb800: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1cb800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1cb804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cb804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cb808: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cb808u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cb80c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1cb810: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cb810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cb814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cb814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cb818: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cb818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cb81c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB81Cu;
    {
        const bool branch_taken_0x1cb81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb81c) {
            ctx->pc = 0x1CB860u;
            return;
        }
    }
    ctx->pc = 0x1CB824u;
}
