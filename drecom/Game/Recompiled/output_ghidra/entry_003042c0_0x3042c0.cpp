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

// Function: entry_003042c0
// Address: 0x3042c0 - 0x304390
void entry_003042c0_0x3042c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003042c0_0x3042c0");
#endif

    switch (ctx->pc) {
        case 0x3042d0u: goto label_3042d0;
        case 0x3042dcu: goto label_3042dc;
        case 0x304358u: goto label_304358;
        case 0x304388u: goto label_304388;
        default: break;
    }

    ctx->pc = 0x3042c0u;

    // 0x3042c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3042c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3042c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3042c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3042C8u;
    SET_GPR_U32(ctx, 31, 0x3042D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3042C8u, 0x3042D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042D0u;
label_3042d0:
    // 0x3042d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3042d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3042D4u;
    SET_GPR_U32(ctx, 31, 0x3042DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3042D4u, 0x3042DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042DCu;
label_3042dc:
    // 0x3042dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042e0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3042e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3042e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3042e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3042e8: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3042e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x3042ec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3042ECu;
    {
        const bool branch_taken_0x3042ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3042ec) {
            ctx->pc = 0x304390u;
            return;
        }
    }
    ctx->pc = 0x3042F4u;
    // 0x3042f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042f8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x3042f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3042fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304300: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x304300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304304: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x304304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304308: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x304308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x30430c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304310: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x304310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304314: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x304314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x304318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30431c: 0x0  nop
    ctx->pc = 0x30431cu;
    // NOP
    // 0x304320: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x304320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x304324: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x304324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x304328: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30432c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30432cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x304330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304334: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x304334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x304338: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x304338u;
    {
        const bool branch_taken_0x304338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304338) {
            ctx->pc = 0x304390u;
            return;
        }
    }
    ctx->pc = 0x304340u;
    // 0x304340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304344: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304348: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x304348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x30434c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x30434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x304350: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x304350u;
    SET_GPR_U32(ctx, 31, 0x304358u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x304350u, 0x304358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304358u;
label_304358:
    // 0x304358: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30435c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x30435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304364: 0x0  nop
    ctx->pc = 0x304364u;
    // NOP
    // 0x304368: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x304368u;
    {
        const bool branch_taken_0x304368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x304368) {
            ctx->pc = 0x304390u;
            return;
        }
    }
    ctx->pc = 0x304370u;
    // 0x304370: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304378: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x304378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x30437c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x30437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x304380: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x304380u;
    SET_GPR_U32(ctx, 31, 0x304388u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x304380u, 0x304388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304388u;
label_304388:
    // 0x304388: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30438c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x30438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x304390u;
}
