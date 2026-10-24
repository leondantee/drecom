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

// Function: entry_001d032c
// Address: 0x1d032c - 0x1d0400
void entry_001d032c_0x1d032c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d032c_0x1d032c");
#endif

    switch (ctx->pc) {
        case 0x1d0350u: goto label_1d0350;
        case 0x1d035cu: goto label_1d035c;
        case 0x1d0370u: goto label_1d0370;
        case 0x1d03a0u: goto label_1d03a0;
        default: break;
    }

    ctx->pc = 0x1d032cu;

    // 0x1d032c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0330: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d0330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d0334: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d0334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1d0338: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d0338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d033c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1d033cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1d0340: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0344: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d0344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d0348: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1D0348u;
    SET_GPR_U32(ctx, 31, 0x1D0350u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D0348u, 0x1D0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0350u;
label_1d0350:
    // 0x1d0350: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0354: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1D0354u;
    SET_GPR_U32(ctx, 31, 0x1D035Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D0354u, 0x1D035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D035Cu;
label_1d035c:
    // 0x1d035c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d035cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0360: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0364: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0368: 0xc057480  jal         func_15D200
    ctx->pc = 0x1D0368u;
    SET_GPR_U32(ctx, 31, 0x1D0370u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1D0368u, 0x1D0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0370u;
label_1d0370:
    // 0x1d0370: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0374: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d0374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d037c: 0x0  nop
    ctx->pc = 0x1d037cu;
    // NOP
    // 0x1d0380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0384: 0x0  nop
    ctx->pc = 0x1d0384u;
    // NOP
    // 0x1d0388: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0388u;
    {
        const bool branch_taken_0x1d0388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0388) {
            ctx->pc = 0x1D0400u;
            return;
        }
    }
    ctx->pc = 0x1D0390u;
    // 0x1d0390: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0394: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1d0394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1d0398: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1D0398u;
    SET_GPR_U32(ctx, 31, 0x1D03A0u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1D0398u, 0x1D03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03A0u;
label_1d03a0:
    // 0x1d03a0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1d03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1d03a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d03a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d03a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d03a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d03ac: 0x0  nop
    ctx->pc = 0x1d03acu;
    // NOP
    // 0x1d03b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d03b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d03b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d03b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d03b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d03bc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d03bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d03c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d03c4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d03c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d03c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d03c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d03cc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d03ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d03d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d03d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d03d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d03d8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d03d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d03dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d03dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d03e0: 0x0  nop
    ctx->pc = 0x1d03e0u;
    // NOP
    // 0x1d03e4: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x1D03E4u;
    {
        const bool branch_taken_0x1d03e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d03e4) {
            ctx->pc = 0x1D0480u;
            return;
        }
    }
    ctx->pc = 0x1D03ECu;
    // 0x1d03ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d03f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d03f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d03f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d03f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D03F8u;
    {
        const bool branch_taken_0x1d03f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03f8) {
            ctx->pc = 0x1D0480u;
            return;
        }
    }
    ctx->pc = 0x1D0400u;
}
