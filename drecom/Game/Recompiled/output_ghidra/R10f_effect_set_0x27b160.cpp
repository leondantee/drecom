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

// Function: R10f_effect_set
// Address: 0x27b160 - 0x27b348
void R10f_effect_set_0x27b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_effect_set_0x27b160");
#endif

    switch (ctx->pc) {
        case 0x27b178u: goto label_27b178;
        case 0x27b1dcu: goto label_27b1dc;
        case 0x27b1e8u: goto label_27b1e8;
        case 0x27b260u: goto label_27b260;
        case 0x27b26cu: goto label_27b26c;
        case 0x27b298u: goto label_27b298;
        case 0x27b2a4u: goto label_27b2a4;
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b314u: goto label_27b314;
        case 0x27b320u: goto label_27b320;
        default: break;
    }

    ctx->pc = 0x27b160u;

    // 0x27b160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b164: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27b164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27b168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b16c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27b16cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b170: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x27B170u;
    {
        const bool branch_taken_0x27b170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b170) {
            ctx->pc = 0x27B328u;
            goto label_27b328;
        }
    }
    ctx->pc = 0x27B178u;
label_27b178:
    // 0x27b178: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x27b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x27b17c: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27B17Cu;
    {
        const bool branch_taken_0x27b17c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b17c) {
            ctx->pc = 0x27B1B8u;
            goto label_27b1b8;
        }
    }
    ctx->pc = 0x27B184u;
    // 0x27b184: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27b188: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27B188u;
    {
        const bool branch_taken_0x27b188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b188) {
            ctx->pc = 0x27B1B8u;
            goto label_27b1b8;
        }
    }
    ctx->pc = 0x27B190u;
    // 0x27b190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b194: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B194u;
    {
        const bool branch_taken_0x27b194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b194) {
            ctx->pc = 0x27B1B8u;
            goto label_27b1b8;
        }
    }
    ctx->pc = 0x27B19Cu;
    // 0x27b19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b1a0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B1A0u;
    {
        const bool branch_taken_0x27b1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b1a0) {
            ctx->pc = 0x27B1B8u;
            goto label_27b1b8;
        }
    }
    ctx->pc = 0x27B1A8u;
    // 0x27b1a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B1A8u;
    {
        const bool branch_taken_0x27b1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b1a8) {
            ctx->pc = 0x27B1B8u;
            goto label_27b1b8;
        }
    }
    ctx->pc = 0x27B1B0u;
    // 0x27b1b0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x27B1B0u;
    {
        const bool branch_taken_0x27b1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b1b0) {
            ctx->pc = 0x27B2ACu;
            goto label_27b2ac;
        }
    }
    ctx->pc = 0x27B1B8u;
label_27b1b8:
    // 0x27b1b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27b1bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b1c0: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27b1c4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b1c8: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x27b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27b1cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b1ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b1d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b1d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b1d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B1D4u;
    SET_GPR_U32(ctx, 31, 0x27B1DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B1D4u, 0x27B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1DCu;
label_27b1dc:
    // 0x27b1dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b1dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b1e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B1E0u;
    SET_GPR_U32(ctx, 31, 0x27B1E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B1E0u, 0x27B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1E8u;
label_27b1e8:
    // 0x27b1e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27b1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27b1ec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27b1f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27b1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27b1f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27b1f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b1fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27b1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27b200: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27b200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27b204: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27b208: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27b208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27b20c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27b20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27b210: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27b214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b218: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27b21c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27b220: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27b224: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27b224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27b228: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27b228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27b22c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27b230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b234: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27B234u;
    {
        const bool branch_taken_0x27b234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b234) {
            ctx->pc = 0x27B274u;
            goto label_27b274;
        }
    }
    ctx->pc = 0x27B23Cu;
    // 0x27b23c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27b240: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b244: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27b248: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27b248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b24c: 0x24047304  addiu       $a0, $zero, 0x7304
    ctx->pc = 0x27b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29444));
    // 0x27b250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b254: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b254u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b258: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B258u;
    SET_GPR_U32(ctx, 31, 0x27B260u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B258u, 0x27B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B260u;
label_27b260:
    // 0x27b260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b264: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B264u;
    SET_GPR_U32(ctx, 31, 0x27B26Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B264u, 0x27B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B26Cu;
label_27b26c:
    // 0x27b26c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27B26Cu;
    {
        const bool branch_taken_0x27b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b26c) {
            ctx->pc = 0x27B320u;
            goto label_27b320;
        }
    }
    ctx->pc = 0x27B274u;
label_27b274:
    // 0x27b274: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27b274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27b278: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b27c: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27b280: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27b280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b284: 0x24047404  addiu       $a0, $zero, 0x7404
    ctx->pc = 0x27b284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29700));
    // 0x27b288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b28c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b28cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b290: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B290u;
    SET_GPR_U32(ctx, 31, 0x27B298u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B290u, 0x27B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B298u;
label_27b298:
    // 0x27b298: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b298u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b29c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B29Cu;
    SET_GPR_U32(ctx, 31, 0x27B2A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B29Cu, 0x27B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2A4u;
label_27b2a4:
    // 0x27b2a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27B2A4u;
    {
        const bool branch_taken_0x27b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b2a4) {
            ctx->pc = 0x27B320u;
            goto label_27b320;
        }
    }
    ctx->pc = 0x27B2ACu;
label_27b2ac:
    // 0x27b2ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27b2b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27b2b4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27b2b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b2bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27b2bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27b2c0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27b2c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27b2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27b2c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27b2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b2d0: 0x0  nop
    ctx->pc = 0x27b2d0u;
    // NOP
    // 0x27b2d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27b2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27b2d8: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x27b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27b2dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b2dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b2e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27b2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27b2e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b2e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b2e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B2E8u;
    SET_GPR_U32(ctx, 31, 0x27B2F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B2E8u, 0x27B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2F0u;
label_27b2f0:
    // 0x27b2f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b2f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b2f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B2F4u;
    SET_GPR_U32(ctx, 31, 0x27B2FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B2F4u, 0x27B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B2FCu;
label_27b2fc:
    // 0x27b2fc: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x27b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27b300: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27b300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b304: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27b304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27b308: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27b308u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27b30c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27B30Cu;
    SET_GPR_U32(ctx, 31, 0x27B314u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27B30Cu, 0x27B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B314u;
label_27b314:
    // 0x27b314: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27b314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27b318: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27B318u;
    SET_GPR_U32(ctx, 31, 0x27B320u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27B318u, 0x27B320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B320u;
label_27b320:
    // 0x27b320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27b320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27b324: 0x0  nop
    ctx->pc = 0x27b324u;
    // NOP
label_27b328:
    // 0x27b328: 0x2e030019  sltiu       $v1, $s0, 0x19
    ctx->pc = 0x27b328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x27b32c: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x27B32Cu;
    {
        const bool branch_taken_0x27b32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b32c) {
            ctx->pc = 0x27B178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b178;
        }
    }
    ctx->pc = 0x27B334u;
    // 0x27b334: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27b334u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b33c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27b33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27b340: 0x3e00008  jr          $ra
    ctx->pc = 0x27B340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B348u;
}
