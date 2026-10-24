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

// Function: Get_new_cam_pos
// Address: 0x186f00 - 0x187030
void Get_new_cam_pos_0x186f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_new_cam_pos_0x186f00");
#endif

    switch (ctx->pc) {
        case 0x186f30u: goto label_186f30;
        case 0x186f44u: goto label_186f44;
        case 0x186f54u: goto label_186f54;
        case 0x186fd8u: goto label_186fd8;
        case 0x186ff0u: goto label_186ff0;
        case 0x18700cu: goto label_18700c;
        default: break;
    }

    ctx->pc = 0x186f00u;

    // 0x186f00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x186f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x186f04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x186f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x186f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186f0c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x186f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x186f10: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x186f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x186f14: 0xe7ac0090  swc1        $f12, 0x90($sp)
    ctx->pc = 0x186f14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x186f18: 0xe7ad0098  swc1        $f13, 0x98($sp)
    ctx->pc = 0x186f18u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x186f1c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x186f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186f20: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x186f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186f24: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x186f24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186f28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x186F28u;
    SET_GPR_U32(ctx, 31, 0x186F30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x186F28u, 0x186F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F30u;
label_186f30:
    // 0x186f30: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x186f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x186f34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x186f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186f38: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x186f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186f3c: 0xc067844  jal         func_19E110
    ctx->pc = 0x186F3Cu;
    SET_GPR_U32(ctx, 31, 0x186F44u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x186F3Cu, 0x186F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F44u;
label_186f44:
    // 0x186f44: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186f48: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x186f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186f4c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186F4Cu;
    SET_GPR_U32(ctx, 31, 0x186F54u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186F54u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186F54u) { return; }
    ctx->pc = 0x186F54u;
label_186f54:
    // 0x186f54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186f58: 0x0  nop
    ctx->pc = 0x186f58u;
    // NOP
    // 0x186f5c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x186f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x186f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186f64: 0x0  nop
    ctx->pc = 0x186f64u;
    // NOP
    // 0x186f68: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x186f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x186f6c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186f70: 0x90220348  lbu         $v0, 0x348($at)
    ctx->pc = 0x186f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480348u));
    // 0x186f74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186f78: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x186f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x186f7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186F7Cu;
    {
        const bool branch_taken_0x186f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186f7c) {
            ctx->pc = 0x186FA0u;
            goto label_186fa0;
        }
    }
    ctx->pc = 0x186F84u;
    // 0x186f84: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x186f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x186f88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x186f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x186f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186f90: 0x0  nop
    ctx->pc = 0x186f90u;
    // NOP
    // 0x186f94: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x186f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x186f98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186F98u;
    {
        const bool branch_taken_0x186f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186f98) {
            ctx->pc = 0x186FB4u;
            goto label_186fb4;
        }
    }
    ctx->pc = 0x186FA0u;
label_186fa0:
    // 0x186fa0: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x186fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x186fa4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x186fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x186fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186fac: 0x0  nop
    ctx->pc = 0x186facu;
    // NOP
    // 0x186fb0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x186fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_186fb4:
    // 0x186fb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186fbc: 0x0  nop
    ctx->pc = 0x186fbcu;
    // NOP
    // 0x186fc0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x186fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x186fc4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x186fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x186fc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x186fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186fcc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x186fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x186fd0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x186FD0u;
    SET_GPR_U32(ctx, 31, 0x186FD8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x186FD8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186FD8u) { return; }
    ctx->pc = 0x186FD8u;
label_186fd8:
    // 0x186fd8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x186fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x186fdc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x186fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186fe0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x186fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x186fe4: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x186fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x186fe8: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x186FE8u;
    SET_GPR_U32(ctx, 31, 0x186FF0u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x186FE8u, 0x186FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FF0u;
label_186ff0:
    // 0x186ff0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x186ff0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x186ff4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186FF4u;
    {
        const bool branch_taken_0x186ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ff4) {
            ctx->pc = 0x187018u;
            goto label_187018;
        }
    }
    ctx->pc = 0x186FFCu;
    // 0x186ffc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x186ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x187000: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x187000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187004: 0xc040c9e  jal         func_103278
    ctx->pc = 0x187004u;
    SET_GPR_U32(ctx, 31, 0x18700Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x18700Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18700Cu) { return; }
    ctx->pc = 0x18700Cu;
label_18700c:
    // 0x18700c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18700cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x187010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187010u;
    {
        const bool branch_taken_0x187010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187010) {
            ctx->pc = 0x18701Cu;
            goto label_18701c;
        }
    }
    ctx->pc = 0x187018u;
label_187018:
    // 0x187018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18701c:
    // 0x18701c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x18701cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187024: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x187024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x187028: 0x3e00008  jr          $ra
    ctx->pc = 0x187028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187030u;
}
