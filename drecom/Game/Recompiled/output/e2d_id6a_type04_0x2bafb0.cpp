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

// Function: e2d_id6a_type04
// Address: 0x2bafb0 - 0x2bb084
void e2d_id6a_type04_0x2bafb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id6a_type04_0x2bafb0");
#endif

    switch (ctx->pc) {
        case 0x2bb04cu: goto label_2bb04c;
        default: break;
    }

    ctx->pc = 0x2bafb0u;

    // 0x2bafb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bafb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bafb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bafb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bafb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bafbc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bafc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bafc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bafc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bafc8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bafc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bafcc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bafccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bafd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bafd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bafd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bafd8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bafd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bafdc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bafe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bafe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bafe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bafe8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bafe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bafec: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bafecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2baff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2baff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baff4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2baff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baff8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2baff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2baffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2baffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb000: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb004: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2bb004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb00c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb010: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bb010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb014: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x2bb014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x2bb018: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2bb018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2bb01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb020: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb024: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bb024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bb028: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2bb028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2bb02c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x2bb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2bb030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bb030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bb034: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2bb034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2bb038: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bb038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bb03c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb040: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bb040u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb044: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BB044u;
    SET_GPR_U32(ctx, 31, 0x2BB04Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BB044u, 0x2BB04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB04Cu;
label_2bb04c:
    // 0x2bb04c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2bb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2bb050: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bb050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb054: 0x0  nop
    ctx->pc = 0x2bb054u;
    // NOP
    // 0x2bb058: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb05c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bb05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bb060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb064: 0x0  nop
    ctx->pc = 0x2bb064u;
    // NOP
    // 0x2bb068: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb06c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb070: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bb070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bb074: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb074u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb07c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB084u;
}
