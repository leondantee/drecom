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

// Function: entry_001614d4
// Address: 0x1614d4 - 0x161500
void entry_001614d4_0x1614d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001614d4_0x1614d4");
#endif

    ctx->pc = 0x1614d4u;

    // 0x1614d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1614d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1614d8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1614d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1614dc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1614dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1614e0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1614e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1614e4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1614e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1614e8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1614e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1614ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1614ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1614f0: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x1614f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1614f4: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1614f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1614f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1614F8u;
    {
        const bool branch_taken_0x1614f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614f8) {
            ctx->pc = 0x161588u;
            return;
        }
    }
    ctx->pc = 0x161500u;
}
