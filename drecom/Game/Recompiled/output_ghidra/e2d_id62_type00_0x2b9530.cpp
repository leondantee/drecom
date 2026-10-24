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

// Function: e2d_id62_type00
// Address: 0x2b9530 - 0x2b95f4
void e2d_id62_type00_0x2b9530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type00_0x2b9530");
#endif

    ctx->pc = 0x2b9530u;

    // 0x2b9530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9534: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9538: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b953c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b953cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9540: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9544: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9548: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b954c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b954cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9550: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9554: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9558: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b955c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b955cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9560: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9564: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9568: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b9568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b956c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b956cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9570: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9574: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9578: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x2b9578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x2b957c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b957cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9580: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9584: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9588: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2b9588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b958c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9590: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9594: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x2b9594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x2b9598: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b9598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b959c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b959cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b95a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b95a4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b95a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b95a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b95ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b95acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b95b0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b95b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b95b4: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x2b95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x2b95b8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b95b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b95bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b95bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b95c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b95c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b95c4: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b95c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b95c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b95cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b95d0: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b95d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b95d4: 0x3c03bcf5  lui         $v1, 0xBCF5
    ctx->pc = 0x2b95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48373 << 16));
    // 0x2b95d8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b95d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b95dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b95dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b95e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b95e4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b95e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b95e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b95e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b95ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B95ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B95ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B95F4u;
}
