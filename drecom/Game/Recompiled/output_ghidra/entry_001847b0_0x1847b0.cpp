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

// Function: entry_001847b0
// Address: 0x1847b0 - 0x1847d8
void entry_001847b0_0x1847b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001847b0_0x1847b0");
#endif

    ctx->pc = 0x1847b0u;

    // 0x1847b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1847b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1847b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1847b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1847b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1847b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1847bc: 0x0  nop
    ctx->pc = 0x1847bcu;
    // NOP
    // 0x1847c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1847c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1847c4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1847c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1847c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1847c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1847cc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1847ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1847d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1847D0u;
    {
        const bool branch_taken_0x1847d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1847d0) {
            ctx->pc = 0x184918u;
            return;
        }
    }
    ctx->pc = 0x1847D8u;
}
