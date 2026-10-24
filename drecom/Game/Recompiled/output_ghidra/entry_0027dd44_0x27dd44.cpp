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

// Function: entry_0027dd44
// Address: 0x27dd44 - 0x27dd68
void entry_0027dd44_0x27dd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027dd44_0x27dd44");
#endif

    ctx->pc = 0x27dd44u;

    // 0x27dd44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dd48: 0xc4211b50  lwc1        $f1, 0x1B50($at)
    ctx->pc = 0x27dd48u;
    { uint32_t bits = FAST_READ32(0x621B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd4c: 0x3c023d61  lui         $v0, 0x3D61
    ctx->pc = 0x27dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15713 << 16));
    // 0x27dd50: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x27dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x27dd54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd58: 0x0  nop
    ctx->pc = 0x27dd58u;
    // NOP
    // 0x27dd5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27dd5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27dd60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dd64: 0xe4201b50  swc1        $f0, 0x1B50($at)
    ctx->pc = 0x27dd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B50u, _value); } while (0); }
    ctx->pc = 0x27dd68u;
}
