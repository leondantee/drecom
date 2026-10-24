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

// Function: entry_00328dfc
// Address: 0x328dfc - 0x328e50
void entry_00328dfc_0x328dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328dfc_0x328dfc");
#endif

    switch (ctx->pc) {
        case 0x328e08u: goto label_328e08;
        default: break;
    }

    ctx->pc = 0x328dfcu;

    // 0x328dfc: 0xe60c28f0  swc1        $f12, 0x28F0($s0)
    ctx->pc = 0x328dfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10480), bits); }
    // 0x328e00: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x328E00u;
    SET_GPR_U32(ctx, 31, 0x328E08u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x328E00u, 0x328E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E08u;
label_328e08:
    // 0x328e08: 0xae0228dc  sw          $v0, 0x28DC($s0)
    ctx->pc = 0x328e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10460), GPR_U32(ctx, 2));
    // 0x328e0c: 0xae0228c8  sw          $v0, 0x28C8($s0)
    ctx->pc = 0x328e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10440), GPR_U32(ctx, 2));
    // 0x328e10: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x328e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e14: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x328e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e18: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x328e18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e1c: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x328e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e20: 0xa20028b9  sb          $zero, 0x28B9($s0)
    ctx->pc = 0x328e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e24: 0xa20028c0  sb          $zero, 0x28C0($s0)
    ctx->pc = 0x328e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e28: 0xa2002909  sb          $zero, 0x2909($s0)
    ctx->pc = 0x328e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10505), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e2c: 0xa2002905  sb          $zero, 0x2905($s0)
    ctx->pc = 0x328e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10501), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e30: 0xa2002906  sb          $zero, 0x2906($s0)
    ctx->pc = 0x328e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10502), (uint8_t)GPR_U32(ctx, 0));
    // 0x328e34: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x328e34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328e44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x328e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x328e48: 0x3e00008  jr          $ra
    ctx->pc = 0x328E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328E50u;
}
