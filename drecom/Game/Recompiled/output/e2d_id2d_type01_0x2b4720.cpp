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

// Function: e2d_id2d_type01
// Address: 0x2b4720 - 0x2b47e8
void e2d_id2d_type01_0x2b4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2d_type01_0x2b4720");
#endif

    ctx->pc = 0x2b4720u;

    // 0x2b4720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4724: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b4724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b4728: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b472c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b472cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4730: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4734: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b4734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b4738: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b473c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b473cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4740: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4744: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b4744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b4748: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b474c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b474cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4750: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4754: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b4754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b4758: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b475c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b475cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4760: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4764: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b4764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b4768: 0x3c0344b1  lui         $v1, 0x44B1
    ctx->pc = 0x2b4768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17585 << 16));
    // 0x2b476c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b4770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4774: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4778: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b477c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2b477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b4780: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4784: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b4784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b4788: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x2b4788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
    // 0x2b478c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b478cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b4790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4794: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4798: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b4798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b479c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b479cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b47a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b47a4: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b47a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b47a8: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x2b47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x2b47ac: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2b47acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2b47b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b47b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b47b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b47b8: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b47b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b47bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b47c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b47c4: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b47c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b47c8: 0x3c033d8f  lui         $v1, 0x3D8F
    ctx->pc = 0x2b47c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15759 << 16));
    // 0x2b47cc: 0x34635c29  ori         $v1, $v1, 0x5C29
    ctx->pc = 0x2b47ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23593);
    // 0x2b47d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b47d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b47d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b47d8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b47d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b47dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b47dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b47e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B47E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B47E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B47E8u;
}
