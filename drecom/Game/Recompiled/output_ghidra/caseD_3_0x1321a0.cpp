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

// Function: caseD_3
// Address: 0x1321a0 - 0x132270
void caseD_3_0x1321a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1321a0");
#endif

    switch (ctx->pc) {
        case 0x1321c4u: goto label_1321c4;
        case 0x1321d0u: goto label_1321d0;
        case 0x1321e0u: goto label_1321e0;
        case 0x132210u: goto label_132210;
        default: break;
    }

    ctx->pc = 0x1321a0u;

    // 0x1321a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1321a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1321a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1321a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1321a8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1321a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1321ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1321acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1321b0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1321b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1321b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1321b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1321b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1321b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1321bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1321BCu;
    SET_GPR_U32(ctx, 31, 0x1321C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1321BCu, 0x1321C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1321C4u;
label_1321c4:
    // 0x1321c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1321c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1321c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1321C8u;
    SET_GPR_U32(ctx, 31, 0x1321D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1321C8u, 0x1321D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1321D0u;
label_1321d0:
    // 0x1321d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1321d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1321d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1321d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1321d8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1321D8u;
    SET_GPR_U32(ctx, 31, 0x1321E0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1321D8u, 0x1321E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1321E0u;
label_1321e0:
    // 0x1321e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1321e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1321e4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1321e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1321e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1321e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1321ec: 0x0  nop
    ctx->pc = 0x1321ecu;
    // NOP
    // 0x1321f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1321f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1321f4: 0x0  nop
    ctx->pc = 0x1321f4u;
    // NOP
    // 0x1321f8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1321F8u;
    {
        const bool branch_taken_0x1321f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1321f8) {
            ctx->pc = 0x132270u;
            return;
        }
    }
    ctx->pc = 0x132200u;
    // 0x132200: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132204: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x132204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x132208: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x132208u;
    SET_GPR_U32(ctx, 31, 0x132210u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x132208u, 0x132210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132210u;
label_132210:
    // 0x132210: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x132210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
    // 0x132214: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x132214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x132218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13221c: 0x0  nop
    ctx->pc = 0x13221cu;
    // NOP
    // 0x132220: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x132224: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x132224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x132228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13222c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x13222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132230: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132234: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x132234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13223c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13223cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132240: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132244: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x132244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132248: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13224c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13224cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132250: 0x0  nop
    ctx->pc = 0x132250u;
    // NOP
    // 0x132254: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x132254u;
    {
        const bool branch_taken_0x132254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132254) {
            ctx->pc = 0x132300u;
            return;
        }
    }
    ctx->pc = 0x13225Cu;
    // 0x13225c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x13225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132260: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132264: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132268: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x132268u;
    {
        const bool branch_taken_0x132268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132268) {
            ctx->pc = 0x132300u;
            return;
        }
    }
    ctx->pc = 0x132270u;
}
