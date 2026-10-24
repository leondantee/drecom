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

// Function: srp_07_init
// Address: 0x31f4c0 - 0x31f770
void srp_07_init_0x31f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_07_init_0x31f4c0");
#endif

    switch (ctx->pc) {
        case 0x31f520u: goto label_31f520;
        case 0x31f540u: goto label_31f540;
        case 0x31f578u: goto label_31f578;
        case 0x31f5bcu: goto label_31f5bc;
        case 0x31f6dcu: goto label_31f6dc;
        default: break;
    }

    ctx->pc = 0x31f4c0u;

    // 0x31f4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31f4c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x31f4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x31f4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31f4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31f4d0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x31f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x31f4d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f4d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f4dc: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x31f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x31f4e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f4e4: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x31f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x31f4e8: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x31f4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x31f4ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f4f0: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x31f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x31f4f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31f4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x31f4f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F4F8u;
    {
        const bool branch_taken_0x31f4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f4f8) {
            ctx->pc = 0x31F514u;
            goto label_31f514;
        }
    }
    ctx->pc = 0x31F500u;
    // 0x31f500: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f504: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x31f504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x31f508: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x31f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x31f50c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f510: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x31f510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
label_31f514:
    // 0x31f514: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f518: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x31F518u;
    SET_GPR_U32(ctx, 31, 0x31F520u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x31F518u, 0x31F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F520u;
label_31f520:
    // 0x31f520: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f524: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f528: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f52c: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x31f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x31f530: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31f534: 0x244602f0  addiu       $a2, $v0, 0x2F0
    ctx->pc = 0x31f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x31f538: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x31F538u;
    SET_GPR_U32(ctx, 31, 0x31F540u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x31F538u, 0x31F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F540u;
label_31f540:
    // 0x31f540: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f544: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x31f544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x31f548: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f54c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31f54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31f550: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F550u;
    {
        const bool branch_taken_0x31f550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f550) {
            ctx->pc = 0x31F56Cu;
            goto label_31f56c;
        }
    }
    ctx->pc = 0x31F558u;
    // 0x31f558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f55c: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x31f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x31f560: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31f560u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f568: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31f568u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_31f56c:
    // 0x31f56c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31f56cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f570: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31F570u;
    {
        const bool branch_taken_0x31f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f570) {
            ctx->pc = 0x31F598u;
            goto label_31f598;
        }
    }
    ctx->pc = 0x31F578u;
label_31f578:
    // 0x31f578: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f57c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x31f57cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f580: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f584: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f588: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f58c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x31f58cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31f590: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31f590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31f594: 0x0  nop
    ctx->pc = 0x31f594u;
    // NOP
label_31f598:
    // 0x31f598: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f59c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x31f59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f5a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f5a4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31f5a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31f5a8: 0x1020fff3  beqz        $at, . + 4 + (-0xD << 2)
    ctx->pc = 0x31F5A8u;
    {
        const bool branch_taken_0x31f5a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5a8) {
            ctx->pc = 0x31F578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f578;
        }
    }
    ctx->pc = 0x31F5B0u;
    // 0x31f5b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31f5b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f5b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31F5B4u;
    {
        const bool branch_taken_0x31f5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5b4) {
            ctx->pc = 0x31F5E8u;
            goto label_31f5e8;
        }
    }
    ctx->pc = 0x31F5BCu;
label_31f5bc:
    // 0x31f5bc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f5c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f5c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f5c8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x31f5c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f5cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f5d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f5d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f5d8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x31f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x31f5dc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x31f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31f5e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31f5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31f5e4: 0x0  nop
    ctx->pc = 0x31f5e4u;
    // NOP
label_31f5e8:
    // 0x31f5e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f5ec: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x31f5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x31f5f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f5f4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31f5f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31f5f8: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x31F5F8u;
    {
        const bool branch_taken_0x31f5f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5f8) {
            ctx->pc = 0x31F5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f5bc;
        }
    }
    ctx->pc = 0x31F600u;
    // 0x31f600: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f604: 0xa0600345  sb          $zero, 0x345($v1)
    ctx->pc = 0x31f604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f608: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f60c: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x31f60cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x31f610: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f614: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x31f614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f618: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f61c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x31f61cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f620: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f624: 0xac600278  sw          $zero, 0x278($v1)
    ctx->pc = 0x31f624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 0));
    // 0x31f628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f62c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x31f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f630: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x31f630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x31f634: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x31f634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x31f638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f63c: 0x0  nop
    ctx->pc = 0x31f63cu;
    // NOP
    // 0x31f640: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31f640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f644: 0x0  nop
    ctx->pc = 0x31f644u;
    // NOP
    // 0x31f648: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x31F648u;
    {
        const bool branch_taken_0x31f648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f648) {
            ctx->pc = 0x31F6C4u;
            goto label_31f6c4;
        }
    }
    ctx->pc = 0x31F650u;
    // 0x31f650: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f654: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x31f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f65c: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x31f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f660: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31f660u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31f664: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f668: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x31f668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f66c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F66Cu;
    {
        const bool branch_taken_0x31f66c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31f66c) {
            ctx->pc = 0x31F688u;
            goto label_31f688;
        }
    }
    ctx->pc = 0x31F674u;
    // 0x31f674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31f674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f678: 0x0  nop
    ctx->pc = 0x31f678u;
    // NOP
    // 0x31f67c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f67cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f680: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31F680u;
    {
        const bool branch_taken_0x31f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f680) {
            ctx->pc = 0x31F6A4u;
            goto label_31f6a4;
        }
    }
    ctx->pc = 0x31F688u;
label_31f688:
    // 0x31f688: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x31f688u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x31f68c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31f68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31f690: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31f690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31f694: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31f694u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f698: 0x0  nop
    ctx->pc = 0x31f698u;
    // NOP
    // 0x31f69c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f6a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31f6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31f6a4:
    // 0x31f6a4: 0x0  nop
    ctx->pc = 0x31f6a4u;
    // NOP
    // 0x31f6a8: 0x0  nop
    ctx->pc = 0x31f6a8u;
    // NOP
    // 0x31f6ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31f6acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x31f6b0: 0x0  nop
    ctx->pc = 0x31f6b0u;
    // NOP
    // 0x31f6b4: 0x0  nop
    ctx->pc = 0x31f6b4u;
    // NOP
    // 0x31f6b8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31f6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x31f6bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31F6BCu;
    {
        const bool branch_taken_0x31f6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f6bc) {
            ctx->pc = 0x31F6D0u;
            goto label_31f6d0;
        }
    }
    ctx->pc = 0x31F6C4u;
label_31f6c4:
    // 0x31f6c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31f6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f6c8: 0x0  nop
    ctx->pc = 0x31f6c8u;
    // NOP
    // 0x31f6cc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31f6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_31f6d0:
    // 0x31f6d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31f6d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f6d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31F6D4u;
    {
        const bool branch_taken_0x31f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f6d4) {
            ctx->pc = 0x31F740u;
            goto label_31f740;
        }
    }
    ctx->pc = 0x31F6DCu;
label_31f6dc:
    // 0x31f6dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f6e0: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x31f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f6e4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F6E4u;
    {
        const bool branch_taken_0x31f6e4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31f6e4) {
            ctx->pc = 0x31F700u;
            goto label_31f700;
        }
    }
    ctx->pc = 0x31F6ECu;
    // 0x31f6ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31f6ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f6f0: 0x0  nop
    ctx->pc = 0x31f6f0u;
    // NOP
    // 0x31f6f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31f6f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31f6f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31F6F8u;
    {
        const bool branch_taken_0x31f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f6f8) {
            ctx->pc = 0x31F71Cu;
            goto label_31f71c;
        }
    }
    ctx->pc = 0x31F700u;
label_31f700:
    // 0x31f700: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x31f700u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x31f704: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x31f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x31f708: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31f708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31f70c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31f70cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f710: 0x0  nop
    ctx->pc = 0x31f710u;
    // NOP
    // 0x31f714: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31f714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31f718: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31f718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31f71c:
    // 0x31f71c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x31f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f724: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31f724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31f728: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x31f728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31f72c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f734: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x31f734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x31f738: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31f738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31f73c: 0x0  nop
    ctx->pc = 0x31f73cu;
    // NOP
label_31f740:
    // 0x31f740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f744: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x31f744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f748: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f74c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31f74cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31f750: 0x1020ffe2  beqz        $at, . + 4 + (-0x1E << 2)
    ctx->pc = 0x31F750u;
    {
        const bool branch_taken_0x31f750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f750) {
            ctx->pc = 0x31F6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f6dc;
        }
    }
    ctx->pc = 0x31F758u;
    // 0x31f758: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x31f758u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31f760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f764: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31f764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31f768: 0x3e00008  jr          $ra
    ctx->pc = 0x31F768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F770u;
}
