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

// Function: srp_id03_type0b
// Address: 0x2bfaa0 - 0x2bfb24
void srp_id03_type0b_0x2bfaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id03_type0b_0x2bfaa0");
#endif

    ctx->pc = 0x2bfaa0u;

    // 0x2bfaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfaa4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bfaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bfaa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfaac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfab0: 0xa064036a  sb          $a0, 0x36A($v1)
    ctx->pc = 0x2bfab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfab4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2bfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bfab8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfabc: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2bfabcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfac4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfac8: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2bfac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfacc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfad0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfad4: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2bfad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfadc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfae0: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2bfae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfae8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfaec: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2bfaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfaf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfaf4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfaf8: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2bfaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfafc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2bfafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bfb00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfb04: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2bfb04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2bfb08: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bfb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bfb0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfb0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfb10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfb14: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2bfb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2bfb18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bfb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFB24u;
}
