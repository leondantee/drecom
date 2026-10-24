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

// Function: entry_0017cacc
// Address: 0x17cacc - 0x17cadc
void entry_0017cacc_0x17cacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cacc_0x17cacc");
#endif

    ctx->pc = 0x17caccu;

    // 0x17cacc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x17caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cad0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x17cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cad4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17cad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cad8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17cad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x17cadcu;
}
