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

// Function: Sce_sleep
// Address: 0x212590 - 0x2125e8
void Sce_sleep_0x212590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_sleep_0x212590");
#endif

    switch (ctx->pc) {
        case 0x2125d0u: goto label_2125d0;
        case 0x2125d8u: goto label_2125d8;
        default: break;
    }

    ctx->pc = 0x212590u;

    // 0x212590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212594: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x212594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x212598: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x212598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x21259c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x21259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2125a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2125a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2125a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2125a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2125a8: 0x8c2296d0  lw          $v0, -0x6930($at)
    ctx->pc = 0x2125a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6196D0u));
    // 0x2125ac: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x2125acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2125b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2125b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2125b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2125b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2125b8: 0x8c2296d0  lw          $v0, -0x6930($at)
    ctx->pc = 0x2125b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6196D0u));
    // 0x2125bc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x2125bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2125c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2125c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2125c4: 0x8c24fb98  lw          $a0, -0x468($at)
    ctx->pc = 0x2125c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFB98u));
    // 0x2125c8: 0xc084a90  jal         func_212A40
    ctx->pc = 0x2125C8u;
    SET_GPR_U32(ctx, 31, 0x2125D0u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x2125D0u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2125D0u) { return; }
    ctx->pc = 0x2125D0u;
label_2125d0:
    // 0x2125d0: 0xc084a50  jal         func_212940
    ctx->pc = 0x2125D0u;
    SET_GPR_U32(ctx, 31, 0x2125D8u);
    ctx->pc = 0x212940u;
    {
        ctx->pc = 0x2125D8u;
        ps2_syscalls::SleepThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2125D8u) { return; }
    ctx->pc = 0x2125D8u;
label_2125d8:
    // 0x2125d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2125d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2125dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2125dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2125e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2125E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2125E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2125E8u;
}
