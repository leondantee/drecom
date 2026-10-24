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

// Function: entry_001e1700
// Address: 0x1e1700 - 0x1e174c
void entry_001e1700_0x1e1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1700_0x1e1700");
#endif

    ctx->pc = 0x1e1700u;

    // 0x1e1700: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e1700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1704: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e170c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e170cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e1710: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1714: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1e1714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1e1718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e171c: 0x0  nop
    ctx->pc = 0x1e171cu;
    // NOP
    // 0x1e1720: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e1720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e1724: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e1724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e1728: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e172c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1e172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1e1730: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1730u;
    {
        const bool branch_taken_0x1e1730 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e1730) {
            ctx->pc = 0x1E174Cu;
            return;
        }
    }
    ctx->pc = 0x1E1738u;
    // 0x1e1738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e173c: 0x0  nop
    ctx->pc = 0x1e173cu;
    // NOP
    // 0x1e1740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1744: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1744u;
    {
        const bool branch_taken_0x1e1744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1744) {
            ctx->pc = 0x1E1768u;
            return;
        }
    }
    ctx->pc = 0x1E174Cu;
}
