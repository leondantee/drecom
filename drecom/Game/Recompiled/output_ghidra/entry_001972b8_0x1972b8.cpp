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

// Function: entry_001972b8
// Address: 0x1972b8 - 0x197424
void entry_001972b8_0x1972b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001972b8_0x1972b8");
#endif

    switch (ctx->pc) {
        case 0x1972e0u: goto label_1972e0;
        case 0x197310u: goto label_197310;
        case 0x197338u: goto label_197338;
        case 0x197360u: goto label_197360;
        case 0x19738cu: goto label_19738c;
        case 0x1973bcu: goto label_1973bc;
        case 0x1973e8u: goto label_1973e8;
        case 0x197418u: goto label_197418;
        default: break;
    }

    ctx->pc = 0x1972b8u;

    // 0x1972b8: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x1972b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x1972bc: 0x3467d70a  ori         $a3, $v1, 0xD70A
    ctx->pc = 0x1972bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1972c0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1972c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1972c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1972c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1972c8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1972c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1972cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1972ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1972d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1972d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1972d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1972d8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1972D8u;
    SET_GPR_U32(ctx, 31, 0x1972E0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1972D8u, 0x1972E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972E0u;
label_1972e0:
    // 0x1972e0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1972e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1972e4: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1972e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1972e8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1972e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1972ec: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1972ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1972f0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1972f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1972f4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1972f8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1972f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1972fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1972fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197300: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197304: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197304u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197308: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197308u;
    SET_GPR_U32(ctx, 31, 0x197310u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197308u, 0x197310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197310u;
label_197310:
    // 0x197310: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197314: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197318: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19731c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19731cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197320: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197324: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197328: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19732c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19732cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197330: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197330u;
    SET_GPR_U32(ctx, 31, 0x197338u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197330u, 0x197338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197338u;
label_197338:
    // 0x197338: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x19733c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197344: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197348: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19734c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19734cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197350: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197354: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197354u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197358: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197358u;
    SET_GPR_U32(ctx, 31, 0x197360u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197358u, 0x197360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197360u;
label_197360:
    // 0x197360: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197364: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197368: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19736c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197370: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x197370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197374: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197378: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x197378u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x19737c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x19737cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197380: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197380u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197384: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197384u;
    SET_GPR_U32(ctx, 31, 0x19738Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197384u, 0x19738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19738Cu;
label_19738c:
    // 0x19738c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x197390: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x197390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x197394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197398: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x197398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19739c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x19739cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1973a0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1973a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1973a4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1973a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1973a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1973a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1973ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1973acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1973b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1973b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1973b4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1973B4u;
    SET_GPR_U32(ctx, 31, 0x1973BCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1973B4u, 0x1973BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973BCu;
label_1973bc:
    // 0x1973bc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1973bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1973c0: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x1973c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1973c4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1973c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1973c8: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1973cc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1973ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1973d0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1973d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1973d8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1973dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1973dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1973e0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1973E0u;
    SET_GPR_U32(ctx, 31, 0x1973E8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1973E0u, 0x1973E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973E8u;
label_1973e8:
    // 0x1973e8: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1973e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1973ec: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1973ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1973f0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1973f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1973f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1973f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1973f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1973f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1973fc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1973fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197400: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197404: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197408: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x197408u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19740c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19740cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197410: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197410u;
    SET_GPR_U32(ctx, 31, 0x197418u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197410u, 0x197418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197418u;
label_197418:
    // 0x197418: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19741c: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x19741Cu;
    {
        const bool branch_taken_0x19741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19741c) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x197424u;
}
