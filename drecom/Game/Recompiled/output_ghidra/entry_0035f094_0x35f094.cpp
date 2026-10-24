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

// Function: entry_0035f094
// Address: 0x35f094 - 0x35f128
void entry_0035f094_0x35f094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f094_0x35f094");
#endif

    ctx->pc = 0x35f094u;

    // 0x35f094: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35f094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35f098: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35f098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35f09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0a4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x35f0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x35f0a8: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35f0ac: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35f0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35f0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0b8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x35f0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x35f0bc: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35f0c0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35f0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35f0c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f0c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0cc: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x35f0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x35f0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0d8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x35f0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x35f0dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f0dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0e4: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35f0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x35f0e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f0ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0f0: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x35f0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x35f0f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35f0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f0fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f100: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f104: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35f104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35f108: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f10c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35f10cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f110: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f114: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35f114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f118: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f11c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35f11cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f120: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f124: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35f124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x35f128u;
}
