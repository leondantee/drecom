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

// Function: e2d_id2c_type00
// Address: 0x2b4450 - 0x2b4558
void e2d_id2c_type00_0x2b4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2c_type00_0x2b4450");
#endif

    switch (ctx->pc) {
        case 0x2b452cu: goto label_2b452c;
        default: break;
    }

    ctx->pc = 0x2b4450u;

    // 0x2b4450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4454: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b4454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b4458: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b4458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b445c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4468: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b4468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b446c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4474: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4478: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b4478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b447c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4488: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b4488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b448c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b448cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4494: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4498: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b4498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b449c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2b44a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b44a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b44a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b44a8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b44a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b44ac: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2b44acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b44b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b44b4: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b44b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b44b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b44bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b44bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b44c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b44c4: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2b44c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2b44c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b44cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b44ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b44d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b44d4: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b44d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b44d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b44dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b44dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b44e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b44e4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2b44e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2b44e8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b44ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b44ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b44f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b44f4: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b44f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b44f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b44fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b44fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4500: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4504: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b4504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b4508: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2b4508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2b450c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b450cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4510: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4514: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b4514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b4518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b451c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4520: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b4520u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4524: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B4524u;
    SET_GPR_U32(ctx, 31, 0x2B452Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B4524u, 0x2B452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B452Cu;
label_2b452c:
    // 0x2b452c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b452cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b4530: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b4530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b4534: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4538: 0x0  nop
    ctx->pc = 0x2b4538u;
    // NOP
    // 0x2b453c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b453cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4540: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4544: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b4544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b4548: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b4548u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b454c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b454cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4550: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4558u;
}
