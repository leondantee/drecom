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

// Function: Main_menu_move
// Address: 0x292d10 - 0x292f00
void Main_menu_move_0x292d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_menu_move_0x292d10");
#endif

    switch (ctx->pc) {
        case 0x292d88u: goto label_292d88;
        case 0x292dfcu: goto label_292dfc;
        case 0x292e14u: goto label_292e14;
        case 0x292e2cu: goto label_292e2c;
        case 0x292e40u: goto label_292e40;
        case 0x292ea8u: goto label_292ea8;
        case 0x292ec0u: goto label_292ec0;
        case 0x292ed8u: goto label_292ed8;
        case 0x292eecu: goto label_292eec;
        default: break;
    }

    ctx->pc = 0x292d10u;

    // 0x292d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292d14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x292d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x292d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292d1c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x292d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x292d20: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x292d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x292d24: 0x92036608  lbu         $v1, 0x6608($s0)
    ctx->pc = 0x292d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x62C758u));
    // 0x292d28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x292d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x292d2c: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x292D2Cu;
    {
        const bool branch_taken_0x292d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x292d2c) {
            ctx->pc = 0x292EECu;
            goto label_292eec;
        }
    }
    ctx->pc = 0x292D34u;
    // 0x292d34: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x292d38: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x292D38u;
    {
        const bool branch_taken_0x292d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292d38) {
            ctx->pc = 0x292EECu;
            goto label_292eec;
        }
    }
    ctx->pc = 0x292D40u;
    // 0x292d40: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x292d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x292d44: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x292d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x292d48: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x292D48u;
    {
        const bool branch_taken_0x292d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x292d48) {
            ctx->pc = 0x292EECu;
            goto label_292eec;
        }
    }
    ctx->pc = 0x292D50u;
    // 0x292d50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292d54: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x292d54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x292d58: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x292d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x292d5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x292d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x292d60: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x292D60u;
    {
        const bool branch_taken_0x292d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292d60) {
            ctx->pc = 0x292D94u;
            goto label_292d94;
        }
    }
    ctx->pc = 0x292D68u;
    // 0x292d68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x292d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292d6c: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x292d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x292d70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292d74: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x292d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x292d78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292d78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292d7c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292d7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292d80: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x292D80u;
    SET_GPR_U32(ctx, 31, 0x292D88u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x292D80u, 0x292D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D88u;
label_292d88:
    // 0x292d88: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x292d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x292d8c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x292d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x292d90: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x292d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
label_292d94:
    // 0x292d94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292d98: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x292d98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x292d9c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x292d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x292da0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x292da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x292da4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x292DA4u;
    {
        const bool branch_taken_0x292da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292da4) {
            ctx->pc = 0x292E40u;
            goto label_292e40;
        }
    }
    ctx->pc = 0x292DACu;
    // 0x292dac: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292db0: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292DB0u;
    {
        const bool branch_taken_0x292db0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x292db0) {
            ctx->pc = 0x292DCCu;
            goto label_292dcc;
        }
    }
    ctx->pc = 0x292DB8u;
    // 0x292db8: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292dbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x292dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x292dc0: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x292dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292DC4u;
    {
        const bool branch_taken_0x292dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292dc4) {
            ctx->pc = 0x292DD4u;
            goto label_292dd4;
        }
    }
    ctx->pc = 0x292DCCu;
label_292dcc:
    // 0x292dcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x292dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292dd0: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
label_292dd4:
    // 0x292dd4: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x292dd8: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x292dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x292ddc: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x292ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x292de0: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x292de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x292de4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292de8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x292de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x292dec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292df0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292df0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292df4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x292DF4u;
    SET_GPR_U32(ctx, 31, 0x292DFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x292DF4u, 0x292DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292DFCu;
label_292dfc:
    // 0x292dfc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e00: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e04: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e08: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x292e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x292e0c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292E0Cu;
    SET_GPR_U32(ctx, 31, 0x292E14u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292E0Cu, 0x292E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E14u;
label_292e14:
    // 0x292e14: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e18: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e1c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292e20: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x292e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x292e24: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292E24u;
    SET_GPR_U32(ctx, 31, 0x292E2Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292E24u, 0x292E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E2Cu;
label_292e2c:
    // 0x292e2c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x292e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292e30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292e30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292e34: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292e34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292e38: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x292E38u;
    SET_GPR_U32(ctx, 31, 0x292E40u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x292E38u, 0x292E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E40u;
label_292e40:
    // 0x292e40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292e44: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x292e44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x292e48: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x292e4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x292e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x292e50: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x292E50u;
    {
        const bool branch_taken_0x292e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e50) {
            ctx->pc = 0x292EECu;
            goto label_292eec;
        }
    }
    ctx->pc = 0x292E58u;
    // 0x292e58: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292e5c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x292e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x292e60: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x292E60u;
    {
        const bool branch_taken_0x292e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e60) {
            ctx->pc = 0x292E7Cu;
            goto label_292e7c;
        }
    }
    ctx->pc = 0x292E68u;
    // 0x292e68: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292e6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292e70: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x292e74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x292E74u;
    {
        const bool branch_taken_0x292e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e74) {
            ctx->pc = 0x292E80u;
            goto label_292e80;
        }
    }
    ctx->pc = 0x292E7Cu;
label_292e7c:
    // 0x292e7c: 0xae005dc4  sw          $zero, 0x5DC4($s0)
    ctx->pc = 0x292e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 0));
label_292e80:
    // 0x292e80: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x292e84: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x292e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x292e88: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x292e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x292e8c: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x292e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x292e90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292e94: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x292e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x292e98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292e9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292e9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292ea0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x292EA0u;
    SET_GPR_U32(ctx, 31, 0x292EA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x292EA0u, 0x292EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EA8u;
label_292ea8:
    // 0x292ea8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292eac: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292eb0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292eb4: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x292eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x292eb8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292EB8u;
    SET_GPR_U32(ctx, 31, 0x292EC0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292EB8u, 0x292EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EC0u;
label_292ec0:
    // 0x292ec0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292ec4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292ec8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292ecc: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x292eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x292ed0: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292ED0u;
    SET_GPR_U32(ctx, 31, 0x292ED8u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292ED0u, 0x292ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292ED8u;
label_292ed8:
    // 0x292ed8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x292ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292edc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292edcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292ee0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292ee4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x292EE4u;
    SET_GPR_U32(ctx, 31, 0x292EECu);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x292EE4u, 0x292EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EECu;
label_292eec:
    // 0x292eec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x292eecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292ef4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x292ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x292ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x292EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F00u;
}
