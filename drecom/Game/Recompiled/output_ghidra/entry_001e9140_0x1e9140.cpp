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

// Function: entry_001e9140
// Address: 0x1e9140 - 0x1e924c
void entry_001e9140_0x1e9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9140_0x1e9140");
#endif

    switch (ctx->pc) {
        case 0x1e91b8u: goto label_1e91b8;
        case 0x1e91c4u: goto label_1e91c4;
        case 0x1e91e0u: goto label_1e91e0;
        case 0x1e91ecu: goto label_1e91ec;
        case 0x1e9214u: goto label_1e9214;
        default: break;
    }

    ctx->pc = 0x1e9140u;

label_1e9140:
    // 0x1e9140: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9144:
    // 0x1e9144: 0x946411f4  lhu         $a0, 0x11F4($v1)
    ctx->pc = 0x1e9144u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
label_1e9148:
    // 0x1e9148: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e9148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1e914c:
    // 0x1e914c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9150:
    // 0x1e9150: 0x1464005c  bne         $v1, $a0, . + 4 + (0x5C << 2)
label_1e9154:
    if (ctx->pc == 0x1E9154u) {
        ctx->pc = 0x1E9158u;
        goto label_1e9158;
    }
    ctx->pc = 0x1E9150u;
    {
        const bool branch_taken_0x1e9150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e9150) {
            ctx->pc = 0x1E92C4u;
            return;
        }
    }
    ctx->pc = 0x1E9158u;
label_1e9158:
    // 0x1e9158: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e915c:
    // 0x1e915c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x1e915cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_1e9160:
    // 0x1e9160: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e9160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e9164:
    // 0x1e9164: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9168:
    // 0x1e9168: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1e9168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_1e916c:
    // 0x1e916c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9170:
    // 0x1e9170: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x1e9170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9174:
    // 0x1e9174: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e9174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e9178:
    // 0x1e9178: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e917c:
    // 0x1e917c: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x1e917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9180:
    // 0x1e9180: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e9180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e9184:
    // 0x1e9184: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9188:
    // 0x1e9188: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x1e9188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e918c:
    // 0x1e918c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e9190:
    // 0x1e9190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e9190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e9194:
    // 0x1e9194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9198:
    // 0x1e9198: 0x0  nop
    ctx->pc = 0x1e9198u;
    // NOP
label_1e919c:
    // 0x1e919c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e919cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1e91a0:
    // 0x1e91a0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x1e91a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_1e91a4:
    // 0x1e91a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e91a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e91a8:
    // 0x1e91a8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e91a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1e91ac:
    // 0x1e91ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e91acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e91b0:
    // 0x1e91b0: 0xc062f5c  jal         func_18BD70
label_1e91b4:
    if (ctx->pc == 0x1E91B4u) {
        ctx->pc = 0x1E91B8u;
        goto label_1e91b8;
    }
    ctx->pc = 0x1E91B0u;
    SET_GPR_U32(ctx, 31, 0x1E91B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E91B0u, 0x1E91B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91B8u;
label_1e91b8:
    // 0x1e91b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e91b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e91bc:
    // 0x1e91bc: 0xc0630a8  jal         func_18C2A0
label_1e91c0:
    if (ctx->pc == 0x1E91C0u) {
        ctx->pc = 0x1E91C4u;
        goto label_1e91c4;
    }
    ctx->pc = 0x1E91BCu;
    SET_GPR_U32(ctx, 31, 0x1E91C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E91BCu, 0x1E91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91C4u;
label_1e91c4:
    // 0x1e91c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e91c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e91c8:
    // 0x1e91c8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x1e91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_1e91cc:
    // 0x1e91cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e91ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e91d0:
    // 0x1e91d0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e91d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1e91d4:
    // 0x1e91d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e91d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e91d8:
    // 0x1e91d8: 0xc062f5c  jal         func_18BD70
label_1e91dc:
    if (ctx->pc == 0x1E91DCu) {
        ctx->pc = 0x1E91E0u;
        goto label_1e91e0;
    }
    ctx->pc = 0x1E91D8u;
    SET_GPR_U32(ctx, 31, 0x1E91E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E91D8u, 0x1E91E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91E0u;
label_1e91e0:
    // 0x1e91e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e91e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e91e4:
    // 0x1e91e4: 0xc0630a8  jal         func_18C2A0
label_1e91e8:
    if (ctx->pc == 0x1E91E8u) {
        ctx->pc = 0x1E91ECu;
        goto label_1e91ec;
    }
    ctx->pc = 0x1E91E4u;
    SET_GPR_U32(ctx, 31, 0x1E91ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E91E4u, 0x1E91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E91ECu;
label_1e91ec:
    // 0x1e91ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e91ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1e91f0:
    // 0x1e91f0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e91f4:
    // 0x1e91f4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1e91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1e91f8:
    // 0x1e91f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1e91fc:
    // 0x1e91fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e91fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9200:
    // 0x1e9200: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1e9200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_1e9204:
    // 0x1e9204: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1e9208:
    // 0x1e9208: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e9208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e920c:
    // 0x1e920c: 0xc067b18  jal         func_19EC60
label_1e9210:
    if (ctx->pc == 0x1E9210u) {
        ctx->pc = 0x1E9214u;
        goto label_1e9214;
    }
    ctx->pc = 0x1E920Cu;
    SET_GPR_U32(ctx, 31, 0x1E9214u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E920Cu, 0x1E9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9214u;
label_1e9214:
    // 0x1e9214: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1e9218:
    // 0x1e9218: 0x946411f6  lhu         $a0, 0x11F6($v1)
    ctx->pc = 0x1e9218u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
label_1e921c:
    // 0x1e921c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1e9220:
    // 0x1e9220: 0x2065fff6  addi        $a1, $v1, -0xA
    ctx->pc = 0x1e9220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_1e9224:
    // 0x1e9224: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x1e9224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1e9228:
    // 0x1e9228: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_1e922c:
    if (ctx->pc == 0x1E922Cu) {
        ctx->pc = 0x1E9230u;
        goto label_1e9230;
    }
    ctx->pc = 0x1E9228u;
    {
        const bool branch_taken_0x1e9228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9228) {
            ctx->pc = 0x1E92BCu;
            return;
        }
    }
    ctx->pc = 0x1E9230u;
label_1e9230:
    // 0x1e9230: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1e9234:
    // 0x1e9234: 0x24640c80  addiu       $a0, $v1, 0xC80
    ctx->pc = 0x1e9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
label_1e9238:
    // 0x1e9238: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e9238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e923c:
    // 0x1e923c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1e923cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e9240:
    // 0x1e9240: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e9240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9244:
    // 0x1e9244: 0x600008  jr          $v1
label_1e9248:
    if (ctx->pc == 0x1E9248u) {
        ctx->pc = 0x1E924Cu;
        goto label_fallthrough_0x1e9244;
    }
    ctx->pc = 0x1E9244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9244u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1e9244:
    ctx->pc = 0x1E924Cu;
}
