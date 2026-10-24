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

// Function: entry_0015c5bc
// Address: 0x15c5bc - 0x15c694
void entry_0015c5bc_0x15c5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c5bc_0x15c5bc");
#endif

    switch (ctx->pc) {
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c614u: goto label_15c614;
        case 0x15c628u: goto label_15c628;
        case 0x15c650u: goto label_15c650;
        default: break;
    }

    ctx->pc = 0x15c5bcu;

    // 0x15c5bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5c0: 0x90421560  lbu         $v0, 0x1560($v0)
    ctx->pc = 0x15c5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x15c5c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c5c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c5cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5d0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c5d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c5d8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c5dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c5e0: 0x24651420  addiu       $a1, $v1, 0x1420
    ctx->pc = 0x15c5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
    // 0x15c5e4: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c5e8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15C5E8u;
    SET_GPR_U32(ctx, 31, 0x15C5F0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15C5E8u, 0x15C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5F0u;
label_15c5f0:
    // 0x15c5f0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x15c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c5f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c5f8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15c5f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c5fc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c600: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15c604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c608: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15c608u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15c60c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15C60Cu;
    SET_GPR_U32(ctx, 31, 0x15C614u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15C60Cu, 0x15C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C614u;
label_15c614:
    // 0x15c614: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15c614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15c618: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x15c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c61c: 0xc7ad003c  lwc1        $f13, 0x3C($sp)
    ctx->pc = 0x15c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c620: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15C620u;
    SET_GPR_U32(ctx, 31, 0x15C628u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15C620u, 0x15C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C628u;
label_15c628:
    // 0x15c628: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15c628u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15c62c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15c62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15c630: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x15c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x15c634: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x15c634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x15c638: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15c638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15c63c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c640: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x15c640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c644: 0xc44d1564  lwc1        $f13, 0x1564($v0)
    ctx->pc = 0x15c644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c648: 0xc058f50  jal         func_163D40
    ctx->pc = 0x15C648u;
    SET_GPR_U32(ctx, 31, 0x15C650u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x15C648u, 0x15C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C650u;
label_15c650:
    // 0x15c650: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c654: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x15c654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x15c658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c65c: 0xc4611564  lwc1        $f1, 0x1564($v1)
    ctx->pc = 0x15c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c660: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x15c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x15c664: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x15c664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x15c668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c66c: 0x0  nop
    ctx->pc = 0x15c66cu;
    // NOP
    // 0x15c670: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15c670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c674: 0x0  nop
    ctx->pc = 0x15c674u;
    // NOP
    // 0x15c678: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x15C678u;
    {
        const bool branch_taken_0x15c678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c678) {
            ctx->pc = 0x15C694u;
            return;
        }
    }
    ctx->pc = 0x15C680u;
    // 0x15c680: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x15c680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x15c684: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x15c684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x15c688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c68c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c690: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x15c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    ctx->pc = 0x15c694u;
}
