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

// Function: entry_001b5024
// Address: 0x1b5024 - 0x1b503c
void entry_001b5024_0x1b5024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5024_0x1b5024");
#endif

    ctx->pc = 0x1b5024u;

    // 0x1b5024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5028: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b5028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b502c: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x1b502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5030: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b5030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1b5034: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B5034u;
    {
        const bool branch_taken_0x1b5034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5034) {
            ctx->pc = 0x1B5088u;
            return;
        }
    }
    ctx->pc = 0x1B503Cu;
}
