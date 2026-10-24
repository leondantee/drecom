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

// Function: e2d_id17_type0d
// Address: 0x2b1ac0 - 0x2b1b78
void e2d_id17_type0d_0x2b1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type0d_0x2b1ac0");
#endif

    ctx->pc = 0x2b1ac0u;

    // 0x2b1ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1ac4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b1ac8: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x2b1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x2b1acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1ad0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1ad4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b1ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b1ad8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b1ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b1adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1ae0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1ae4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b1ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b1ae8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b1aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1af0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1af4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b1af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b1af8: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x2b1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x2b1afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1b04: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b1b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b1b08: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b1b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1b14: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1b18: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x2b1b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2b1b1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1b20: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b1b24: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x2b1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x2b1b28: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b1b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b1b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1b34: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b1b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b1b38: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x2b1b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x2b1b3c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b1b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b1b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1b48: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2b1b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2b1b4c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b1b50: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b1b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b1b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1b5c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b1b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b1b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1b64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b1b68: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b1b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1b6c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b1b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b1b70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1B78u;
}
