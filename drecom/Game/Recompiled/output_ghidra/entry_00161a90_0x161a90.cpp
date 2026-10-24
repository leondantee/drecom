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

// Function: entry_00161a90
// Address: 0x161a90 - 0x161aa0
void entry_00161a90_0x161a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a90_0x161a90");
#endif

    ctx->pc = 0x161a90u;

    // 0x161a90: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x161a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a94: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161a98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x161a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161a9c: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x161aa0u;
}
