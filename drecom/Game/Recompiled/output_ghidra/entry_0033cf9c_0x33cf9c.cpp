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

// Function: entry_0033cf9c
// Address: 0x33cf9c - 0x33d030
void entry_0033cf9c_0x33cf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cf9c_0x33cf9c");
#endif

    switch (ctx->pc) {
        case 0x33cfc4u: goto label_33cfc4;
        case 0x33cfd4u: goto label_33cfd4;
        case 0x33cff0u: goto label_33cff0;
        default: break;
    }

    ctx->pc = 0x33cf9cu;

    // 0x33cf9c: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x33cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cfa0: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x33cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cfa4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33cfa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33cfa8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x33cfac: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33cfb0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cfb4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x33cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33cfb8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33cfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33cfbc: 0xc05db20  jal         func_176C80
    ctx->pc = 0x33CFBCu;
    SET_GPR_U32(ctx, 31, 0x33CFC4u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x33CFBCu, 0x33CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFC4u;
label_33cfc4:
    // 0x33cfc4: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cfc8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x33cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33cfcc: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x33CFCCu;
    SET_GPR_U32(ctx, 31, 0x33CFD4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x33CFCCu, 0x33CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFD4u;
label_33cfd4:
    // 0x33cfd4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x33cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x33cfd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cfdc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x33cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cfe0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33cfe0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cfe4: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x33cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cfe8: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x33CFE8u;
    SET_GPR_U32(ctx, 31, 0x33CFF0u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x33CFE8u, 0x33CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFF0u;
label_33cff0:
    // 0x33cff0: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x33cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cff4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x33cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x33cff8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33cffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33cffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d000: 0x0  nop
    ctx->pc = 0x33d000u;
    // NOP
    // 0x33d004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33d004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d008: 0x0  nop
    ctx->pc = 0x33d008u;
    // NOP
    // 0x33d00c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x33D00Cu;
    {
        const bool branch_taken_0x33d00c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d00c) {
            ctx->pc = 0x33D030u;
            return;
        }
    }
    ctx->pc = 0x33D014u;
    // 0x33d014: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x33d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d018: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x33d018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x33d01c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33d01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33d020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d024: 0x0  nop
    ctx->pc = 0x33d024u;
    // NOP
    // 0x33d028: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33d028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d02c: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x33d02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    ctx->pc = 0x33d030u;
}
