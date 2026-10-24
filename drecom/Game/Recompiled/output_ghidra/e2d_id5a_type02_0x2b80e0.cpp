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

// Function: e2d_id5a_type02
// Address: 0x2b80e0 - 0x2b8204
void e2d_id5a_type02_0x2b80e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5a_type02_0x2b80e0");
#endif

    switch (ctx->pc) {
        case 0x2b8134u: goto label_2b8134;
        case 0x2b8178u: goto label_2b8178;
        case 0x2b819cu: goto label_2b819c;
        default: break;
    }

    ctx->pc = 0x2b80e0u;

    // 0x2b80e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b80e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b80e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b80e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b80e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b80e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b80ec: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2b80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2b80f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b80f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b80f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b80f8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b80f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b80fc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2b80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2b8100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8104: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8108: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b8108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b810c: 0x3c0242a8  lui         $v0, 0x42A8
    ctx->pc = 0x2b810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17064 << 16));
    // 0x2b8110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8118: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b8118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b811c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2b8120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8124: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8128: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b8128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b812c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B812Cu;
    SET_GPR_U32(ctx, 31, 0x2B8134u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B812Cu, 0x2B8134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8134u;
label_2b8134:
    // 0x2b8134: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b8134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b8138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b813c: 0x0  nop
    ctx->pc = 0x2b813cu;
    // NOP
    // 0x2b8140: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8144: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x2b8144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x2b8148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b814c: 0x0  nop
    ctx->pc = 0x2b814cu;
    // NOP
    // 0x2b8150: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8154: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8158: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b8158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b815c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8160: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2b8160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8168: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b816c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b816cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b8170: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B8170u;
    SET_GPR_U32(ctx, 31, 0x2B8178u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B8170u, 0x2B8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8178u;
label_2b8178:
    // 0x2b8178: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b8178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b817c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b817cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b8180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8184: 0x0  nop
    ctx->pc = 0x2b8184u;
    // NOP
    // 0x2b8188: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b8188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b818c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8190: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b8190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b8194: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B8194u;
    SET_GPR_U32(ctx, 31, 0x2B819Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B8194u, 0x2B819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B819Cu;
label_2b819c:
    // 0x2b819c: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2b819cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2b81a0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2b81a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2b81a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b81a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b81a8: 0x0  nop
    ctx->pc = 0x2b81a8u;
    // NOP
    // 0x2b81ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b81acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b81b0: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2b81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2b81b4: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2b81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2b81b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b81b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b81bc: 0x0  nop
    ctx->pc = 0x2b81bcu;
    // NOP
    // 0x2b81c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b81c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b81c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b81c8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2b81c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2b81cc: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2b81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2b81d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b81d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b81d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b81d8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2b81d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2b81dc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x2b81dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2b81e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b81e4: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2b81e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b81e8: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2b81e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b81ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b81f0: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b81f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b81f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b81f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b81f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b81f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b81fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B81FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B81FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8204u;
}
