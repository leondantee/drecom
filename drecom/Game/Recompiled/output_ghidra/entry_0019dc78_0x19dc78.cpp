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

// Function: entry_0019dc78
// Address: 0x19dc78 - 0x19dc80
void entry_0019dc78_0x19dc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc78_0x19dc78");
#endif

    ctx->pc = 0x19dc78u;

    // 0x19dc78: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x19dc78u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x19dc7c: 0x3821  addu        $a3, $zero, $zero
    ctx->pc = 0x19dc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    ctx->pc = 0x19dc80u;
}
