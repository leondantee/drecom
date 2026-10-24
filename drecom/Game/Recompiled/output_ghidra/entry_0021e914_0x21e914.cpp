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

// Function: entry_0021e914
// Address: 0x21e914 - 0x21e930
void entry_0021e914_0x21e914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e914_0x21e914");
#endif

    ctx->pc = 0x21e914u;

    // 0x21e914: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e918: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21e918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21e91c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21e91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21e920: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e924: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x21e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e928: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21e928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21e92c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x21e92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    ctx->pc = 0x21e930u;
}
