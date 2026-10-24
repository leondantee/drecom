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

// Function: e2d_ida3_type01
// Address: 0x2bf030 - 0x2bf118
void e2d_ida3_type01_0x2bf030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_ida3_type01_0x2bf030");
#endif

    switch (ctx->pc) {
        case 0x2bf0d4u: goto label_2bf0d4;
        default: break;
    }

    ctx->pc = 0x2bf030u;

    // 0x2bf030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf034: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bf034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bf038: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bf038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bf03c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf044: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf048: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bf048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bf04c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf054: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf058: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bf058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bf05c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf064: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf068: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bf068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bf06c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2bf06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2bf070: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2bf070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2bf074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf078: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf07c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bf07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bf080: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bf080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bf084: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf088: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2bf088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf08c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2bf08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2bf090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf098: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2bf098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2bf09c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bf09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf0a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf0a8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2bf0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2bf0ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bf0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf0b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf0b8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2bf0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2bf0bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bf0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf0c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf0c8: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2bf0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2bf0cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BF0CCu;
    SET_GPR_U32(ctx, 31, 0x2BF0D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BF0CCu, 0x2BF0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0D4u;
label_2bf0d4:
    // 0x2bf0d4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bf0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bf0d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bf0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf0dc: 0x0  nop
    ctx->pc = 0x2bf0dcu;
    // NOP
    // 0x2bf0e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bf0e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bf0e4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2bf0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2bf0e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf0e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf0ec: 0x0  nop
    ctx->pc = 0x2bf0ecu;
    // NOP
    // 0x2bf0f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bf0f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bf0f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf0f8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bf0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bf0fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bf0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bf100: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf104: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2bf104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bf108: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bf108u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf10c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf10cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf110: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF118u;
}
