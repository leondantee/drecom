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

// Function: entry_00121358
// Address: 0x121358 - 0x121428
void entry_00121358_0x121358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121358_0x121358");
#endif

    switch (ctx->pc) {
        case 0x121374u: goto label_121374;
        case 0x121384u: goto label_121384;
        case 0x121410u: goto label_121410;
        default: break;
    }

    ctx->pc = 0x121358u;

    // 0x121358: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12135c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x12135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x121360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x121360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121364: 0x24661200  addiu       $a2, $v1, 0x1200
    ctx->pc = 0x121364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4608));
    // 0x121368: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x121368u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12136c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x12136Cu;
    SET_GPR_U32(ctx, 31, 0x121374u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x12136Cu, 0x121374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121374u;
label_121374:
    // 0x121374: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x121374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121378: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x121378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x12137c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x12137Cu;
    SET_GPR_U32(ctx, 31, 0x121384u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x12137Cu, 0x121384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121384u;
label_121384:
    // 0x121384: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121388: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x121388u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12138c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x12138cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x121390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121394: 0x14a30024  bne         $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x121394u;
    {
        const bool branch_taken_0x121394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x121394) {
            ctx->pc = 0x121428u;
            return;
        }
    }
    ctx->pc = 0x12139Cu;
    // 0x12139c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1213a0: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x1213a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1213a4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1213a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1213a8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1213a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1213ac: 0x14a3001e  bne         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1213ACu;
    {
        const bool branch_taken_0x1213ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1213ac) {
            ctx->pc = 0x121428u;
            return;
        }
    }
    ctx->pc = 0x1213B4u;
    // 0x1213b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1213b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1213b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1213bc: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1213bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1213c0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1213c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1213c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1213c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1213c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1213c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1213cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1213ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1213d0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1213d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1213d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1213d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1213d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1213d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1213dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1213dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1213e0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1213e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1213e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1213e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1213e8: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1213e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1213ec: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1213ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1213f0: 0x34734000  ori         $s3, $v1, 0x4000
    ctx->pc = 0x1213f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1213f4: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x1213f4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1213f8: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1213f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1213fc: 0x24b10570  addiu       $s1, $a1, 0x570
    ctx->pc = 0x1213fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1392));
    // 0x121400: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121404: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121404u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121408: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x121408u;
    SET_GPR_U32(ctx, 31, 0x121410u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121408u, 0x121410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121410u;
label_121410:
    // 0x121410: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121410u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121414: 0x9204009e  lbu         $a0, 0x9E($s0)
    ctx->pc = 0x121414u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x121418: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x121418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12141c: 0xa203009e  sb          $v1, 0x9E($s0)
    ctx->pc = 0x12141cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 3));
    // 0x121420: 0x10000643  b           . + 4 + (0x643 << 2)
    ctx->pc = 0x121420u;
    {
        const bool branch_taken_0x121420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121420) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121428u;
}
