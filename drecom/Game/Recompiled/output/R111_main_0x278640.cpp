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

// Function: R111_main
// Address: 0x278640 - 0x2786b4
void R111_main_0x278640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R111_main_0x278640");
#endif

    ctx->pc = 0x278640u;

    // 0x278640: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278644: 0x8c231a80  lw          $v1, 0x1A80($at)
    ctx->pc = 0x278644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A80u));
    // 0x278648: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x278648u;
    {
        const bool branch_taken_0x278648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x278648) {
            ctx->pc = 0x278698u;
            goto label_278698;
        }
    }
    ctx->pc = 0x278650u;
    // 0x278650: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x278650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x278654: 0xc421dce0  lwc1        $f1, -0x2320($at)
    ctx->pc = 0x278654u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278658: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x278658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
    // 0x27865c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27865cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278660: 0x0  nop
    ctx->pc = 0x278660u;
    // NOP
    // 0x278664: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x278664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278668: 0x0  nop
    ctx->pc = 0x278668u;
    // NOP
    // 0x27866c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x27866Cu;
    {
        const bool branch_taken_0x27866c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27866c) {
            ctx->pc = 0x278688u;
            goto label_278688;
        }
    }
    ctx->pc = 0x278674u;
    // 0x278674: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x278674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27867c: 0xa0230e04  sb          $v1, 0xE04($at)
    ctx->pc = 0x27867cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    // 0x278680: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x278680u;
    {
        const bool branch_taken_0x278680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278680) {
            ctx->pc = 0x2786ACu;
            goto label_2786ac;
        }
    }
    ctx->pc = 0x278688u;
label_278688:
    // 0x278688: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27868c: 0xa0200e04  sb          $zero, 0xE04($at)
    ctx->pc = 0x27868cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    // 0x278690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x278690u;
    {
        const bool branch_taken_0x278690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278690) {
            ctx->pc = 0x2786ACu;
            goto label_2786ac;
        }
    }
    ctx->pc = 0x278698u;
label_278698:
    // 0x278698: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27869c: 0x8c231a80  lw          $v1, 0x1A80($at)
    ctx->pc = 0x27869cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A80u));
    // 0x2786a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2786a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2786a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2786a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2786a8: 0xac231a80  sw          $v1, 0x1A80($at)
    ctx->pc = 0x2786a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A80u, _value); } while (0);
label_2786ac:
    // 0x2786ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2786ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2786ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2786B4u;
}
