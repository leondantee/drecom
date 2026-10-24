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

// Function: entry_001cd8a4
// Address: 0x1cd8a4 - 0x1cd954
void entry_001cd8a4_0x1cd8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd8a4_0x1cd8a4");
#endif

    switch (ctx->pc) {
        case 0x1cd920u: goto label_1cd920;
        default: break;
    }

    ctx->pc = 0x1cd8a4u;

    // 0x1cd8a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd8a8: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x1cd8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1cd8ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cd8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd8b0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1cd8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cd8b4: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1CD8B4u;
    {
        const bool branch_taken_0x1cd8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8b4) {
            ctx->pc = 0x1CDA54u;
            return;
        }
    }
    ctx->pc = 0x1CD8BCu;
    // 0x1cd8bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd8c0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cd8c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cd8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd8c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cd8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cd8cc: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1CD8CCu;
    {
        const bool branch_taken_0x1cd8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8cc) {
            ctx->pc = 0x1CDA40u;
            return;
        }
    }
    ctx->pc = 0x1CD8D4u;
    // 0x1cd8d4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1cd8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1cd8d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cd8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cd8dc: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CD8DCu;
    {
        const bool branch_taken_0x1cd8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8dc) {
            ctx->pc = 0x1CD9C0u;
            return;
        }
    }
    ctx->pc = 0x1CD8E4u;
    // 0x1cd8e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd8e8: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1cd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd8ec: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1cd8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1cd8f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd8f4: 0x0  nop
    ctx->pc = 0x1cd8f4u;
    // NOP
    // 0x1cd8f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cd8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd8fc: 0x0  nop
    ctx->pc = 0x1cd8fcu;
    // NOP
    // 0x1cd900: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1CD900u;
    {
        const bool branch_taken_0x1cd900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd900) {
            ctx->pc = 0x1CD9C0u;
            return;
        }
    }
    ctx->pc = 0x1CD908u;
    // 0x1cd908: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd90c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd910: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd914: 0xc4ad1380  lwc1        $f13, 0x1380($a1)
    ctx->pc = 0x1cd914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd918: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CD918u;
    SET_GPR_U32(ctx, 31, 0x1CD920u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CD918u, 0x1CD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD920u;
label_1cd920:
    // 0x1cd920: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1cd924: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cd924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd92c: 0x0  nop
    ctx->pc = 0x1cd92cu;
    // NOP
    // 0x1cd930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd934: 0x0  nop
    ctx->pc = 0x1cd934u;
    // NOP
    // 0x1cd938: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD938u;
    {
        const bool branch_taken_0x1cd938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd938) {
            ctx->pc = 0x1CD954u;
            return;
        }
    }
    ctx->pc = 0x1CD940u;
    // 0x1cd940: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1cd940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd944: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cd944u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd948: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd94c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd950: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1cd954u;
}
