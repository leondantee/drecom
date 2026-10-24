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

// Function: entry_001621f8
// Address: 0x1621f8 - 0x162268
void entry_001621f8_0x1621f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001621f8_0x1621f8");
#endif

    ctx->pc = 0x1621f8u;

    // 0x1621f8: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1621f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1621fc: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x1621fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162200: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162204: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x162204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x162208: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x162208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16220c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16220cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x162210: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x162210u;
    {
        const bool branch_taken_0x162210 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x162210) {
            ctx->pc = 0x162268u;
            return;
        }
    }
    ctx->pc = 0x162218u;
    // 0x162218: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x162218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16221c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x162220: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x162220u;
    {
        const bool branch_taken_0x162220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162220) {
            ctx->pc = 0x162268u;
            return;
        }
    }
    ctx->pc = 0x162228u;
    // 0x162228: 0x8e0213f0  lw          $v0, 0x13F0($s0)
    ctx->pc = 0x162228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5104)));
    // 0x16222c: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16222Cu;
    {
        const bool branch_taken_0x16222c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x16222c) {
            ctx->pc = 0x162268u;
            return;
        }
    }
    ctx->pc = 0x162234u;
    // 0x162234: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x162234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x162238: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x162238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x16223c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16223Cu;
    {
        const bool branch_taken_0x16223c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16223c) {
            ctx->pc = 0x162268u;
            return;
        }
    }
    ctx->pc = 0x162244u;
    // 0x162244: 0xc6211288  lwc1        $f1, 0x1288($s1)
    ctx->pc = 0x162244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162248: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x162248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16224c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16224cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162250: 0x0  nop
    ctx->pc = 0x162250u;
    // NOP
    // 0x162254: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162254u;
    {
        const bool branch_taken_0x162254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162254) {
            ctx->pc = 0x162268u;
            return;
        }
    }
    ctx->pc = 0x16225Cu;
    // 0x16225c: 0xc6201288  lwc1        $f0, 0x1288($s1)
    ctx->pc = 0x16225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162260: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x162260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x162264: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x162264u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x162268u;
}
