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

// Function: entry_00125238
// Address: 0x125238 - 0x125258
void entry_00125238_0x125238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125238_0x125238");
#endif

    ctx->pc = 0x125238u;

    // 0x125238: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x125238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12523c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x12523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125244: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x125244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x125248: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x125248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12524c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x12524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125250: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125254: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x125254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->pc = 0x125258u;
}
