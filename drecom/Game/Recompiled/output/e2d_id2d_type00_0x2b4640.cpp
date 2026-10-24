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

// Function: e2d_id2d_type00
// Address: 0x2b4640 - 0x2b4714
void e2d_id2d_type00_0x2b4640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2d_type00_0x2b4640");
#endif

    ctx->pc = 0x2b4640u;

    // 0x2b4640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4644: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b4644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b4648: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b464c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b464cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4650: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4654: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b4654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b4658: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b465c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b465cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4660: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4664: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b4664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b4668: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b466c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b466cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4670: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4674: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b4674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b4678: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x2b4678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x2b467c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b467cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4680: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4684: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b4684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b4688: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b4688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b468c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b468cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4690: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4694: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b4698: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2b4698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2b469c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b469cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b46a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b46a4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b46a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b46a8: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b46ac: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b46acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b46b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b46b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b46b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b46b8: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2b46b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2b46bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b46c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b46c4: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b46c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b46c8: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b46c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b46cc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b46ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b46d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b46d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b46d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b46d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b46d8: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b46d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b46dc: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2b46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b46e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b46e4: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b46e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b46e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b46ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b46f0: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b46f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b46f4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b46f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b46f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b46fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b46fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4700: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4704: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b4704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b4708: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b470c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B470Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4714u;
}
