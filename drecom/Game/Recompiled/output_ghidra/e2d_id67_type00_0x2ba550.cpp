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

// Function: e2d_id67_type00
// Address: 0x2ba550 - 0x2ba5f0
void e2d_id67_type00_0x2ba550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id67_type00_0x2ba550");
#endif

    ctx->pc = 0x2ba550u;

    // 0x2ba550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba554: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ba554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ba558: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ba558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba55c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba560: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba564: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ba564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ba568: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ba568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba56c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba56cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba570: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba574: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ba574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ba578: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ba578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba57c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba57cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba580: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba584: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ba584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ba588: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ba588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba590: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba594: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ba594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ba598: 0x3c034402  lui         $v1, 0x4402
    ctx->pc = 0x2ba598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17410 << 16));
    // 0x2ba59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba5a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba5a4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ba5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ba5a8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ba5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ba5ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba5b0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ba5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ba5b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ba5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ba5b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba5bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba5c0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ba5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ba5c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ba5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba5c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba5cc: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2ba5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba5d0: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2ba5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2ba5d4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2ba5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2ba5d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba5dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba5e0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2ba5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2ba5e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ba5e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ba5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA5F0u;
}
