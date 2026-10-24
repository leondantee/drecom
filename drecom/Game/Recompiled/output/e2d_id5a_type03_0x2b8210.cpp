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

// Function: e2d_id5a_type03
// Address: 0x2b8210 - 0x2b8338
void e2d_id5a_type03_0x2b8210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5a_type03_0x2b8210");
#endif

    switch (ctx->pc) {
        case 0x2b8264u: goto label_2b8264;
        case 0x2b82a8u: goto label_2b82a8;
        case 0x2b82ccu: goto label_2b82cc;
        default: break;
    }

    ctx->pc = 0x2b8210u;

    // 0x2b8210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8214: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b8218: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b8218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b821c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b8220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8224: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8228: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b8228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b822c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b822cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b8230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8234: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8238: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b8238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b823c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2b823cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2b8240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8248: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b8248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b824c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b8250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8258: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b8258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b825c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B825Cu;
    SET_GPR_U32(ctx, 31, 0x2B8264u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B825Cu, 0x2B8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8264u;
label_2b8264:
    // 0x2b8264: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b8264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b8268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b826c: 0x0  nop
    ctx->pc = 0x2b826cu;
    // NOP
    // 0x2b8270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8274: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x2b8274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x2b8278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b827c: 0x0  nop
    ctx->pc = 0x2b827cu;
    // NOP
    // 0x2b8280: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8288: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b8288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b828c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8290: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2b8290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8298: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b829c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b829cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b82a0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B82A0u;
    SET_GPR_U32(ctx, 31, 0x2B82A8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B82A0u, 0x2B82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82A8u;
label_2b82a8:
    // 0x2b82a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b82ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b82acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b82b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b82b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b82b4: 0x0  nop
    ctx->pc = 0x2b82b4u;
    // NOP
    // 0x2b82b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b82b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b82bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b82c0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b82c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b82c4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B82C4u;
    SET_GPR_U32(ctx, 31, 0x2B82CCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B82C4u, 0x2B82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82CCu;
label_2b82cc:
    // 0x2b82cc: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2b82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2b82d0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2b82d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2b82d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b82d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b82d8: 0x0  nop
    ctx->pc = 0x2b82d8u;
    // NOP
    // 0x2b82dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b82dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b82e0: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2b82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2b82e4: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2b82e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2b82e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b82e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b82ec: 0x0  nop
    ctx->pc = 0x2b82ecu;
    // NOP
    // 0x2b82f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b82f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b82f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b82f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b82f8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2b82f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2b82fc: 0x3c03458c  lui         $v1, 0x458C
    ctx->pc = 0x2b82fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17804 << 16));
    // 0x2b8300: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2b8300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2b8304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b830c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2b830cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2b8310: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2b8310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b8314: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8318: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2b8318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b831c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2b831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b8320: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8324: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b8324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8328: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b8328u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b832c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b832cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8330: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8338u;
}
