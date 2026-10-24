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

// Function: e2d_id21_type00
// Address: 0x2b34c0 - 0x2b3598
void e2d_id21_type00_0x2b34c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id21_type00_0x2b34c0");
#endif

    switch (ctx->pc) {
        case 0x2b34d4u: goto label_2b34d4;
        case 0x2b3550u: goto label_2b3550;
        default: break;
    }

    ctx->pc = 0x2b34c0u;

    // 0x2b34c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b34c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b34c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b34c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b34c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b34cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B34CCu;
    SET_GPR_U32(ctx, 31, 0x2B34D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B34CCu, 0x2B34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B34D4u;
label_2b34d4:
    // 0x2b34d4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b34d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b34d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b34dc: 0x0  nop
    ctx->pc = 0x2b34dcu;
    // NOP
    // 0x2b34e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b34e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b34e4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2b34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2b34e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b34e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b34ec: 0x0  nop
    ctx->pc = 0x2b34ecu;
    // NOP
    // 0x2b34f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b34f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b34f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b34f8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b34f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b34fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b3500: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3504: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2b3504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3508: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b3508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b350c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b350cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3510: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3514: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b3514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b3518: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b3518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b351c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b351cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3520: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3524: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b3524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b3528: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b3528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b352c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b352cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3530: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3534: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b3534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b3538: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b3538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b353c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b353cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3544: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b3544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b3548: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B3548u;
    SET_GPR_U32(ctx, 31, 0x2B3550u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B3548u, 0x2B3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3550u;
label_2b3550:
    // 0x2b3550: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2b3550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2b3554: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b3554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b3558: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b355c: 0x0  nop
    ctx->pc = 0x2b355cu;
    // NOP
    // 0x2b3560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3564: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b3564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b356c: 0x0  nop
    ctx->pc = 0x2b356cu;
    // NOP
    // 0x2b3570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3574: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3578: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2b3578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2b357c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b3580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3584: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b3584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3588: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b3588u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b358c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b358cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b3590: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3598u;
}
