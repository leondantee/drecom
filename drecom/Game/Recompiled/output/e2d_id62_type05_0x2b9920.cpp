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

// Function: e2d_id62_type05
// Address: 0x2b9920 - 0x2b99e4
void e2d_id62_type05_0x2b9920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type05_0x2b9920");
#endif

    ctx->pc = 0x2b9920u;

    // 0x2b9920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9924: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9928: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b992c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b992cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9930: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9934: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9938: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b993c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b993cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9940: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9944: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9948: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b994c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b994cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9950: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9954: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9958: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b995c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b995cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9960: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9964: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9968: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x2b9968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x2b996c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b996cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9970: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9974: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9978: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2b9978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b997c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9980: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9984: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x2b9984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x2b9988: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b9988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b998c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b998cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9990: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9994: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b9998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b999c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b99a0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b99a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b99a4: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x2b99a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x2b99a8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b99a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b99ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b99acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b99b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b99b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b99b4: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b99b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b99b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b99b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b99bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b99c0: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b99c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b99c4: 0x3c03bcf5  lui         $v1, 0xBCF5
    ctx->pc = 0x2b99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48373 << 16));
    // 0x2b99c8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b99c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b99cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b99ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b99d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b99d4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b99d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b99d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b99d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b99dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B99DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B99DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B99E4u;
}
