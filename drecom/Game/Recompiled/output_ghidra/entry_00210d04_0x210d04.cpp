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

// Function: entry_00210d04
// Address: 0x210d04 - 0x210d3c
void entry_00210d04_0x210d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210d04_0x210d04");
#endif

    ctx->pc = 0x210d04u;

    // 0x210d04: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x210d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210d08: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x210d08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x210d0c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x210d0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x210d10: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x210d10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x210d14: 0x24c7fe34  addiu       $a3, $a2, -0x1CC
    ctx->pc = 0x210d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966836));
    // 0x210d18: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x210d18u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210d1c: 0x0  nop
    ctx->pc = 0x210d1cu;
    // NOP
    // 0x210d20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x210d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x210d24: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x210d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x210d28: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x210d28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x210d2c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x210d2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210d30: 0x0  nop
    ctx->pc = 0x210d30u;
    // NOP
    // 0x210d34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x210d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210d38: 0xe7a00514  swc1        $f0, 0x514($sp)
    ctx->pc = 0x210d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
    ctx->pc = 0x210d3cu;
}
