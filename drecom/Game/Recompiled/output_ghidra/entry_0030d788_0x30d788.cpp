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

// Function: entry_0030d788
// Address: 0x30d788 - 0x30d884
void entry_0030d788_0x30d788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d788_0x30d788");
#endif

    switch (ctx->pc) {
        case 0x30d798u: goto label_30d798;
        case 0x30d7a4u: goto label_30d7a4;
        case 0x30d7b4u: goto label_30d7b4;
        case 0x30d7c0u: goto label_30d7c0;
        case 0x30d844u: goto label_30d844;
        default: break;
    }

    ctx->pc = 0x30d788u;

    // 0x30d788: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d78c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d78cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d790: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30D790u;
    SET_GPR_U32(ctx, 31, 0x30D798u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30D790u, 0x30D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D798u;
label_30d798:
    // 0x30d798: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d79c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30D79Cu;
    SET_GPR_U32(ctx, 31, 0x30D7A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30D79Cu, 0x30D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7A4u;
label_30d7a4:
    // 0x30d7a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d7a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d7ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30D7ACu;
    SET_GPR_U32(ctx, 31, 0x30D7B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30D7ACu, 0x30D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7B4u;
label_30d7b4:
    // 0x30d7b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7b8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30D7B8u;
    SET_GPR_U32(ctx, 31, 0x30D7C0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30D7B8u, 0x30D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7C0u;
label_30d7c0:
    // 0x30d7c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30d7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30d7c8: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x30D7C8u;
    {
        const bool branch_taken_0x30d7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d7c8) {
            ctx->pc = 0x30D8ECu;
            return;
        }
    }
    ctx->pc = 0x30D7D0u;
    // 0x30d7d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d7d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d7dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d7e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d7f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d7f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30d800: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d804: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30d804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30d808: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x30d808u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x30d80c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x30D80Cu;
    {
        const bool branch_taken_0x30d80c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30d80c) {
            ctx->pc = 0x30D8ECu;
            return;
        }
    }
    ctx->pc = 0x30D814u;
    // 0x30d814: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30d818: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30d81c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30d81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30d820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d824: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30d824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30d828: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d82c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30d830: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30d830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d834: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30d834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30d838: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30d838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30d83c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30D83Cu;
    SET_GPR_U32(ctx, 31, 0x30D844u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30D83Cu, 0x30D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D844u;
label_30d844:
    // 0x30d844: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x30D844u;
    {
        const bool branch_taken_0x30d844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d844) {
            ctx->pc = 0x30D8ECu;
            return;
        }
    }
    ctx->pc = 0x30D84Cu;
    // 0x30d84c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d850: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x30d850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x30d854: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x30d854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30d858: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30d858u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30d85c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d860: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x30D860u;
    {
        const bool branch_taken_0x30d860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d860) {
            ctx->pc = 0x30D8BCu;
            return;
        }
    }
    ctx->pc = 0x30D868u;
    // 0x30d868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d86c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D86Cu;
    {
        const bool branch_taken_0x30d86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d86c) {
            ctx->pc = 0x30D884u;
            return;
        }
    }
    ctx->pc = 0x30D874u;
    // 0x30d874: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D874u;
    {
        const bool branch_taken_0x30d874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d874) {
            ctx->pc = 0x30D884u;
            return;
        }
    }
    ctx->pc = 0x30D87Cu;
    // 0x30d87c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30D87Cu;
    {
        const bool branch_taken_0x30d87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d87c) {
            ctx->pc = 0x30D8ECu;
            return;
        }
    }
    ctx->pc = 0x30D884u;
}
