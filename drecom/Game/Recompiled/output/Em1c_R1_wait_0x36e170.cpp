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

// Function: Em1c_R1_wait
// Address: 0x36e170 - 0x36e260
void Em1c_R1_wait_0x36e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_wait_0x36e170");
#endif

    switch (ctx->pc) {
        case 0x36e1c4u: goto label_36e1c4;
        case 0x36e1f8u: goto label_36e1f8;
        case 0x36e218u: goto label_36e218;
        case 0x36e238u: goto label_36e238;
        case 0x36e244u: goto label_36e244;
        case 0x36e250u: goto label_36e250;
        default: break;
    }

    ctx->pc = 0x36e170u;

    // 0x36e170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e174: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36e178: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36e178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36e17c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e180: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36e180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e184: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36e184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36e188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e18c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x36E18Cu;
    {
        const bool branch_taken_0x36e18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e18c) {
            ctx->pc = 0x36E228u;
            goto label_36e228;
        }
    }
    ctx->pc = 0x36E194u;
    // 0x36e194: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E194u;
    {
        const bool branch_taken_0x36e194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e194) {
            ctx->pc = 0x36E1A4u;
            goto label_36e1a4;
        }
    }
    ctx->pc = 0x36E19Cu;
    // 0x36e19c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x36E19Cu;
    {
        const bool branch_taken_0x36e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e19c) {
            ctx->pc = 0x36E250u;
            goto label_36e250;
        }
    }
    ctx->pc = 0x36E1A4u;
label_36e1a4:
    // 0x36e1a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e1b0: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x36e1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x36e1b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e1b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e1bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E1BCu;
    SET_GPR_U32(ctx, 31, 0x36E1C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E1BCu, 0x36E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1C4u;
label_36e1c4:
    // 0x36e1c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x36e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36e1cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36E1CCu;
    {
        const bool branch_taken_0x36e1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e1cc) {
            ctx->pc = 0x36E218u;
            goto label_36e218;
        }
    }
    ctx->pc = 0x36E1D4u;
    // 0x36e1d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36e1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e1dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36e1e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36e1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36e1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e1e8: 0x0  nop
    ctx->pc = 0x36e1e8u;
    // NOP
    // 0x36e1ec: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x36e1ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36e1f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36E1F0u;
    SET_GPR_U32(ctx, 31, 0x36E1F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36E1F0u, 0x36E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E1F8u;
label_36e1f8:
    // 0x36e1f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e1fc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36e1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36e200: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x36e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x36e204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36e204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36e208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36e208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36e20c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e210: 0xc0db724  jal         func_36DC90
    ctx->pc = 0x36E210u;
    SET_GPR_U32(ctx, 31, 0x36E218u);
    ctx->pc = 0x36DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC90u, 0x36E210u, 0x36E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E218u;
label_36e218:
    // 0x36e218: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36e218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e21c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e224: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36e228:
    // 0x36e228: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e22c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e22cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e230: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E230u;
    SET_GPR_U32(ctx, 31, 0x36E238u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E230u, 0x36E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E238u;
label_36e238:
    // 0x36e238: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e23c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E23Cu;
    SET_GPR_U32(ctx, 31, 0x36E244u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E23Cu, 0x36E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E244u;
label_36e244:
    // 0x36e244: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e248: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36E248u;
    SET_GPR_U32(ctx, 31, 0x36E250u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36E248u, 0x36E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E250u;
label_36e250:
    // 0x36e250: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e254: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36e258: 0x3e00008  jr          $ra
    ctx->pc = 0x36E258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E260u;
}
