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
// Address: 0x148190 - 0x14823c
void caseD_1_0x148190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x148190");
#endif

    switch (ctx->pc) {
        case 0x1481c8u: goto label_1481c8;
        case 0x1481e0u: goto label_1481e0;
        case 0x1481f4u: goto label_1481f4;
        case 0x148208u: goto label_148208;
        case 0x148214u: goto label_148214;
        default: break;
    }

    ctx->pc = 0x148190u;

    // 0x148190: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148194: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x148198: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x148198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14819c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1481a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1481a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1481a4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1481a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1481a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1481a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1481ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1481acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1481b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1481b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1481b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1481b8: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1481b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1481bc: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1481bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1481c0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1481C0u;
    SET_GPR_U32(ctx, 31, 0x1481C8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1481C0u, 0x1481C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481C8u;
label_1481c8:
    // 0x1481c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1481cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1481ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1481d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1481d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1481d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1481d8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1481D8u;
    SET_GPR_U32(ctx, 31, 0x1481E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1481D8u, 0x1481E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481E0u;
label_1481e0:
    // 0x1481e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1481e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1481e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1481e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1481e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1481e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1481ec: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1481ECu;
    SET_GPR_U32(ctx, 31, 0x1481F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1481ECu, 0x1481F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481F4u;
label_1481f4:
    // 0x1481f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1481f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1481f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1481f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1481fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1481fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148200: 0xc057480  jal         func_15D200
    ctx->pc = 0x148200u;
    SET_GPR_U32(ctx, 31, 0x148208u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x148200u, 0x148208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148208u;
label_148208:
    // 0x148208: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14820c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14820Cu;
    SET_GPR_U32(ctx, 31, 0x148214u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14820Cu, 0x148214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148214u;
label_148214:
    // 0x148214: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148218: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14821c: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x14821Cu;
    {
        const bool branch_taken_0x14821c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14821c) {
            ctx->pc = 0x148520u;
            return;
        }
    }
    ctx->pc = 0x148224u;
    // 0x148224: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148228: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x148228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14822c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148230: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x148230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x148234: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x148234u;
    {
        const bool branch_taken_0x148234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148234) {
            ctx->pc = 0x148520u;
            return;
        }
    }
    ctx->pc = 0x14823Cu;
}
