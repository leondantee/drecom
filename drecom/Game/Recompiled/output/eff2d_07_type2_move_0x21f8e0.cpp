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

// Function: eff2d_07_type2_move
// Address: 0x21f8e0 - 0x21f924
void eff2d_07_type2_move_0x21f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_07_type2_move_0x21f8e0");
#endif

    ctx->pc = 0x21f8e0u;

    // 0x21f8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f8e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x21f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x21f8e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f8ec: 0x8c6401f8  lw          $a0, 0x1F8($v1)
    ctx->pc = 0x21f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x21f8f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f8f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f8f8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F8F8u;
    {
        const bool branch_taken_0x21f8f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21f8f8) {
            ctx->pc = 0x21F918u;
            goto label_21f918;
        }
    }
    ctx->pc = 0x21F900u;
    // 0x21f900: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x21f900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f904: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x21f904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x21f908: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21f908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f90c: 0xc48000f4  lwc1        $f0, 0xF4($a0)
    ctx->pc = 0x21f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21f910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21f914: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x21f914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_21f918:
    // 0x21f918: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x21f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f91c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F924u;
}
