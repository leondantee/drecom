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
// Address: 0x1d0528 - 0x1d05fc
void caseD_3_0x1d0528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1d0528");
#endif

    switch (ctx->pc) {
        case 0x1d054cu: goto label_1d054c;
        case 0x1d0558u: goto label_1d0558;
        case 0x1d056cu: goto label_1d056c;
        case 0x1d059cu: goto label_1d059c;
        default: break;
    }

    ctx->pc = 0x1d0528u;

    // 0x1d0528: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d0528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d052c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d0530: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d0530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1d0534: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d0534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d0538: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1d0538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1d053c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d053cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0540: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d0544: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1D0544u;
    SET_GPR_U32(ctx, 31, 0x1D054Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D0544u, 0x1D054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D054Cu;
label_1d054c:
    // 0x1d054c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0550: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1D0550u;
    SET_GPR_U32(ctx, 31, 0x1D0558u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D0550u, 0x1D0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0558u;
label_1d0558:
    // 0x1d0558: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d055c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d055cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0560: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d0560u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0564: 0xc057480  jal         func_15D200
    ctx->pc = 0x1D0564u;
    SET_GPR_U32(ctx, 31, 0x1D056Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1D0564u, 0x1D056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D056Cu;
label_1d056c:
    // 0x1d056c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0570: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d0570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0578: 0x0  nop
    ctx->pc = 0x1d0578u;
    // NOP
    // 0x1d057c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d057cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0580: 0x0  nop
    ctx->pc = 0x1d0580u;
    // NOP
    // 0x1d0584: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0584u;
    {
        const bool branch_taken_0x1d0584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0584) {
            ctx->pc = 0x1D05FCu;
            return;
        }
    }
    ctx->pc = 0x1D058Cu;
    // 0x1d058c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0590: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1d0590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1d0594: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1D0594u;
    SET_GPR_U32(ctx, 31, 0x1D059Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1D0594u, 0x1D059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D059Cu;
label_1d059c:
    // 0x1d059c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1d059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1d05a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d05a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d05a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d05a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d05a8: 0x0  nop
    ctx->pc = 0x1d05a8u;
    // NOP
    // 0x1d05ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d05acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d05b0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d05b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d05b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d05b8: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1d05b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d05bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d05c0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d05c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d05c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d05c8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d05c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d05cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d05d0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d05d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d05d4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d05d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d05d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d05d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d05dc: 0x0  nop
    ctx->pc = 0x1d05dcu;
    // NOP
    // 0x1d05e0: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x1D05E0u;
    {
        const bool branch_taken_0x1d05e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d05e0) {
            ctx->pc = 0x1D067Cu;
            return;
        }
    }
    ctx->pc = 0x1D05E8u;
    // 0x1d05e8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1d05e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d05ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d05f0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d05f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d05f4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D05F4u;
    {
        const bool branch_taken_0x1d05f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d05f4) {
            ctx->pc = 0x1D067Cu;
            return;
        }
    }
    ctx->pc = 0x1D05FCu;
}
