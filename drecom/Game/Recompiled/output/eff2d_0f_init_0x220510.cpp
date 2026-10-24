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

// Function: eff2d_0f_init
// Address: 0x220510 - 0x22068c
void eff2d_0f_init_0x220510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0f_init_0x220510");
#endif

    switch (ctx->pc) {
        case 0x2205a8u: goto label_2205a8;
        case 0x2205b8u: goto label_2205b8;
        case 0x2205d0u: goto label_2205d0;
        case 0x2205ecu: goto label_2205ec;
        case 0x220614u: goto label_220614;
        case 0x220624u: goto label_220624;
        case 0x22063cu: goto label_22063c;
        case 0x220658u: goto label_220658;
        case 0x220668u: goto label_220668;
        case 0x220674u: goto label_220674;
        default: break;
    }

    ctx->pc = 0x220510u;

    // 0x220510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x220510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x220514: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x220514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x220518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22051c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x220520: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x220520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x220524: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x220524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220528: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x220528u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x22052c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220530: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x220530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x220534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x220538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22053c: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x22053cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x220540: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220544: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x220544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x220548: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x220548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22054c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22054Cu;
    {
        const bool branch_taken_0x22054c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22054c) {
            ctx->pc = 0x22055Cu;
            goto label_22055c;
        }
    }
    ctx->pc = 0x220554u;
    // 0x220554: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x220554u;
    {
        const bool branch_taken_0x220554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220554) {
            ctx->pc = 0x220658u;
            goto label_220658;
        }
    }
    ctx->pc = 0x22055Cu;
label_22055c:
    // 0x22055c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22055cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220560: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x220560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x220564: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x220564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x220568: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x220568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22056c: 0xac82020c  sw          $v0, 0x20C($a0)
    ctx->pc = 0x22056cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
    // 0x220570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x220570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220574: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x220574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x220578: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x220578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22057c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x220580: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x220580u;
    {
        const bool branch_taken_0x220580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220580) {
            ctx->pc = 0x2205F4u;
            goto label_2205f4;
        }
    }
    ctx->pc = 0x220588u;
    // 0x220588: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x220588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22058c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x220590: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x220594: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220598: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x220598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x22059c: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x22059cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2205a0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2205A0u;
    SET_GPR_U32(ctx, 31, 0x2205A8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2205A0u, 0x2205A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205A8u;
label_2205a8:
    // 0x2205a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2205a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2205acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205b0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2205B0u;
    SET_GPR_U32(ctx, 31, 0x2205B8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2205B8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2205B8u) { return; }
    ctx->pc = 0x2205B8u;
label_2205b8:
    // 0x2205b8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2205b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2205bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2205bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2205c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2205c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2205c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205c8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2205C8u;
    SET_GPR_U32(ctx, 31, 0x2205D0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2205D0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2205D0u) { return; }
    ctx->pc = 0x2205D0u;
label_2205d0:
    // 0x2205d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2205d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2205d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205d8: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x2205d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2205dc: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x2205dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2205e0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2205e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2205E4u;
    SET_GPR_U32(ctx, 31, 0x2205ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2205E4u, 0x2205ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205ECu;
label_2205ec:
    // 0x2205ec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2205ECu;
    {
        const bool branch_taken_0x2205ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2205ec) {
            ctx->pc = 0x220658u;
            goto label_220658;
        }
    }
    ctx->pc = 0x2205F4u;
label_2205f4:
    // 0x2205f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2205f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2205f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2205f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2205fc: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x2205fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x220600: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220604: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x220604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220608: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x220608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x22060c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x22060Cu;
    SET_GPR_U32(ctx, 31, 0x220614u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x22060Cu, 0x220614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220614u;
label_220614:
    // 0x220614: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220618: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x220618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22061c: 0xc040c24  jal         func_103090
    ctx->pc = 0x22061Cu;
    SET_GPR_U32(ctx, 31, 0x220624u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x220624u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x220624u) { return; }
    ctx->pc = 0x220624u;
label_220624:
    // 0x220624: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x220624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x220628: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x220628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22062c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22062cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220630: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x220630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220634: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x220634u;
    SET_GPR_U32(ctx, 31, 0x22063Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x22063Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22063Cu) { return; }
    ctx->pc = 0x22063Cu;
label_22063c:
    // 0x22063c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220640: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x220640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220644: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x220644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x220648: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x220648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x22064c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x22064cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x220650: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x220650u;
    SET_GPR_U32(ctx, 31, 0x220658u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x220650u, 0x220658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220658u;
label_220658:
    // 0x220658: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22065c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x22065cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x220660: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x220660u;
    SET_GPR_U32(ctx, 31, 0x220668u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x220660u, 0x220668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220668u;
label_220668:
    // 0x220668: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x220668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22066c: 0xc0c9918  jal         func_326460
    ctx->pc = 0x22066Cu;
    SET_GPR_U32(ctx, 31, 0x220674u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x22066Cu, 0x220674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220674u;
label_220674:
    // 0x220674: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x220674u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x220678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22067c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22067cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220680: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x220680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x220684: 0x3e00008  jr          $ra
    ctx->pc = 0x220684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22068Cu;
}
