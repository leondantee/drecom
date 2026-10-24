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

// Function: R10a_evt_scene5
// Address: 0x272ad0 - 0x272f08
void R10a_evt_scene5_0x272ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_scene5_0x272ad0");
#endif

    switch (ctx->pc) {
        case 0x272b08u: goto label_272b08;
        case 0x272b10u: goto label_272b10;
        case 0x272b30u: goto label_272b30;
        case 0x272b44u: goto label_272b44;
        case 0x272b68u: goto label_272b68;
        case 0x272b7cu: goto label_272b7c;
        case 0x272ba4u: goto label_272ba4;
        case 0x272bd0u: goto label_272bd0;
        case 0x272c88u: goto label_272c88;
        case 0x272d58u: goto label_272d58;
        case 0x272ddcu: goto label_272ddc;
        case 0x272ed4u: goto label_272ed4;
        case 0x272ef0u: goto label_272ef0;
        default: break;
    }

    ctx->pc = 0x272ad0u;

    // 0x272ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x272ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x272ad4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x272ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x272ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272ae0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x272ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x272ae4: 0x2450fe00  addiu       $s0, $v0, -0x200
    ctx->pc = 0x272ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x272ae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272aec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x272aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x272af0: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x272af0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x272af4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x272af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x272af8: 0xa0204f12  sb          $zero, 0x4F12($at)
    ctx->pc = 0x272af8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F12u, _value); } while (0);
    // 0x272afc: 0xae001bf0  sw          $zero, 0x1BF0($s0)
    ctx->pc = 0x272afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6219F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6219F0u, _value); } while (0);
    // 0x272b00: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x272B00u;
    {
        const bool branch_taken_0x272b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b00) {
            ctx->pc = 0x272ED8u;
            goto label_272ed8;
        }
    }
    ctx->pc = 0x272B08u;
label_272b08:
    // 0x272b08: 0xc09d484  jal         func_275210
    ctx->pc = 0x272B08u;
    SET_GPR_U32(ctx, 31, 0x272B10u);
    ctx->pc = 0x275210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275210u, 0x272B08u, 0x272B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B10u;
label_272b10:
    // 0x272b10: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272b14: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x272b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x272b18: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x272B18u;
    {
        const bool branch_taken_0x272b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272b18) {
            ctx->pc = 0x272B48u;
            goto label_272b48;
        }
    }
    ctx->pc = 0x272B20u;
    // 0x272b20: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x272b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x272b24: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x272b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x272b28: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B28u;
    SET_GPR_U32(ctx, 31, 0x272B30u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B28u, 0x272B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B30u;
label_272b30:
    // 0x272b30: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272b34: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x272b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x272b38: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x272b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x272b3c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B3Cu;
    SET_GPR_U32(ctx, 31, 0x272B44u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B3Cu, 0x272B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B44u;
label_272b44:
    // 0x272b44: 0x0  nop
    ctx->pc = 0x272b44u;
    // NOP
label_272b48:
    // 0x272b48: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272b4c: 0x2402015e  addiu       $v0, $zero, 0x15E
    ctx->pc = 0x272b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x272b50: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x272B50u;
    {
        const bool branch_taken_0x272b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272b50) {
            ctx->pc = 0x272B80u;
            goto label_272b80;
        }
    }
    ctx->pc = 0x272B58u;
    // 0x272b58: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x272b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x272b5c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x272b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x272b60: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B60u;
    SET_GPR_U32(ctx, 31, 0x272B68u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B60u, 0x272B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B68u;
label_272b68:
    // 0x272b68: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272b6c: 0x3444c864  ori         $a0, $v0, 0xC864
    ctx->pc = 0x272b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51300);
    // 0x272b70: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x272b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x272b74: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B74u;
    SET_GPR_U32(ctx, 31, 0x272B7Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B74u, 0x272B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B7Cu;
label_272b7c:
    // 0x272b7c: 0x0  nop
    ctx->pc = 0x272b7cu;
    // NOP
label_272b80:
    // 0x272b80: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272b84: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x272b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x272b88: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272B88u;
    {
        const bool branch_taken_0x272b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272b88) {
            ctx->pc = 0x272BA8u;
            goto label_272ba8;
        }
    }
    ctx->pc = 0x272B90u;
    // 0x272b90: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272b94: 0x344464c8  ori         $a0, $v0, 0x64C8
    ctx->pc = 0x272b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25800);
    // 0x272b98: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x272b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x272b9c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272B9Cu;
    SET_GPR_U32(ctx, 31, 0x272BA4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272B9Cu, 0x272BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BA4u;
label_272ba4:
    // 0x272ba4: 0x0  nop
    ctx->pc = 0x272ba4u;
    // NOP
label_272ba8:
    // 0x272ba8: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272bac: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x272bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x272bb0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272BB0u;
    {
        const bool branch_taken_0x272bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272bb0) {
            ctx->pc = 0x272BD0u;
            goto label_272bd0;
        }
    }
    ctx->pc = 0x272BB8u;
    // 0x272bb8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x272bbc: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x272bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x272bc0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x272bc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x272bc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x272bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272bc8: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x272BC8u;
    SET_GPR_U32(ctx, 31, 0x272BD0u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x272BC8u, 0x272BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BD0u;
label_272bd0:
    // 0x272bd0: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272bd4: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x272bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x272bd8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272BD8u;
    {
        const bool branch_taken_0x272bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272bd8) {
            ctx->pc = 0x272BF8u;
            goto label_272bf8;
        }
    }
    ctx->pc = 0x272BE0u;
    // 0x272be0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272be4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x272be4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x272be8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x272be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x272bec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x272becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272bf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272bf4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x272bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_272bf8:
    // 0x272bf8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272bfc: 0x2c41004c  sltiu       $at, $v0, 0x4C
    ctx->pc = 0x272bfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x272c00: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x272C00u;
    {
        const bool branch_taken_0x272c00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x272c00) {
            ctx->pc = 0x272C88u;
            goto label_272c88;
        }
    }
    ctx->pc = 0x272C08u;
    // 0x272c08: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272c0c: 0x2c410078  sltiu       $at, $v0, 0x78
    ctx->pc = 0x272c0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x272c10: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x272C10u;
    {
        const bool branch_taken_0x272c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c10) {
            ctx->pc = 0x272C88u;
            goto label_272c88;
        }
    }
    ctx->pc = 0x272C18u;
    // 0x272c18: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272c1c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x272c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x272c20: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272C20u;
    {
        const bool branch_taken_0x272c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272c20) {
            ctx->pc = 0x272C88u;
            goto label_272c88;
        }
    }
    ctx->pc = 0x272C28u;
    // 0x272c28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x272c2c: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x272c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x272c30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x272c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x272c34: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x272c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x272c38: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x272c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x272c3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x272c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x272c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272c44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272c48: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x272c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x272c4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x272c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x272c50: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x272c50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x272c54: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x272c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x272c58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x272c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x272c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272c60: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x272c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x272c64: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x272c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x272c68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x272c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x272c6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x272c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x272c70: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x272c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x272c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272c78: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x272c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x272c7c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x272c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x272c80: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x272C80u;
    SET_GPR_U32(ctx, 31, 0x272C88u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x272C80u, 0x272C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C88u;
label_272c88:
    // 0x272c88: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272c8c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x272c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x272c90: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272C90u;
    {
        const bool branch_taken_0x272c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272c90) {
            ctx->pc = 0x272CB8u;
            goto label_272cb8;
        }
    }
    ctx->pc = 0x272C98u;
    // 0x272c98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272c9c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x272c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x272ca0: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x272ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x272ca4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272ca8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272cac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272cb0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x272cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x272cb4: 0x0  nop
    ctx->pc = 0x272cb4u;
    // NOP
label_272cb8:
    // 0x272cb8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272cbc: 0x2c4200aa  sltiu       $v0, $v0, 0xAA
    ctx->pc = 0x272cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)170) ? 1 : 0);
    // 0x272cc0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x272CC0u;
    {
        const bool branch_taken_0x272cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272cc0) {
            ctx->pc = 0x272D58u;
            goto label_272d58;
        }
    }
    ctx->pc = 0x272CC8u;
    // 0x272cc8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272ccc: 0x2c4100b5  sltiu       $at, $v0, 0xB5
    ctx->pc = 0x272cccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)181) ? 1 : 0);
    // 0x272cd0: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x272CD0u;
    {
        const bool branch_taken_0x272cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x272cd0) {
            ctx->pc = 0x272D58u;
            goto label_272d58;
        }
    }
    ctx->pc = 0x272CD8u;
    // 0x272cd8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272cdc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x272cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x272ce0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x272CE0u;
    {
        const bool branch_taken_0x272ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272ce0) {
            ctx->pc = 0x272D58u;
            goto label_272d58;
        }
    }
    ctx->pc = 0x272CE8u;
    // 0x272ce8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x272cec: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x272cecu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x272cf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272cf4: 0x0  nop
    ctx->pc = 0x272cf4u;
    // NOP
    // 0x272cf8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x272cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x272cfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d00: 0x0  nop
    ctx->pc = 0x272d00u;
    // NOP
    // 0x272d04: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x272d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x272d08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d0c: 0x0  nop
    ctx->pc = 0x272d0cu;
    // NOP
    // 0x272d10: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x272d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x272d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d1c: 0x0  nop
    ctx->pc = 0x272d1cu;
    // NOP
    // 0x272d20: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x272d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x272d24: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x272d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x272d28: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x272d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x272d2c: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x272d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x272d30: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x272d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x272d34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x272d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272d38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272d3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x272d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x272d40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x272d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272d44: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x272d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x272d48: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x272d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x272d4c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x272d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x272d50: 0xc086488  jal         func_219220
    ctx->pc = 0x272D50u;
    SET_GPR_U32(ctx, 31, 0x272D58u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x272D50u, 0x272D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D58u;
label_272d58:
    // 0x272d58: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272d5c: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x272d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x272d60: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x272D60u;
    {
        const bool branch_taken_0x272d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272d60) {
            ctx->pc = 0x272DE0u;
            goto label_272de0;
        }
    }
    ctx->pc = 0x272D68u;
    // 0x272d68: 0x3c024616  lui         $v0, 0x4616
    ctx->pc = 0x272d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17942 << 16));
    // 0x272d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d70: 0x0  nop
    ctx->pc = 0x272d70u;
    // NOP
    // 0x272d74: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x272d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x272d78: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x272d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x272d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d80: 0x0  nop
    ctx->pc = 0x272d80u;
    // NOP
    // 0x272d84: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x272d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x272d88: 0x3c02c5a2  lui         $v0, 0xC5A2
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50594 << 16));
    // 0x272d8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x272d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x272d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272d94: 0x0  nop
    ctx->pc = 0x272d94u;
    // NOP
    // 0x272d98: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x272d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x272d9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272da4: 0x0  nop
    ctx->pc = 0x272da4u;
    // NOP
    // 0x272da8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x272da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x272dac: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x272dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x272db0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x272db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272db8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x272db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x272dbc: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x272dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x272dc0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x272dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x272dc4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x272dc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272dc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x272dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272dcc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x272dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x272dd0: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x272dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x272dd4: 0xc086488  jal         func_219220
    ctx->pc = 0x272DD4u;
    SET_GPR_U32(ctx, 31, 0x272DDCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x272DD4u, 0x272DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DDCu;
label_272ddc:
    // 0x272ddc: 0x0  nop
    ctx->pc = 0x272ddcu;
    // NOP
label_272de0:
    // 0x272de0: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272de4: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x272de8: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x272DE8u;
    {
        const bool branch_taken_0x272de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272de8) {
            ctx->pc = 0x272E98u;
            goto label_272e98;
        }
    }
    ctx->pc = 0x272DF0u;
    // 0x272df0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272df4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x272df4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x272df8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x272df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x272dfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x272dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272e00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272e04: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x272e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x272e08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e0c: 0x8c24f9e0  lw          $a0, -0x620($at)
    ctx->pc = 0x272e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x272e10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e14: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e1c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e24: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x272e24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x272e28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e2c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e3c: 0x8c24f9e8  lw          $a0, -0x618($at)
    ctx->pc = 0x272e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x272e40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e44: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e4c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e54: 0x8c24f9ec  lw          $a0, -0x614($at)
    ctx->pc = 0x272e54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x272e58: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e5c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e64: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e6c: 0x8c24f9f0  lw          $a0, -0x610($at)
    ctx->pc = 0x272e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9F0u));
    // 0x272e70: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e74: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e7c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e84: 0x8c24f9f4  lw          $a0, -0x60C($at)
    ctx->pc = 0x272e84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9F4u));
    // 0x272e88: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e8c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e94: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_272e98:
    // 0x272e98: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272e9c: 0x24020153  addiu       $v0, $zero, 0x153
    ctx->pc = 0x272e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 339));
    // 0x272ea0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272EA0u;
    {
        const bool branch_taken_0x272ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272ea0) {
            ctx->pc = 0x272EC8u;
            goto label_272ec8;
        }
    }
    ctx->pc = 0x272EA8u;
    // 0x272ea8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272eac: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x272eacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x272eb0: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x272eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x272eb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272eb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272ebc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272ec0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x272ec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x272ec4: 0x0  nop
    ctx->pc = 0x272ec4u;
    // NOP
label_272ec8:
    // 0x272ec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272ecc: 0xc084964  jal         func_212590
    ctx->pc = 0x272ECCu;
    SET_GPR_U32(ctx, 31, 0x272ED4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272ECCu, 0x272ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272ED4u;
label_272ed4:
    // 0x272ed4: 0x0  nop
    ctx->pc = 0x272ed4u;
    // NOP
label_272ed8:
    // 0x272ed8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272edc: 0x2c420184  sltiu       $v0, $v0, 0x184
    ctx->pc = 0x272edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
    // 0x272ee0: 0x1440ff09  bnez        $v0, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x272EE0u;
    {
        const bool branch_taken_0x272ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272ee0) {
            ctx->pc = 0x272B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272b08;
        }
    }
    ctx->pc = 0x272EE8u;
    // 0x272ee8: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272EE8u;
    SET_GPR_U32(ctx, 31, 0x272EF0u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272EE8u, 0x272EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EF0u;
label_272ef0:
    // 0x272ef0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x272ef0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272efc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x272efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x272f00: 0x3e00008  jr          $ra
    ctx->pc = 0x272F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272F08u;
}
