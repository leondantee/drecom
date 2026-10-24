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

// Function: entry_0015f7b4
// Address: 0x15f7b4 - 0x15f7ec
void entry_0015f7b4_0x15f7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f7b4_0x15f7b4");
#endif

    ctx->pc = 0x15f7b4u;

    // 0x15f7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f7b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f7bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15f7c0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15f7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f7c4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15f7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f7c8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15f7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f7cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15f7d0: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f7d4: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x15f7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x15f7d8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f7dc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15f7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15f7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f7e4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x15F7E4u;
    {
        const bool branch_taken_0x15f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f7e4) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F7ECu;
}
