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

// Function: entry_002baaf0
// Address: 0x2baaf0 - 0x2bab1c
void entry_002baaf0_0x2baaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002baaf0_0x2baaf0");
#endif

    ctx->pc = 0x2baaf0u;

    // 0x2baaf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2baaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2baaf4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baaf8: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2baaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2baafc: 0x3c033f93  lui         $v1, 0x3F93
    ctx->pc = 0x2baafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16275 << 16));
    // 0x2bab00: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bab00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bab04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bab04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab08: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bab0c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2bab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2bab10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bab14: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAB1Cu;
}
