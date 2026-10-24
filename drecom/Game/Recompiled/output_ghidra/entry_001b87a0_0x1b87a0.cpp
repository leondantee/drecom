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

// Function: entry_001b87a0
// Address: 0x1b87a0 - 0x1b889c
void entry_001b87a0_0x1b87a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b87a0_0x1b87a0");
#endif

    switch (ctx->pc) {
        case 0x1b87ecu: goto label_1b87ec;
        case 0x1b8804u: goto label_1b8804;
        case 0x1b8818u: goto label_1b8818;
        case 0x1b8830u: goto label_1b8830;
        case 0x1b8844u: goto label_1b8844;
        default: break;
    }

    ctx->pc = 0x1b87a0u;

    // 0x1b87a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b87a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b87a4: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b87a8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b87a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1b87ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b87acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b87b0: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b87b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b87b4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b87b8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b87bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1b87c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b87c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b87c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b87c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b87c8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b87c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b87cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b87d0: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1b87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x1b87d4: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1b87d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b87d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b87d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b87dc: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1b87dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b87e0: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1b87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b87e4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1B87E4u;
    SET_GPR_U32(ctx, 31, 0x1B87ECu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B87E4u, 0x1B87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87ECu;
label_1b87ec:
    // 0x1b87ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b87f0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b87f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1b87f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b87f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b87f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b87fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B87FCu;
    SET_GPR_U32(ctx, 31, 0x1B8804u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B87FCu, 0x1B8804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8804u;
label_1b8804:
    // 0x1b8804: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8808: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b880c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8810: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1B8810u;
    SET_GPR_U32(ctx, 31, 0x1B8818u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B8810u, 0x1B8818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8818u;
label_1b8818:
    // 0x1b8818: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8818u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b881c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b881cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8820: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b8828: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B8828u;
    SET_GPR_U32(ctx, 31, 0x1B8830u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B8828u, 0x1B8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8830u;
label_1b8830:
    // 0x1b8830: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8830u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8834: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8838: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1b8838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1b883c: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1B883Cu;
    SET_GPR_U32(ctx, 31, 0x1B8844u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B883Cu, 0x1B8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8844u;
label_1b8844:
    // 0x1b8844: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x1b8844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
    // 0x1b8848: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1b8848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1b884c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b884cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8850: 0x0  nop
    ctx->pc = 0x1b8850u;
    // NOP
    // 0x1b8854: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b8858: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1b885c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8860: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8868: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b8868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b886c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b886cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b8870: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b8870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b8874: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8878: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b887c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8880: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8884: 0x0  nop
    ctx->pc = 0x1b8884u;
    // NOP
    // 0x1b8888: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8888u;
    {
        const bool branch_taken_0x1b8888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8888) {
            ctx->pc = 0x1B889Cu;
            return;
        }
    }
    ctx->pc = 0x1B8890u;
    // 0x1b8890: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8894: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8898: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b8898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1b889cu;
}
