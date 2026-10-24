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

// Function: entry_0025d49c
// Address: 0x25d49c - 0x25d4c0
void entry_0025d49c_0x25d49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d49c_0x25d49c");
#endif

    switch (ctx->pc) {
        case 0x25d4a4u: goto label_25d4a4;
        default: break;
    }

    ctx->pc = 0x25d49cu;

    // 0x25d49c: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x25D49Cu;
    SET_GPR_U32(ctx, 31, 0x25D4A4u);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x25D49Cu, 0x25D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4A4u;
label_25d4a4:
    // 0x25d4a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d4a8: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25d4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25d4ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d4b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x25d4b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d4b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25d4b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x25D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D4C0u;
}
