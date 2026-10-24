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

// Function: Em06_R1_br_hover_move
// Address: 0x1991e0 - 0x199248
void Em06_R1_br_hover_move_0x1991e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_br_hover_move_0x1991e0");
#endif

    ctx->pc = 0x1991e0u;

    // 0x1991e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1991e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1991e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1991e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1991e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1991e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1991ec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1991ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1991f0: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x1991f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x1991f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1991f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1991f8: 0x0  nop
    ctx->pc = 0x1991f8u;
    // NOP
    // 0x1991fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1991fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199200: 0x0  nop
    ctx->pc = 0x199200u;
    // NOP
    // 0x199204: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x199204u;
    {
        const bool branch_taken_0x199204 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199204) {
            ctx->pc = 0x19923Cu;
            goto label_19923c;
        }
    }
    ctx->pc = 0x19920Cu;
    // 0x19920c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199210: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199214: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x199214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x199218: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x199218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19921c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199220: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x199220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x199224: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x199224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199228: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x199228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19922c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x19922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199230: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x199230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x199234: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x199234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199238: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x199238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_19923c:
    // 0x19923c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19923cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x199240: 0x3e00008  jr          $ra
    ctx->pc = 0x199240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199248u;
}
