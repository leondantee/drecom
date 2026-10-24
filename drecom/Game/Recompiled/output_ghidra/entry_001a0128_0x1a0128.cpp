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

// Function: entry_001a0128
// Address: 0x1a0128 - 0x1a0148
void entry_001a0128_0x1a0128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0128_0x1a0128");
#endif

    ctx->pc = 0x1a0128u;

    // 0x1a0128: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1a012c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1a0130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a0130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0134: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0138: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a0138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a013c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1a0140: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A0140u;
    {
        const bool branch_taken_0x1a0140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0140) {
            ctx->pc = 0x1A0188u;
            return;
        }
    }
    ctx->pc = 0x1A0148u;
}
