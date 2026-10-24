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

// Function: entry_0026ad40
// Address: 0x26ad40 - 0x26ad70
void entry_0026ad40_0x26ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ad40_0x26ad40");
#endif

    ctx->pc = 0x26ad40u;

    // 0x26ad40: 0xc6011b54  lwc1        $f1, 0x1B54($s0)
    ctx->pc = 0x26ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ad44: 0x3c02ba83  lui         $v0, 0xBA83
    ctx->pc = 0x26ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47747 << 16));
    // 0x26ad48: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x26ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x26ad4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ad4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ad50: 0x0  nop
    ctx->pc = 0x26ad50u;
    // NOP
    // 0x26ad54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ad54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad58: 0x0  nop
    ctx->pc = 0x26ad58u;
    // NOP
    // 0x26ad5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26AD5Cu;
    {
        const bool branch_taken_0x26ad5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad5c) {
            ctx->pc = 0x26AD70u;
            return;
        }
    }
    ctx->pc = 0x26AD64u;
    // 0x26ad64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ad64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ad68: 0x0  nop
    ctx->pc = 0x26ad68u;
    // NOP
    // 0x26ad6c: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x26ad6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    ctx->pc = 0x26ad70u;
}
