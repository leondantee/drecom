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

// Function: e2d_id5a_type01
// Address: 0x2b7fb0 - 0x2b80d4
void e2d_id5a_type01_0x2b7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5a_type01_0x2b7fb0");
#endif

    switch (ctx->pc) {
        case 0x2b8004u: goto label_2b8004;
        case 0x2b8048u: goto label_2b8048;
        case 0x2b806cu: goto label_2b806c;
        default: break;
    }

    ctx->pc = 0x2b7fb0u;

    // 0x2b7fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7fb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7fb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b7fbc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2b7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2b7fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7fc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7fc8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b7fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b7fcc: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2b7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2b7fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7fd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7fd8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b7fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b7fdc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b7fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7fe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7fe8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b7fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b7fec: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2b7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2b7ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7ff4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ff8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b7ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b7ffc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7FFCu;
    SET_GPR_U32(ctx, 31, 0x2B8004u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7FFCu, 0x2B8004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8004u;
label_2b8004:
    // 0x2b8004: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b8004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b8008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b800c: 0x0  nop
    ctx->pc = 0x2b800cu;
    // NOP
    // 0x2b8010: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8014: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x2b8014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x2b8018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b801c: 0x0  nop
    ctx->pc = 0x2b801cu;
    // NOP
    // 0x2b8020: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8024: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8028: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b8028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b802c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8030: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2b8030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8038: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b803c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b803cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8040: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B8040u;
    SET_GPR_U32(ctx, 31, 0x2B8048u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B8040u, 0x2B8048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8048u;
label_2b8048:
    // 0x2b8048: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b8048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b804c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b8050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8054: 0x0  nop
    ctx->pc = 0x2b8054u;
    // NOP
    // 0x2b8058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b8058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b805c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8060: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b8060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b8064: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B8064u;
    SET_GPR_U32(ctx, 31, 0x2B806Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B8064u, 0x2B806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B806Cu;
label_2b806c:
    // 0x2b806c: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2b806cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2b8070: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2b8070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2b8074: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8078: 0x0  nop
    ctx->pc = 0x2b8078u;
    // NOP
    // 0x2b807c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b807cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8080: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2b8080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2b8084: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2b8084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2b8088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b808c: 0x0  nop
    ctx->pc = 0x2b808cu;
    // NOP
    // 0x2b8090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8094: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8098: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2b8098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2b809c: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2b809cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2b80a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b80a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b80a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b80a8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2b80a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2b80ac: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x2b80acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2b80b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b80b4: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2b80b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b80b8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2b80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b80bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b80c0: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b80c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b80c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b80c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b80c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b80c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b80cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B80CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B80CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B80D4u;
}
