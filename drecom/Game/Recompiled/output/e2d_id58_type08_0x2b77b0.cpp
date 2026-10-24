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

// Function: e2d_id58_type08
// Address: 0x2b77b0 - 0x2b78d4
void e2d_id58_type08_0x2b77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type08_0x2b77b0");
#endif

    switch (ctx->pc) {
        case 0x2b784cu: goto label_2b784c;
        default: break;
    }

    ctx->pc = 0x2b77b0u;

    // 0x2b77b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b77b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b77b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b77b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b77bc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b77c0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b77c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b77c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b77c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b77c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b77cc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b77ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b77d0: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x2b77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x2b77d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b77d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b77d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b77dc: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b77dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b77e0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b77e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b77e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b77e8: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b77ec: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2b77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2b77f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b77f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b77f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b77f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b77f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b77fc: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2b77fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2b7800: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b7800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b7804: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b7804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b7808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b780c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7810: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x2b7810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x2b7814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7818: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b781c: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2b781cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7820: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b7820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b7824: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7828: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b7828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b782c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b7830: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7834: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2b7834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b783c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7840: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7844: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7844u;
    SET_GPR_U32(ctx, 31, 0x2B784Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7844u, 0x2B784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B784Cu;
label_2b784c:
    // 0x2b784c: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b784cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7850: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b7854: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7858: 0x0  nop
    ctx->pc = 0x2b7858u;
    // NOP
    // 0x2b785c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b785cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7864: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b7864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b7868: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b7868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b786c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b786cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7870: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7874: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b7874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b7878: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b7878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b787c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b787cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7884: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b7884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b7888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b7888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b788c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7890: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b7890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b7894: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b7894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b789c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b78a0: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b78a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b78a4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b78a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b78a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b78ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b78acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b78b0: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b78b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b78b4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b78b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b78b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b78bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b78c0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b78c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b78c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b78c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b78c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b78c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b78cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B78CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B78CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B78D4u;
}
