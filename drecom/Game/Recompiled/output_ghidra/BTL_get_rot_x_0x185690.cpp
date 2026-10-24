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

// Function: BTL_get_rot_x
// Address: 0x185690 - 0x1857c0
void BTL_get_rot_x_0x185690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_get_rot_x_0x185690");
#endif

    switch (ctx->pc) {
        case 0x1856ecu: goto label_1856ec;
        case 0x1856f8u: goto label_1856f8;
        case 0x18571cu: goto label_18571c;
        default: break;
    }

    ctx->pc = 0x185690u;

    // 0x185690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185694: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x185694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x185698: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18569c: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x18569cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1856a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1856a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1856a4: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x1856a4u;
    { uint32_t bits = FAST_READ32(0x4802A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1856a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1856a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1856ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1856acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1856b0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1856b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1856b4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1856b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1856b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1856b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1856bc: 0x0  nop
    ctx->pc = 0x1856bcu;
    // NOP
    // 0x1856c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1856c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1856c4: 0x0  nop
    ctx->pc = 0x1856c4u;
    // NOP
    // 0x1856c8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1856C8u;
    {
        const bool branch_taken_0x1856c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1856c8) {
            ctx->pc = 0x18572Cu;
            goto label_18572c;
        }
    }
    ctx->pc = 0x1856D0u;
    // 0x1856d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1856d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1856d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1856d8: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1856d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1856dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1856dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1856e0: 0x244602a0  addiu       $a2, $v0, 0x2A0
    ctx->pc = 0x1856e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1856e4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1856E4u;
    SET_GPR_U32(ctx, 31, 0x1856ECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1856E4u, 0x1856ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856ECu;
label_1856ec:
    // 0x1856ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1856ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1856f0: 0xc067588  jal         func_19D620
    ctx->pc = 0x1856F0u;
    SET_GPR_U32(ctx, 31, 0x1856F8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1856F0u, 0x1856F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856F8u;
label_1856f8:
    // 0x1856f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1856f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1856fc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1856fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185700: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x185700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185704: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x185704u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x185708: 0x0  nop
    ctx->pc = 0x185708u;
    // NOP
    // 0x18570c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x18570cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x185710: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x185710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185714: 0xc0455a6  jal         func_115698
    ctx->pc = 0x185714u;
    SET_GPR_U32(ctx, 31, 0x18571Cu);
    ctx->pc = 0x115698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115698u, 0x185714u, 0x18571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18571Cu;
label_18571c:
    // 0x18571c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18571cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185720: 0xe4200320  swc1        $f0, 0x320($at)
    ctx->pc = 0x185720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480320u, _value); } while (0); }
    // 0x185724: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x185724u;
    {
        const bool branch_taken_0x185724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185724) {
            ctx->pc = 0x185738u;
            goto label_185738;
        }
    }
    ctx->pc = 0x18572Cu;
label_18572c:
    // 0x18572c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18572cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185730: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185734: 0xe4200320  swc1        $f0, 0x320($at)
    ctx->pc = 0x185734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480320u, _value); } while (0); }
label_185738:
    // 0x185738: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18573c: 0xc4210320  lwc1        $f1, 0x320($at)
    ctx->pc = 0x18573cu;
    { uint32_t bits = FAST_READ32(0x480320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185740: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x185740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x185744: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18574c: 0x0  nop
    ctx->pc = 0x18574cu;
    // NOP
    // 0x185750: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185754: 0x0  nop
    ctx->pc = 0x185754u;
    // NOP
    // 0x185758: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185758u;
    {
        const bool branch_taken_0x185758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185758) {
            ctx->pc = 0x185774u;
            goto label_185774;
        }
    }
    ctx->pc = 0x185760u;
    // 0x185760: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x185760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x185764: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18576c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18576cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185770: 0xe4200320  swc1        $f0, 0x320($at)
    ctx->pc = 0x185770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480320u, _value); } while (0); }
label_185774:
    // 0x185774: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185778: 0xc4210320  lwc1        $f1, 0x320($at)
    ctx->pc = 0x185778u;
    { uint32_t bits = FAST_READ32(0x480320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18577c: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x18577cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x185780: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185788: 0x0  nop
    ctx->pc = 0x185788u;
    // NOP
    // 0x18578c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18578cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185790: 0x0  nop
    ctx->pc = 0x185790u;
    // NOP
    // 0x185794: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x185794u;
    {
        const bool branch_taken_0x185794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185794) {
            ctx->pc = 0x1857B0u;
            goto label_1857b0;
        }
    }
    ctx->pc = 0x18579Cu;
    // 0x18579c: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x1857a0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1857a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1857a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1857a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1857a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1857ac: 0xe4200320  swc1        $f0, 0x320($at)
    ctx->pc = 0x1857acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480320u, _value); } while (0); }
label_1857b0:
    // 0x1857b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1857b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1857b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1857b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1857b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1857B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1857B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1857C0u;
}
