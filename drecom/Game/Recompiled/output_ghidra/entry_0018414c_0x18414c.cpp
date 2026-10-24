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

// Function: entry_0018414c
// Address: 0x18414c - 0x184174
void entry_0018414c_0x18414c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018414c_0x18414c");
#endif

    ctx->pc = 0x18414cu;

    // 0x18414c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18414cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184150: 0xe420f248  swc1        $f0, -0xDB8($at)
    ctx->pc = 0x184150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F248u, _value); } while (0); }
    // 0x184154: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x184154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x184158: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184158u;
    {
        const bool branch_taken_0x184158 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x184158) {
            ctx->pc = 0x184174u;
            return;
        }
    }
    ctx->pc = 0x184160u;
    // 0x184160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184164: 0x0  nop
    ctx->pc = 0x184164u;
    // NOP
    // 0x184168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18416c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18416Cu;
    {
        const bool branch_taken_0x18416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18416c) {
            ctx->pc = 0x184190u;
            return;
        }
    }
    ctx->pc = 0x184174u;
}
