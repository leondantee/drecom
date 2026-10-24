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

// Function: entry_00329dd4
// Address: 0x329dd4 - 0x329e08
void entry_00329dd4_0x329dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329dd4_0x329dd4");
#endif

    ctx->pc = 0x329dd4u;

    // 0x329dd4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x329dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x329dd8: 0x2473a310  addiu       $s3, $v1, -0x5CF0
    ctx->pc = 0x329dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x329ddc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x329ddcu;
    { uint32_t bits = FAST_READ32(0x39A314u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329de0: 0xe6000820  swc1        $f0, 0x820($s0)
    ctx->pc = 0x329de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2080), bits); }
    // 0x329de4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x329de4u;
    { uint32_t bits = FAST_READ32(0x39A318u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329de8: 0xe6000824  swc1        $f0, 0x824($s0)
    ctx->pc = 0x329de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2084), bits); }
    // 0x329dec: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x329decu;
    { uint32_t bits = FAST_READ32(0x39A31Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329df0: 0xe6000828  swc1        $f0, 0x828($s0)
    ctx->pc = 0x329df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2088), bits); }
    // 0x329df4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x329df4u;
    { uint32_t bits = FAST_READ32(0x39A320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329df8: 0xe600082c  swc1        $f0, 0x82C($s0)
    ctx->pc = 0x329df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2092), bits); }
    // 0x329dfc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x329dfcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x329e00: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x329E00u;
    {
        const bool branch_taken_0x329e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e00) {
            ctx->pc = 0x32A118u;
            return;
        }
    }
    ctx->pc = 0x329E08u;
}
