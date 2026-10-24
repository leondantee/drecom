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

// Function: entry_0025e674
// Address: 0x25e674 - 0x25e6a4
void entry_0025e674_0x25e674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e674_0x25e674");
#endif

    ctx->pc = 0x25e674u;

    // 0x25e674: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x25e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x25e678: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25E678u;
    {
        const bool branch_taken_0x25e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e678) {
            ctx->pc = 0x25E6A4u;
            return;
        }
    }
    ctx->pc = 0x25E680u;
    // 0x25e680: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x25e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e684: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25e688: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e68c: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x25e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e690: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25e694: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25e694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25e698: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x25e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e69c: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25e6a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->pc = 0x25e6a4u;
}
