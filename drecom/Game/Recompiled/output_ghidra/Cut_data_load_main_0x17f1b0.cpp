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

// Function: Cut_data_load_main
// Address: 0x17f1b0 - 0x17f894
void Cut_data_load_main_0x17f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cut_data_load_main_0x17f1b0");
#endif

    switch (ctx->pc) {
        case 0x17f1dcu: goto label_17f1dc;
        case 0x17f1ecu: goto label_17f1ec;
        case 0x17f244u: goto label_17f244;
        case 0x17f268u: goto label_17f268;
        case 0x17f294u: goto label_17f294;
        case 0x17f2c0u: goto label_17f2c0;
        case 0x17f2c8u: goto label_17f2c8;
        case 0x17f328u: goto label_17f328;
        case 0x17f36cu: goto label_17f36c;
        case 0x17f404u: goto label_17f404;
        case 0x17f4ccu: goto label_17f4cc;
        case 0x17f58cu: goto label_17f58c;
        case 0x17f654u: goto label_17f654;
        case 0x17f71cu: goto label_17f71c;
        case 0x17f7e8u: goto label_17f7e8;
        case 0x17f858u: goto label_17f858;
        default: break;
    }

    ctx->pc = 0x17f1b0u;

    // 0x17f1b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17f1b4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x17f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x17f1b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17f1bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17f1c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f1c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f1cc: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x17f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x17f1d0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x17f1d0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17f1d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17F1D4u;
    {
        const bool branch_taken_0x17f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1d4) {
            ctx->pc = 0x17F1F8u;
            goto label_17f1f8;
        }
    }
    ctx->pc = 0x17F1DCu;
label_17f1dc:
    // 0x17f1dc: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x17f1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17f1e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f1e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f1e4: 0xc05f61c  jal         func_17D870
    ctx->pc = 0x17F1E4u;
    SET_GPR_U32(ctx, 31, 0x17F1ECu);
    ctx->pc = 0x17D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D870u, 0x17F1E4u, 0x17F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1ECu;
label_17f1ec:
    // 0x17f1ec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17f1f0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x17f1f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17f1f4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x17f1f4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_17f1f8:
    // 0x17f1f8: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x17f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17f1fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f1fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f200: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x17f200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17f204: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17F204u;
    {
        const bool branch_taken_0x17f204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f204) {
            ctx->pc = 0x17F1DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f1dc;
        }
    }
    ctx->pc = 0x17F20Cu;
    // 0x17f20c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17f20cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17f210: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f214: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17f214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f218: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17f218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f21c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17f21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f220: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x17f220u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x17f224: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x17f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17f228: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f228u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f22c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x17f230: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f234: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f238: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f23c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F23Cu;
    SET_GPR_U32(ctx, 31, 0x17F244u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F244u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F244u) { return; }
    ctx->pc = 0x17F244u;
label_17f244:
    // 0x17f244: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x17f244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17f248: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x17f248u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x17f24c: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x17f24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x17f250: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x17f250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x17f254: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x17f254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x17f258: 0x2465ed30  addiu       $a1, $v1, -0x12D0
    ctx->pc = 0x17f258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962480));
    // 0x17f25c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x17f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f260: 0xc046ba6  jal         func_11AE98
    ctx->pc = 0x17F260u;
    SET_GPR_U32(ctx, 31, 0x17F268u);
    ctx->pc = 0x11AE98u;
    {
        ctx->pc = 0x17F268u;
        ps2_stubs::strncmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F268u) { return; }
    ctx->pc = 0x17F268u;
label_17f268:
    // 0x17f268: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17f268u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f26c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F26Cu;
    {
        const bool branch_taken_0x17f26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f26c) {
            ctx->pc = 0x17F288u;
            goto label_17f288;
        }
    }
    ctx->pc = 0x17F274u;
    // 0x17f274: 0x93a3006f  lbu         $v1, 0x6F($sp)
    ctx->pc = 0x17f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 111)));
    // 0x17f278: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17f278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f27c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x17f27cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x17f280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17F280u;
    {
        const bool branch_taken_0x17f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f280) {
            ctx->pc = 0x17F290u;
            goto label_17f290;
        }
    }
    ctx->pc = 0x17F288u;
label_17f288:
    // 0x17f288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f28c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x17f28cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_17f290:
    // 0x17f290: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17f290u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_17f294:
    // 0x17f294: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f298: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f298u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f29c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f2a0: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17F2A0u;
    {
        const bool branch_taken_0x17f2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17f2a0) {
            ctx->pc = 0x17F2D4u;
            goto label_17f2d4;
        }
    }
    ctx->pc = 0x17F2A8u;
    // 0x17f2a8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x17f2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f2ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17f2b0: 0x2444ed40  addiu       $a0, $v0, -0x12C0
    ctx->pc = 0x17f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962496));
    // 0x17f2b4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17f2b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17f2b8: 0xc059c48  jal         func_167120
    ctx->pc = 0x17F2B8u;
    SET_GPR_U32(ctx, 31, 0x17F2C0u);
    ctx->pc = 0x167120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167120u, 0x17F2B8u, 0x17F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2C0u;
label_17f2c0:
    // 0x17f2c0: 0xc0593e8  jal         func_164FA0
    ctx->pc = 0x17F2C0u;
    SET_GPR_U32(ctx, 31, 0x17F2C8u);
    ctx->pc = 0x164FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164FA0u, 0x17F2C0u, 0x17F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2C8u;
label_17f2c8:
    // 0x17f2c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f2cc: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x17F2CCu;
    {
        const bool branch_taken_0x17f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f2cc) {
            ctx->pc = 0x17F870u;
            goto label_17f870;
        }
    }
    ctx->pc = 0x17F2D4u;
label_17f2d4:
    // 0x17f2d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f2d8: 0x12630017  beq         $s3, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F2D8u;
    {
        const bool branch_taken_0x17f2d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f2d8) {
            ctx->pc = 0x17F338u;
            goto label_17f338;
        }
    }
    ctx->pc = 0x17F2E0u;
    // 0x17f2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f2e4: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F2E4u;
    {
        const bool branch_taken_0x17f2e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f2e4) {
            ctx->pc = 0x17F2F4u;
            goto label_17f2f4;
        }
    }
    ctx->pc = 0x17F2ECu;
    // 0x17f2ec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17F2ECu;
    {
        const bool branch_taken_0x17f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f2ec) {
            ctx->pc = 0x17F378u;
            goto label_17f378;
        }
    }
    ctx->pc = 0x17F2F4u;
label_17f2f4:
    // 0x17f2f4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f2f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f2f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f2fc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f304: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f308: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f30c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f310: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f314: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f318: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f31c: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x17f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x17f320: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F320u;
    SET_GPR_U32(ctx, 31, 0x17F328u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F328u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F328u) { return; }
    ctx->pc = 0x17F328u;
label_17f328:
    // 0x17f328: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x17f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x17f32c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f32cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f330: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17F330u;
    {
        const bool branch_taken_0x17f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f330) {
            ctx->pc = 0x17F378u;
            goto label_17f378;
        }
    }
    ctx->pc = 0x17F338u;
label_17f338:
    // 0x17f338: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f33c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f33cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f340: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f348: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x17f348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f34c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f350: 0x24431380  addiu       $v1, $v0, 0x1380
    ctx->pc = 0x17f350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f354: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17f354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f358: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f35c: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f360: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x17f360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x17f364: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F364u;
    SET_GPR_U32(ctx, 31, 0x17F36Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F36Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F36Cu) { return; }
    ctx->pc = 0x17F36Cu;
label_17f36c:
    // 0x17f36c: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x17f370: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f370u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f374: 0x0  nop
    ctx->pc = 0x17f374u;
    // NOP
label_17f378:
    // 0x17f378: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17f378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f37c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f37cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f380: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x17f380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f384: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f388: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x17f388u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f38c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17f390: 0x24621380  addiu       $v0, $v1, 0x1380
    ctx->pc = 0x17f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17f394: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17f398: 0x8c460158  lw          $a2, 0x158($v0)
    ctx->pc = 0x17f398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x17f39c: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x17f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x17f3a0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x17F3A0u;
    {
        const bool branch_taken_0x17f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f3a0) {
            ctx->pc = 0x17F500u;
            goto label_17f500;
        }
    }
    ctx->pc = 0x17F3A8u;
    // 0x17f3a8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f3ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f3acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f3b0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f3b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f3b8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f3bc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x17f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x17f3c0: 0x24c20380  addiu       $v0, $a2, 0x380
    ctx->pc = 0x17f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x17f3c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f3c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f3cc: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f3d0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f3d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f3d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f3d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f3e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f3e4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f3e8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f3ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f3f0: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f3f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f3f8: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x17f3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f3fc: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F3FCu;
    SET_GPR_U32(ctx, 31, 0x17F404u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F404u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F404u) { return; }
    ctx->pc = 0x17F404u;
label_17f404:
    // 0x17f404: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f408: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f408u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f40c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f414: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f418: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f41c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f424: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f42c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f430: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f434: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f438: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f43c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f444: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f448: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f44c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f454: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f45c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f460: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f464: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x17f464u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17f468: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17f468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f46c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f470: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f470u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f474: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f47c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f480: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17f484: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17f488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f48c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f490: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f494: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f498: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f49c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f49cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f4a0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4a8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f4ac: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f4b0: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4b8: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f4bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f4c0: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x17f4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f4c4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F4C4u;
    SET_GPR_U32(ctx, 31, 0x17F4CCu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F4CCu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F4CCu) { return; }
    ctx->pc = 0x17F4CCu;
label_17f4cc:
    // 0x17f4cc: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f4d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f4d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f4d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f4d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4dc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f4e0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f4e4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4ec: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f4f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f4f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f4f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17f4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f4fc: 0x0  nop
    ctx->pc = 0x17f4fcu;
    // NOP
label_17f500:
    // 0x17f500: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f504: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f504u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f508: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f50c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f510: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f514: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f518: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f520: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x17f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x17f524: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x17f524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x17f528: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x17F528u;
    {
        const bool branch_taken_0x17f528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f528) {
            ctx->pc = 0x17F688u;
            goto label_17f688;
        }
    }
    ctx->pc = 0x17F530u;
    // 0x17f530: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f534: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f534u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f538: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f53c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f540: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f544: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17f544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17f548: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17f54c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f550: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f554: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f558: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f55c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f55cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f560: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f568: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f56c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f570: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f578: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f57c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f580: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x17f580u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f584: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F584u;
    SET_GPR_U32(ctx, 31, 0x17F58Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F58Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F58Cu) { return; }
    ctx->pc = 0x17F58Cu;
label_17f58c:
    // 0x17f58c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f590: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f590u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f594: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f59c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f5a0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f5a4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f5a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f5ac: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f5b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f5b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f5b8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17f5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f5bc: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f5c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f5c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f5c4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f5cc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f5d0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f5d4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f5dc: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x17f5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f5e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f5e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f5e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f5ec: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x17f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17f5f0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f5f4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f5f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f5f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f5fc: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f604: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f608: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17f608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17f60c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17f610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f614: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17f614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f618: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f61c: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f620: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f624: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f624u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f628: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f62c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f630: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f634: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f638: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f63c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f640: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f644: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f648: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x17f648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f64c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F64Cu;
    SET_GPR_U32(ctx, 31, 0x17F654u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F654u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F654u) { return; }
    ctx->pc = 0x17F654u;
label_17f654:
    // 0x17f654: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f658: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f658u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f65c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f664: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17f664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f668: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f66c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f674: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f67c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f680: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f684: 0x0  nop
    ctx->pc = 0x17f684u;
    // NOP
label_17f688:
    // 0x17f688: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f68c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f68cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f690: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x17f690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f698: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x17f698u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f69c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f6a0: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f6a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17f6a8: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x17f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x17f6ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x17f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x17f6b0: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x17F6B0u;
    {
        const bool branch_taken_0x17f6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f6b0) {
            ctx->pc = 0x17F820u;
            goto label_17f820;
        }
    }
    ctx->pc = 0x17F6B8u;
    // 0x17f6b8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f6bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f6bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f6c0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17f6c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f6c8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x17f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17f6cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x17f6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x17f6d0: 0x24a60380  addiu       $a2, $a1, 0x380
    ctx->pc = 0x17f6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x17f6d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17f6d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x17f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f6dc: 0x713821  addu        $a3, $v1, $s1
    ctx->pc = 0x17f6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17f6e0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f6e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f6e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f6e8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f6ec: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x17f6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17f6f0: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x17f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x17f6f4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17f6f8: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17f6fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f700: 0x90640154  lbu         $a0, 0x154($v1)
    ctx->pc = 0x17f700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17f704: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x17f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17f708: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x17f708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f70c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17f70cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f710: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x17f710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x17f714: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F714u;
    SET_GPR_U32(ctx, 31, 0x17F71Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F71Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F71Cu) { return; }
    ctx->pc = 0x17F71Cu;
label_17f71c:
    // 0x17f71c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f720: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f720u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f724: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x17f724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f728: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f72c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f730: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17f730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17f734: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17f738: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f73c: 0x90620154  lbu         $v0, 0x154($v1)
    ctx->pc = 0x17f73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17f740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f744: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17f744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f748: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x17f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17f74c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f74cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f750: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f758: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x17f758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f75c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17f760: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x17f760u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f764: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x17f764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x17f768: 0x24c21380  addiu       $v0, $a2, 0x1380
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x17f76c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17f770: 0x90430154  lbu         $v1, 0x154($v0)
    ctx->pc = 0x17f770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x17f774: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x17f774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f778: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f77c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x17f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f780: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x17f780u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x17f784: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17f784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f788: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f78c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f78cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f790: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x17f790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17f794: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x17f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f798: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x17f798u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17f79c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17f7a0: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x17f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17f7a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17f7a8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x17f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f7ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f7b0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f7b4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f7b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f7b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f7bc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f7c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f7c4: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x17f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f7c8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f7cc: 0x24431380  addiu       $v1, $v0, 0x1380
    ctx->pc = 0x17f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f7d0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x17f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17f7d4: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x17f7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x17f7d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17f7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f7dc: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x17f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f7e0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F7E0u;
    SET_GPR_U32(ctx, 31, 0x17F7E8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F7E8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F7E8u) { return; }
    ctx->pc = 0x17F7E8u;
label_17f7e8:
    // 0x17f7e8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17f7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f7ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f7ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f7f0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f7f4: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x17f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17f7f8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x17f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17f7fc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f800: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f804: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17f804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f808: 0x90620155  lbu         $v0, 0x155($v1)
    ctx->pc = 0x17f808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 341)));
    // 0x17f80c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f810: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17f810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f814: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f818: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f818u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f81c: 0x0  nop
    ctx->pc = 0x17f81cu;
    // NOP
label_17f820:
    // 0x17f820: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17f824: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x17f824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17f828: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x17f828u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x17f82c: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x17f82cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17f830: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f838: 0x54182a  slt         $v1, $v0, $s4
    ctx->pc = 0x17f838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x17f83c: 0x1460fe95  bnez        $v1, . + 4 + (-0x16B << 2)
    ctx->pc = 0x17F83Cu;
    {
        const bool branch_taken_0x17f83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f83c) {
            ctx->pc = 0x17F294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f294;
        }
    }
    ctx->pc = 0x17F844u;
    // 0x17f844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f848: 0x3c01004a  lui         $at, 0x4A
    ctx->pc = 0x17f848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)74 << 16));
    // 0x17f84c: 0xa02214d2  sb          $v0, 0x14D2($at)
    ctx->pc = 0x17f84cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4A14D2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4A14D2u, _value); } while (0);
    // 0x17f850: 0xc0593e8  jal         func_164FA0
    ctx->pc = 0x17F850u;
    SET_GPR_U32(ctx, 31, 0x17F858u);
    ctx->pc = 0x164FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164FA0u, 0x17F850u, 0x17F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F858u;
label_17f858:
    // 0x17f858: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17f858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17f85c: 0xa420f138  sh          $zero, -0xEC8($at)
    ctx->pc = 0x17f85cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F138u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47F138u, _value); } while (0);
    // 0x17f860: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17f860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f864: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x17f864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x17f868: 0xac2324e8  sw          $v1, 0x24E8($at)
    ctx->pc = 0x17f868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4B24E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B24E8u, _value); } while (0);
    // 0x17f86c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x17f86cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_17f870:
    // 0x17f870: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x17f870u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f874: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17f874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f87c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f888: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x17f888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17f88c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F894u;
}
