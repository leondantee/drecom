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

// Function: entry_00329cd4
// Address: 0x329cd4 - 0x329d34
void entry_00329cd4_0x329cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329cd4_0x329cd4");
#endif

    ctx->pc = 0x329cd4u;

    // 0x329cd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329cd8: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x329cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329cdc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x329ce0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329ce4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x329CE4u;
    {
        const bool branch_taken_0x329ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ce4) {
            ctx->pc = 0x329D34u;
            return;
        }
    }
    ctx->pc = 0x329CECu;
    // 0x329cec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329cf4: 0x0  nop
    ctx->pc = 0x329cf4u;
    // NOP
    // 0x329cf8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x329cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x329cfc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d04: 0x0  nop
    ctx->pc = 0x329d04u;
    // NOP
    // 0x329d08: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x329d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x329d0c: 0x3c034377  lui         $v1, 0x4377
    ctx->pc = 0x329d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17271 << 16));
    // 0x329d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d14: 0x0  nop
    ctx->pc = 0x329d14u;
    // NOP
    // 0x329d18: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x329d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x329d1c: 0x3c034284  lui         $v1, 0x4284
    ctx->pc = 0x329d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17028 << 16));
    // 0x329d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d24: 0x0  nop
    ctx->pc = 0x329d24u;
    // NOP
    // 0x329d28: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x329d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x329d2c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x329D2Cu;
    {
        const bool branch_taken_0x329d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d2c) {
            ctx->pc = 0x329DD4u;
            return;
        }
    }
    ctx->pc = 0x329D34u;
}
