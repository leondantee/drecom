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

// Function: srp_id06_type01
// Address: 0x2bfc90 - 0x2bfd14
void srp_id06_type01_0x2bfc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id06_type01_0x2bfc90");
#endif

    ctx->pc = 0x2bfc90u;

    // 0x2bfc90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfc94: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bfc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bfc98: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2bfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2bfc9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfc9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfca0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfca4: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2bfca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2bfca8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2bfca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2bfcac: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bfcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bfcb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfcb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfcb4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfcb8: 0xe46002e0  swc1        $f0, 0x2E0($v1)
    ctx->pc = 0x2bfcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x2bfcbc: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2bfcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2bfcc0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bfcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bfcc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfcc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfcc8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfccc: 0xe46002e4  swc1        $f0, 0x2E4($v1)
    ctx->pc = 0x2bfcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 740), bits); }
    // 0x2bfcd0: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2bfcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2bfcd4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bfcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bfcd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfcd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfcdc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfce0: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x2bfce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
    // 0x2bfce4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfce8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfcec: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2bfcecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfcf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfcf4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfcf8: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2bfcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfcfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bfcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfd00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bfd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfd04: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2bfd04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bfd08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bfd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFD14u;
}
