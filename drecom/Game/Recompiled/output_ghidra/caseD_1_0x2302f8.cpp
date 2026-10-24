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
// Address: 0x2302f8 - 0x230418
void caseD_1_0x2302f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2302f8");
#endif

    switch (ctx->pc) {
        case 0x230304u: goto label_230304;
        case 0x230340u: goto label_230340;
        case 0x230364u: goto label_230364;
        case 0x23037cu: goto label_23037c;
        case 0x230394u: goto label_230394;
        case 0x2303acu: goto label_2303ac;
        case 0x2303e0u: goto label_2303e0;
        case 0x2303f8u: goto label_2303f8;
        case 0x230410u: goto label_230410;
        default: break;
    }

    ctx->pc = 0x2302f8u;

    // 0x2302f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2302f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2302fc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2302FCu;
    SET_GPR_U32(ctx, 31, 0x230304u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2302FCu, 0x230304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230304u;
label_230304:
    // 0x230304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230308: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x230308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23030c: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x23030Cu;
    {
        const bool branch_taken_0x23030c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23030c) {
            ctx->pc = 0x230794u;
            return;
        }
    }
    ctx->pc = 0x230314u;
    // 0x230314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230318: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23031c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23031cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x230320: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230324: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230328: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x230328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23032c: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x23032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x230330: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x230330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230334: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x230338: 0xc0965d0  jal         func_259740
    ctx->pc = 0x230338u;
    SET_GPR_U32(ctx, 31, 0x230340u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x230338u, 0x230340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230340u;
label_230340:
    // 0x230340: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230344: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x230344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x230348: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x230348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23034c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23034cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x230350: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x230354: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x230354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x230358: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x230358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23035c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23035Cu;
    SET_GPR_U32(ctx, 31, 0x230364u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23035Cu, 0x230364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230364u;
label_230364:
    // 0x230364: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230368: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x230368u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23036c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23036cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x230370: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x230370u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x230374: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x230374u;
    SET_GPR_U32(ctx, 31, 0x23037Cu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x230374u, 0x23037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23037Cu;
label_23037c:
    // 0x23037c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230380: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x230380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230384: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x230384u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x230388: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x230388u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23038c: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x23038Cu;
    SET_GPR_U32(ctx, 31, 0x230394u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x23038Cu, 0x230394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230394u;
label_230394:
    // 0x230394: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230398: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x230398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x23039c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23039cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2303a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2303a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2303a4: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x2303A4u;
    SET_GPR_U32(ctx, 31, 0x2303ACu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2303A4u, 0x2303ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303ACu;
label_2303ac:
    // 0x2303ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2303acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2303b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2303b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2303b4: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x2303b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x2303b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2303b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2303bc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2303bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2303c0: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2303C0u;
    {
        const bool branch_taken_0x2303c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2303c0) {
            ctx->pc = 0x230794u;
            return;
        }
    }
    ctx->pc = 0x2303C8u;
    // 0x2303c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2303c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2303cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2303ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2303d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2303d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2303d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2303d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2303d8: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x2303D8u;
    SET_GPR_U32(ctx, 31, 0x2303E0u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2303D8u, 0x2303E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303E0u;
label_2303e0:
    // 0x2303e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2303e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2303e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2303e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2303e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2303e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2303ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2303ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2303f0: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x2303F0u;
    SET_GPR_U32(ctx, 31, 0x2303F8u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2303F0u, 0x2303F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303F8u;
label_2303f8:
    // 0x2303f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2303f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2303fc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2303fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x230400: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x230400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x230404: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x230404u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x230408: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x230408u;
    SET_GPR_U32(ctx, 31, 0x230410u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x230408u, 0x230410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230410u;
label_230410:
    // 0x230410: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x230410u;
    {
        const bool branch_taken_0x230410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230410) {
            ctx->pc = 0x230794u;
            return;
        }
    }
    ctx->pc = 0x230418u;
}
