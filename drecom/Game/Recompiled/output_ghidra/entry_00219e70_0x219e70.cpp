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

// Function: entry_00219e70
// Address: 0x219e70 - 0x219f0c
void entry_00219e70_0x219e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219e70_0x219e70");
#endif

    ctx->pc = 0x219e70u;

    // 0x219e70: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219e74: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219e78: 0x12030031  beq         $s0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x219E78u;
    {
        const bool branch_taken_0x219e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x219e78) {
            ctx->pc = 0x219F40u;
            return;
        }
    }
    ctx->pc = 0x219E80u;
    // 0x219e80: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x219e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219e84: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x219e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x219e88: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x219e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219e8c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x219e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x219e90: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x219e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219e94: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x219e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x219e98: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x219e9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219ea0: 0x0  nop
    ctx->pc = 0x219ea0u;
    // NOP
    // 0x219ea4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x219ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x219ea8: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x219ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x219eac: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x219eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x219eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219eb4: 0x0  nop
    ctx->pc = 0x219eb4u;
    // NOP
    // 0x219eb8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x219eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x219ebc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x219ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x219ec0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x219ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219ec4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x219ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x219ec8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x219ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219ecc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x219eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x219ed0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x219ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x219ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219ed8: 0x0  nop
    ctx->pc = 0x219ed8u;
    // NOP
    // 0x219edc: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x219edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x219ee0: 0x3c03bf73  lui         $v1, 0xBF73
    ctx->pc = 0x219ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49011 << 16));
    // 0x219ee4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x219ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x219ee8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x219ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219eec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x219ef0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x219EF0u;
    {
        const bool branch_taken_0x219ef0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x219ef0) {
            ctx->pc = 0x219F0Cu;
            return;
        }
    }
    ctx->pc = 0x219EF8u;
    // 0x219ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219efc: 0x0  nop
    ctx->pc = 0x219efcu;
    // NOP
    // 0x219f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219F04u;
    {
        const bool branch_taken_0x219f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219f04) {
            ctx->pc = 0x219F28u;
            return;
        }
    }
    ctx->pc = 0x219F0Cu;
}
