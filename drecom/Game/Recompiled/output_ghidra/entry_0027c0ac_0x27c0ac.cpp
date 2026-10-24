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

// Function: entry_0027c0ac
// Address: 0x27c0ac - 0x27c0e0
void entry_0027c0ac_0x27c0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c0ac_0x27c0ac");
#endif

    ctx->pc = 0x27c0acu;

    // 0x27c0ac: 0x3c0246c3  lui         $v0, 0x46C3
    ctx->pc = 0x27c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18115 << 16));
    // 0x27c0b0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x27c0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x27c0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c0b8: 0x0  nop
    ctx->pc = 0x27c0b8u;
    // NOP
    // 0x27c0bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x27c0bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27c0c0: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x27c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x27c0c4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27c0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x27c0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c0cc: 0x0  nop
    ctx->pc = 0x27c0ccu;
    // NOP
    // 0x27c0d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27c0d4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27c0d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27C0D8u;
    {
        const bool branch_taken_0x27c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c0d8) {
            ctx->pc = 0x27C0F8u;
            return;
        }
    }
    ctx->pc = 0x27C0E0u;
}
