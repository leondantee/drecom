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

// Function: e2d_id85_type01
// Address: 0x2bd740 - 0x2bd844
void e2d_id85_type01_0x2bd740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id85_type01_0x2bd740");
#endif

    switch (ctx->pc) {
        case 0x2bd7e0u: goto label_2bd7e0;
        default: break;
    }

    ctx->pc = 0x2bd740u;

    // 0x2bd740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd744: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bd744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bd748: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bd748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bd74c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2bd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2bd750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd754: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd758: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bd758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bd75c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2bd75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2bd760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd764: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd768: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bd768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bd76c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2bd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2bd770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd774: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd778: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bd778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bd77c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2bd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2bd780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd784: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd788: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bd788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bd78c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd794: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd798: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2bd798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2bd79c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2bd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2bd7a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bd7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bd7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd7a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd7ac: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2bd7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2bd7b0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2bd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2bd7b4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bd7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bd7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd7bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd7c0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2bd7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2bd7c4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2bd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2bd7c8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2bd7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2bd7cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd7d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd7d4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bd7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bd7d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BD7D8u;
    SET_GPR_U32(ctx, 31, 0x2BD7E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BD7D8u, 0x2BD7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7E0u;
label_2bd7e0:
    // 0x2bd7e0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bd7e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd7e8: 0x0  nop
    ctx->pc = 0x2bd7e8u;
    // NOP
    // 0x2bd7ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd7f0: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x2bd7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x2bd7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd7f8: 0x0  nop
    ctx->pc = 0x2bd7f8u;
    // NOP
    // 0x2bd7fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd800: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd804: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bd804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bd808: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bd808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bd80c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd810: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bd810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bd814: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bd814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd818: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd81c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2bd81cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bd820: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2bd820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2bd824: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2bd824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2bd828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd82c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd830: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bd830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bd834: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bd834u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd838: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bd838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd83c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD844u;
}
