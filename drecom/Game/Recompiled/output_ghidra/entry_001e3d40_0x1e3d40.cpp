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

// Function: entry_001e3d40
// Address: 0x1e3d40 - 0x1e3d8c
void entry_001e3d40_0x1e3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3d40_0x1e3d40");
#endif

    ctx->pc = 0x1e3d40u;

    // 0x1e3d40: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3d44: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e3d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e3d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e3d4c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e3d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e3d50: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e3d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3d54: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1e3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1e3d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d5c: 0x0  nop
    ctx->pc = 0x1e3d5cu;
    // NOP
    // 0x1e3d60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e3d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e3d64: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e3d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e3d68: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e3d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3d6c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1e3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1e3d70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3D70u;
    {
        const bool branch_taken_0x1e3d70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e3d70) {
            ctx->pc = 0x1E3D8Cu;
            return;
        }
    }
    ctx->pc = 0x1E3D78u;
    // 0x1e3d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d7c: 0x0  nop
    ctx->pc = 0x1e3d7cu;
    // NOP
    // 0x1e3d80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e3d84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3D84u;
    {
        const bool branch_taken_0x1e3d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3d84) {
            ctx->pc = 0x1E3DA8u;
            return;
        }
    }
    ctx->pc = 0x1E3D8Cu;
}
