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

// Function: caseD_1
// Address: 0x2dfb34 - 0x2dfbc8
void caseD_1_0x2dfb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2dfb34");
#endif

    switch (ctx->pc) {
        case 0x2dfb5cu: goto label_2dfb5c;
        case 0x2dfb6cu: goto label_2dfb6c;
        case 0x2dfb78u: goto label_2dfb78;
        default: break;
    }

    ctx->pc = 0x2dfb34u;

    // 0x2dfb34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb38: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x2dfb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x2dfb3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dfb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dfb40: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2dfb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2dfb44: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DFB44u;
    {
        const bool branch_taken_0x2dfb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfb44) {
            ctx->pc = 0x2DFBE0u;
            return;
        }
    }
    ctx->pc = 0x2DFB4Cu;
    // 0x2dfb4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dfb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dfb54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DFB54u;
    SET_GPR_U32(ctx, 31, 0x2DFB5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DFB54u, 0x2DFB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB5Cu;
label_2dfb5c:
    // 0x2dfb5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb60: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2dfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2dfb64: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DFB64u;
    SET_GPR_U32(ctx, 31, 0x2DFB6Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DFB64u, 0x2DFB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB6Cu;
label_2dfb6c:
    // 0x2dfb6c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb70: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DFB70u;
    SET_GPR_U32(ctx, 31, 0x2DFB78u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DFB70u, 0x2DFB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB78u;
label_2dfb78:
    // 0x2dfb78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb7c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfb80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dfb80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfb84: 0x0  nop
    ctx->pc = 0x2dfb84u;
    // NOP
    // 0x2dfb88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfb8c: 0x0  nop
    ctx->pc = 0x2dfb8cu;
    // NOP
    // 0x2dfb90: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2DFB90u;
    {
        const bool branch_taken_0x2dfb90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfb90) {
            ctx->pc = 0x2DFBC8u;
            return;
        }
    }
    ctx->pc = 0x2DFB98u;
    // 0x2dfb98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb9c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2dfb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfba0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfba4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfba8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dfba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dfbac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2dfbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2dfbb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfbb4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2dfbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfbb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfbbc: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfbc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dfbc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dfbc4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x2dfbc8u;
}
