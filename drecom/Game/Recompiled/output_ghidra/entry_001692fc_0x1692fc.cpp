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

// Function: entry_001692fc
// Address: 0x1692fc - 0x169314
void entry_001692fc_0x1692fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001692fc_0x1692fc");
#endif

    ctx->pc = 0x1692fcu;

    // 0x1692fc: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1692fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169300: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x169300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x169304: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x169304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169308: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x169308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x16930c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16930Cu;
    {
        const bool branch_taken_0x16930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16930c) {
            ctx->pc = 0x169324u;
            return;
        }
    }
    ctx->pc = 0x169314u;
}
