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

// Function: entry_0032feb4
// Address: 0x32feb4 - 0x32fef0
void entry_0032feb4_0x32feb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032feb4_0x32feb4");
#endif

    ctx->pc = 0x32feb4u;

    // 0x32feb4: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x32feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
    // 0x32feb8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x32feb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32febc: 0x0  nop
    ctx->pc = 0x32febcu;
    // NOP
    // 0x32fec0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x32fec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x32fec4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32fec8: 0xe42026f0  swc1        $f0, 0x26F0($at)
    ctx->pc = 0x32fec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8926F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8926F0u, _value); } while (0); }
    // 0x32fecc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x32feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x32fed0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x32fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x32fed4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32FED4u;
    {
        const bool branch_taken_0x32fed4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32fed4) {
            ctx->pc = 0x32FEF0u;
            return;
        }
    }
    ctx->pc = 0x32FEDCu;
    // 0x32fedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32fedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32fee0: 0x0  nop
    ctx->pc = 0x32fee0u;
    // NOP
    // 0x32fee4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32fee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32fee8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32FEE8u;
    {
        const bool branch_taken_0x32fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fee8) {
            ctx->pc = 0x32FF14u;
            return;
        }
    }
    ctx->pc = 0x32FEF0u;
}
