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

// Function: entry_0013dbf4
// Address: 0x13dbf4 - 0x13dc10
void entry_0013dbf4_0x13dbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dbf4_0x13dbf4");
#endif

    ctx->pc = 0x13dbf4u;

    // 0x13dbf4: 0xc420bd10  lwc1        $f0, -0x42F0($at)
    ctx->pc = 0x13dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294950160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dbf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13dbfc: 0xe4600140  swc1        $f0, 0x140($v1)
    ctx->pc = 0x13dbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    // 0x13dc00: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x13dc00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13dc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13dc08: 0x3e00008  jr          $ra
    ctx->pc = 0x13DC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DC10u;
}
