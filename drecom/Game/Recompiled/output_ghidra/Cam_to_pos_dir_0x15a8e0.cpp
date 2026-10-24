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

// Function: Cam_to_pos_dir
// Address: 0x15a8e0 - 0x15a9d4
void Cam_to_pos_dir_0x15a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cam_to_pos_dir_0x15a8e0");
#endif

    switch (ctx->pc) {
        case 0x15a90cu: goto label_15a90c;
        case 0x15a91cu: goto label_15a91c;
        default: break;
    }

    ctx->pc = 0x15a8e0u;

    // 0x15a8e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15a8e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15a8e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a8ec: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x15a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15a8f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15a8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15a8f4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x15a8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x15a8f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a8fc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a900: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15a900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x15a904: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15A904u;
    SET_GPR_U32(ctx, 31, 0x15A90Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15A904u, 0x15A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A90Cu;
label_15a90c:
    // 0x15a90c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x15a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a910: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x15a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15a914: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15A914u;
    SET_GPR_U32(ctx, 31, 0x15A91Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15A914u, 0x15A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A91Cu;
label_15a91c:
    // 0x15a91c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15a91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15a920: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a924: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15a924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15a928: 0xc4200afc  lwc1        $f0, 0xAFC($at)
    ctx->pc = 0x15a928u;
    { uint32_t bits = FAST_READ32(0x5D0AFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a92c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15a92cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15a930: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15a930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15a934: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a938: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15a93c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a944: 0x0  nop
    ctx->pc = 0x15a944u;
    // NOP
    // 0x15a948: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15a948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a94c: 0x0  nop
    ctx->pc = 0x15a94cu;
    // NOP
    // 0x15a950: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x15A950u;
    {
        const bool branch_taken_0x15a950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a950) {
            ctx->pc = 0x15A978u;
            goto label_15a978;
        }
    }
    ctx->pc = 0x15A958u;
    // 0x15a958: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a95c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x15a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x15a960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a968: 0x0  nop
    ctx->pc = 0x15a968u;
    // NOP
    // 0x15a96c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15a96cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15a970: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15A970u;
    {
        const bool branch_taken_0x15a970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a970) {
            ctx->pc = 0x15A9C0u;
            goto label_15a9c0;
        }
    }
    ctx->pc = 0x15A978u;
label_15a978:
    // 0x15a978: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a97c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x15a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x15a980: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a988: 0x0  nop
    ctx->pc = 0x15a988u;
    // NOP
    // 0x15a98c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15a98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a990: 0x0  nop
    ctx->pc = 0x15a990u;
    // NOP
    // 0x15a994: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15A994u;
    {
        const bool branch_taken_0x15a994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a994) {
            ctx->pc = 0x15A9B8u;
            goto label_15a9b8;
        }
    }
    ctx->pc = 0x15A99Cu;
    // 0x15a99c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x15a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x15a9a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a9a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a9a8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a9ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15a9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a9b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A9B0u;
    {
        const bool branch_taken_0x15a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9b0) {
            ctx->pc = 0x15A9C0u;
            goto label_15a9c0;
        }
    }
    ctx->pc = 0x15A9B8u;
label_15a9b8:
    // 0x15a9b8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15a9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a9bc: 0x0  nop
    ctx->pc = 0x15a9bcu;
    // NOP
label_15a9c0:
    // 0x15a9c0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15a9c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a9c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a9c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15a9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15a9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x15A9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A9D4u;
}
