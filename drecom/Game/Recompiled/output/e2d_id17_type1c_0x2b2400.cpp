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

// Function: e2d_id17_type1c
// Address: 0x2b2400 - 0x2b24a4
void e2d_id17_type1c_0x2b2400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type1c_0x2b2400");
#endif

    switch (ctx->pc) {
        case 0x2b2454u: goto label_2b2454;
        default: break;
    }

    ctx->pc = 0x2b2400u;

    // 0x2b2400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2404: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b2404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b2408: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b2408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b240c: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x2b240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
    // 0x2b2410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2414: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2418: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b2418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b241c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2b241cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2b2420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2424: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2428: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b2428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b242c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2b242cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2b2430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2434: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2438: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b2438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b243c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b2440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2448: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b2448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b244c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B244Cu;
    SET_GPR_U32(ctx, 31, 0x2B2454u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B244Cu, 0x2B2454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2454u;
label_2b2454:
    // 0x2b2454: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b2454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b2458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b245c: 0x0  nop
    ctx->pc = 0x2b245cu;
    // NOP
    // 0x2b2460: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2464: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b2464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b2468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b246c: 0x0  nop
    ctx->pc = 0x2b246cu;
    // NOP
    // 0x2b2470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2474: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2478: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b247c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b247cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2480: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2484: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b2484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b2488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b248c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2490: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b2490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2494: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b2494u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2498: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b249c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B249Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B24A4u;
}
