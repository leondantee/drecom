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

// Function: e2d_id5a_type00
// Address: 0x2b7e80 - 0x2b7fa4
void e2d_id5a_type00_0x2b7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5a_type00_0x2b7e80");
#endif

    switch (ctx->pc) {
        case 0x2b7ed4u: goto label_2b7ed4;
        case 0x2b7f18u: goto label_2b7f18;
        case 0x2b7f3cu: goto label_2b7f3c;
        default: break;
    }

    ctx->pc = 0x2b7e80u;

    // 0x2b7e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7e84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7e88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b7e8c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b7e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b7e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7e94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7e98: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b7e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b7e9c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2b7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2b7ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7ea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ea8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b7eac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b7eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7eb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7eb8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b7ebc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2b7ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7ec4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ec8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b7ecc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7ECCu;
    SET_GPR_U32(ctx, 31, 0x2B7ED4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7ECCu, 0x2B7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7ED4u;
label_2b7ed4:
    // 0x2b7ed4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b7ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7edc: 0x0  nop
    ctx->pc = 0x2b7edcu;
    // NOP
    // 0x2b7ee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b7ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7ee4: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x2b7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x2b7ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7eec: 0x0  nop
    ctx->pc = 0x2b7eecu;
    // NOP
    // 0x2b7ef0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b7ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b7ef4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ef8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b7ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b7efc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7f00: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2b7f00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7f08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7f0c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7f10: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7F10u;
    SET_GPR_U32(ctx, 31, 0x2B7F18u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7F10u, 0x2B7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F18u;
label_2b7f18:
    // 0x2b7f18: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b7f1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b7f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b7f20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7f24: 0x0  nop
    ctx->pc = 0x2b7f24u;
    // NOP
    // 0x2b7f28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7f2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7f30: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b7f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b7f34: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B7F34u;
    SET_GPR_U32(ctx, 31, 0x2B7F3Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B7F34u, 0x2B7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F3Cu;
label_2b7f3c:
    // 0x2b7f3c: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2b7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2b7f40: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2b7f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2b7f44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7f48: 0x0  nop
    ctx->pc = 0x2b7f48u;
    // NOP
    // 0x2b7f4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b7f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7f50: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2b7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2b7f54: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2b7f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2b7f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7f5c: 0x0  nop
    ctx->pc = 0x2b7f5cu;
    // NOP
    // 0x2b7f60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b7f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b7f64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7f68: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2b7f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2b7f6c: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2b7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2b7f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7f74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7f78: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2b7f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2b7f7c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x2b7f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2b7f80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7f84: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2b7f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7f88: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2b7f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b7f8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7f90: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b7f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7f94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7f94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7f98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7FA4u;
}
