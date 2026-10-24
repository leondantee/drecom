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

// Function: entry_00197114
// Address: 0x197114 - 0x1972b8
void entry_00197114_0x197114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197114_0x197114");
#endif

    switch (ctx->pc) {
        case 0x197148u: goto label_197148;
        case 0x19717cu: goto label_19717c;
        case 0x1971b0u: goto label_1971b0;
        case 0x1971e8u: goto label_1971e8;
        case 0x19721cu: goto label_19721c;
        case 0x197250u: goto label_197250;
        case 0x197284u: goto label_197284;
        case 0x1972acu: goto label_1972ac;
        default: break;
    }

    ctx->pc = 0x197114u;

    // 0x197114: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x197114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197118: 0x34a7d70a  ori         $a3, $a1, 0xD70A
    ctx->pc = 0x197118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x19711c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x19711cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197120: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197124: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x197124u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197128: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x197128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19712c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x19712cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197134: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197134u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197138: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19713c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19713cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197140: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197140u;
    SET_GPR_U32(ctx, 31, 0x197148u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197140u, 0x197148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197148u;
label_197148:
    // 0x197148: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x19714c: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x19714cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197150: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197150u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197154: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197158: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x197158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x19715c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x19715cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197160: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197160u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197168: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197168u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19716c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19716cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197170: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197170u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197174: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197174u;
    SET_GPR_U32(ctx, 31, 0x19717Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197174u, 0x19717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19717Cu;
label_19717c:
    // 0x19717c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x19717cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197180: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x197180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197184: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197184u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197188: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19718c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x19718cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197190: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197194: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19719c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19719cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1971a0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1971a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1971a4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1971a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1971a8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1971A8u;
    SET_GPR_U32(ctx, 31, 0x1971B0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1971A8u, 0x1971B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1971B0u;
label_1971b0:
    // 0x1971b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1971b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1971b4: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1971b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1971b8: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1971b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1971bc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1971bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1971c0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1971c4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1971c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1971c8: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x1971c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1971cc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1971ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1971d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1971d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1971d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1971d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1971d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1971d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1971dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1971dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1971e0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1971E0u;
    SET_GPR_U32(ctx, 31, 0x1971E8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1971E0u, 0x1971E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1971E8u;
label_1971e8:
    // 0x1971e8: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x1971e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x1971ec: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x1971ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x1971f0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1971f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1971f4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1971f8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1971f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1971fc: 0x24080013  addiu       $t0, $zero, 0x13
    ctx->pc = 0x1971fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197200: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197208: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19720c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197210: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197210u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197214: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197214u;
    SET_GPR_U32(ctx, 31, 0x19721Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197214u, 0x19721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19721Cu;
label_19721c:
    // 0x19721c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x19721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197220: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x197220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197224: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197224u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197228: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19722c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x19722cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197230: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x197230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x197234: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19723c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19723cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197240: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197244: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197244u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197248: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197248u;
    SET_GPR_U32(ctx, 31, 0x197250u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197248u, 0x197250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197250u;
label_197250:
    // 0x197250: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x197254: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x197254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x197258: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x197258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19725c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x19725cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197260: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x197260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x197264: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x197264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197268: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x197268u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x19726c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197270: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197270u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197274: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x197274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197278: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197278u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19727c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19727Cu;
    SET_GPR_U32(ctx, 31, 0x197284u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19727Cu, 0x197284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197284u;
label_197284:
    // 0x197284: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197288: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x197288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19728c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19728cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197290: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197294: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x197294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19729c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1972a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1972a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1972a4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1972A4u;
    SET_GPR_U32(ctx, 31, 0x1972ACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1972A4u, 0x1972ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972ACu;
label_1972ac:
    // 0x1972ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1972acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1972b0: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x1972B0u;
    {
        const bool branch_taken_0x1972b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1972b0) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x1972B8u;
}
