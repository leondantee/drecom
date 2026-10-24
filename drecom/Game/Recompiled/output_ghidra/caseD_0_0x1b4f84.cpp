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

// Function: caseD_0
// Address: 0x1b4f84 - 0x1b4f9c
void caseD_0_0x1b4f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1b4f84");
#endif

    ctx->pc = 0x1b4f84u;

    // 0x1b4f84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4f88: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b4f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4f8c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b4f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4f90: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b4f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1b4f94: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B4F94u;
    {
        const bool branch_taken_0x1b4f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4f94) {
            ctx->pc = 0x1B5088u;
            return;
        }
    }
    ctx->pc = 0x1B4F9Cu;
}
