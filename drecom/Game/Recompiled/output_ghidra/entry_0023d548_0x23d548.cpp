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

// Function: entry_0023d548
// Address: 0x23d548 - 0x23d62c
void entry_0023d548_0x23d548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d548_0x23d548");
#endif

    switch (ctx->pc) {
        case 0x23d574u: goto label_23d574;
        case 0x23d604u: goto label_23d604;
        default: break;
    }

    ctx->pc = 0x23d548u;

    // 0x23d548: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d54c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d550: 0x3c024027  lui         $v0, 0x4027
    ctx->pc = 0x23d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16423 << 16));
    // 0x23d554: 0x34428d36  ori         $v0, $v0, 0x8D36
    ctx->pc = 0x23d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36150);
    // 0x23d558: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23d558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23d55c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23d560: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23d564: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23d564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23d568: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23d56c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23D56Cu;
    SET_GPR_U32(ctx, 31, 0x23D574u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23D56Cu, 0x23D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D574u;
label_23d574:
    // 0x23d574: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x23D574u;
    {
        const bool branch_taken_0x23d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d574) {
            ctx->pc = 0x23D62Cu;
            return;
        }
    }
    ctx->pc = 0x23D57Cu;
    // 0x23d57c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d580: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x23d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d584: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x23d584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x23d588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d58c: 0x0  nop
    ctx->pc = 0x23d58cu;
    // NOP
    // 0x23d590: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d594: 0x0  nop
    ctx->pc = 0x23d594u;
    // NOP
    // 0x23d598: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x23D598u;
    {
        const bool branch_taken_0x23d598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d598) {
            ctx->pc = 0x23D62Cu;
            return;
        }
    }
    ctx->pc = 0x23D5A0u;
    // 0x23d5a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5a4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x23d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d5a8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x23d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x23d5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d5b0: 0x0  nop
    ctx->pc = 0x23d5b0u;
    // NOP
    // 0x23d5b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d5b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d5b8: 0x0  nop
    ctx->pc = 0x23d5b8u;
    // NOP
    // 0x23d5bc: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x23D5BCu;
    {
        const bool branch_taken_0x23d5bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d5bc) {
            ctx->pc = 0x23D62Cu;
            return;
        }
    }
    ctx->pc = 0x23D5C4u;
    // 0x23d5c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d5c8: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5cc: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x23d5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23d5d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5d4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5d8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x23d5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x23d5dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23d5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23d5e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23d5e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23d5e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x23d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x23d5e8: 0x34663c00  ori         $a2, $v1, 0x3C00
    ctx->pc = 0x23d5e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x23d5ec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23d5f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23d5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d5f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23d5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23d5fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23D5FCu;
    SET_GPR_U32(ctx, 31, 0x23D604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23D5FCu, 0x23D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D604u;
label_23d604:
    // 0x23d604: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x23d604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x23d608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d60c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d610: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23d610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d614: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23d614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23d618: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x23d618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x23d61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d620: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d624: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23d628: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23d628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x23d62cu;
}
