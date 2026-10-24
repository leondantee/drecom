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

// Function: entry_0031b2c8
// Address: 0x31b2c8 - 0x31b338
void entry_0031b2c8_0x31b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b2c8_0x31b2c8");
#endif

    ctx->pc = 0x31b2c8u;

    // 0x31b2c8: 0x2e210003  sltiu       $at, $s1, 0x3
    ctx->pc = 0x31b2c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b2cc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x31B2CCu;
    {
        const bool branch_taken_0x31b2cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b2cc) {
            ctx->pc = 0x31B338u;
            return;
        }
    }
    ctx->pc = 0x31B2D4u;
    // 0x31b2d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b2d8: 0xae0312a4  sw          $v1, 0x12A4($s0)
    ctx->pc = 0x31b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 3));
    // 0x31b2dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b2e0: 0xae031298  sw          $v1, 0x1298($s0)
    ctx->pc = 0x31b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 3));
    // 0x31b2e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b2e8: 0x0  nop
    ctx->pc = 0x31b2e8u;
    // NOP
    // 0x31b2ec: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x31b2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x31b2f0: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x31b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
    // 0x31b2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b2f8: 0x0  nop
    ctx->pc = 0x31b2f8u;
    // NOP
    // 0x31b2fc: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x31b2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x31b300: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x31b300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x31b304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b308: 0x0  nop
    ctx->pc = 0x31b308u;
    // NOP
    // 0x31b30c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x31b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x31b310: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31b314: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b318: 0x0  nop
    ctx->pc = 0x31b318u;
    // NOP
    // 0x31b31c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x31b31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x31b320: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b324: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x31b324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b328: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x31b328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b32c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31b32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b330: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31b330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b334: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31b334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x31b338u;
}
