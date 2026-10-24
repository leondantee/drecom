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

// Function: Em05_dm_ck
// Address: 0x20dc50 - 0x20e070
void Em05_dm_ck_0x20dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_dm_ck_0x20dc50");
#endif

    switch (ctx->pc) {
        case 0x20dcc4u: goto label_20dcc4;
        case 0x20dcdcu: goto label_20dcdc;
        case 0x20dcf4u: goto label_20dcf4;
        case 0x20dd14u: goto label_20dd14;
        case 0x20ddbcu: goto label_20ddbc;
        case 0x20dddcu: goto label_20dddc;
        case 0x20df34u: goto label_20df34;
        case 0x20df54u: goto label_20df54;
        default: break;
    }

    ctx->pc = 0x20dc50u;

    // 0x20dc50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20dc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20dc54: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x20dc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20dc58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20dc5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20dc60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20dc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20dc64: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x20dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x20dc68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dc6c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x20dc6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x20dc70: 0x106000f8  beqz        $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x20DC70u;
    {
        const bool branch_taken_0x20dc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc70) {
            ctx->pc = 0x20E054u;
            goto label_20e054;
        }
    }
    ctx->pc = 0x20DC78u;
    // 0x20dc78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dc7c: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x20dc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dc80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dc84: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x20dc84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dc88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dc8c: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x20dc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x20dc90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dc94: 0x84420096  lh          $v0, 0x96($v0)
    ctx->pc = 0x20dc94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x20dc98: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20dc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20dc9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20dc9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20dca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dca4: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20DCA4u;
    {
        const bool branch_taken_0x20dca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20dca4) {
            ctx->pc = 0x20DCFCu;
            goto label_20dcfc;
        }
    }
    ctx->pc = 0x20DCACu;
    // 0x20dcac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dcb0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x20dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dcb4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x20dcb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20dcb8: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x20dcb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x20dcbc: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x20DCBCu;
    SET_GPR_U32(ctx, 31, 0x20DCC4u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x20DCBCu, 0x20DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCC4u;
label_20dcc4:
    // 0x20dcc4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dcc8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x20dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dccc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x20dcccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20dcd0: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x20dcd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x20dcd4: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x20DCD4u;
    SET_GPR_U32(ctx, 31, 0x20DCDCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x20DCD4u, 0x20DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCDCu;
label_20dcdc:
    // 0x20dcdc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dce0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x20dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dce4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x20dce4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20dce8: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x20dce8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x20dcec: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x20DCECu;
    SET_GPR_U32(ctx, 31, 0x20DCF4u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x20DCECu, 0x20DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DCF4u;
label_20dcf4:
    // 0x20dcf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20DCF4u;
    {
        const bool branch_taken_0x20dcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dcf4) {
            ctx->pc = 0x20DD14u;
            goto label_20dd14;
        }
    }
    ctx->pc = 0x20DCFCu;
label_20dcfc:
    // 0x20dcfc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x20dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd04: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x20dd04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20dd08: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x20dd08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x20dd0c: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x20DD0Cu;
    SET_GPR_U32(ctx, 31, 0x20DD14u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x20DD0Cu, 0x20DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD14u;
label_20dd14:
    // 0x20dd14: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x20dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd18: 0x8c83135c  lw          $v1, 0x135C($a0)
    ctx->pc = 0x20dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4956)));
    // 0x20dd1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20dd20: 0xac83135c  sw          $v1, 0x135C($a0)
    ctx->pc = 0x20dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4956), GPR_U32(ctx, 3));
    // 0x20dd24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd28: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x20dd28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x20dd2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20dd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20dd30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20dd30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20dd34: 0x286101f4  slti        $at, $v1, 0x1F4
    ctx->pc = 0x20dd34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x20dd38: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x20DD38u;
    {
        const bool branch_taken_0x20dd38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd38) {
            ctx->pc = 0x20DD60u;
            goto label_20dd60;
        }
    }
    ctx->pc = 0x20DD40u;
    // 0x20dd40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd44: 0x8c64135c  lw          $a0, 0x135C($v1)
    ctx->pc = 0x20dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4956)));
    // 0x20dd48: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20dd4c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DD4Cu;
    {
        const bool branch_taken_0x20dd4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20dd4c) {
            ctx->pc = 0x20DD60u;
            goto label_20dd60;
        }
    }
    ctx->pc = 0x20DD54u;
    // 0x20dd54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dd58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd5c: 0xac641360  sw          $a0, 0x1360($v1)
    ctx->pc = 0x20dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4960), GPR_U32(ctx, 4));
label_20dd60:
    // 0x20dd60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd64: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x20dd64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x20dd68: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20dd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20dd6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20dd6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20dd70: 0x461005a  bgez        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x20DD70u;
    {
        const bool branch_taken_0x20dd70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20dd70) {
            ctx->pc = 0x20DEDCu;
            goto label_20dedc;
        }
    }
    ctx->pc = 0x20DD78u;
    // 0x20dd78: 0x2402051d  addiu       $v0, $zero, 0x51D
    ctx->pc = 0x20dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x20dd7c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x20dd7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20dd80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd84: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20dd88: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20dd8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20dd8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dd90: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x20dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20dd94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20dd98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20dd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20dd9c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20dda0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20dda4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20dda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20dda8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ddac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ddb0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20ddb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20ddb4: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20DDB4u;
    SET_GPR_U32(ctx, 31, 0x20DDBCu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20DDBCu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DDBCu) { return; }
    ctx->pc = 0x20DDBCu;
label_20ddbc:
    // 0x20ddbc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20ddc0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20ddc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ddc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ddc8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x20ddc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20ddcc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ddd0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20ddd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ddd4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20DDD4u;
    SET_GPR_U32(ctx, 31, 0x20DDDCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20DDD4u, 0x20DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDDCu;
label_20dddc:
    // 0x20dddc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x20dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dde0: 0x908310a8  lbu         $v1, 0x10A8($a0)
    ctx->pc = 0x20dde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4264)));
    // 0x20dde4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x20dde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x20dde8: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x20dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ddec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20ddf0: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x20ddf4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20ddf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20ddf8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x20DDF8u;
    {
        const bool branch_taken_0x20ddf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ddf8) {
            ctx->pc = 0x20DE70u;
            goto label_20de70;
        }
    }
    ctx->pc = 0x20DE00u;
    // 0x20de00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20de00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20de04: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20de08: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20de0c: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20de10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20de10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20de14: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20de14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20de18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de1c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x20de1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x20de20: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20de20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20de24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DE28u;
    {
        const bool branch_taken_0x20de28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20de28) {
            ctx->pc = 0x20DE38u;
            goto label_20de38;
        }
    }
    ctx->pc = 0x20DE30u;
    // 0x20de30: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20DE30u;
    {
        const bool branch_taken_0x20de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20de30) {
            ctx->pc = 0x20DE38u;
            goto label_20de38;
        }
    }
    ctx->pc = 0x20DE38u;
label_20de38:
    // 0x20de38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20de38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20de3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20de40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20de44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20de4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20de50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20de54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20de58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20de5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20de60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20de64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20de68: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x20DE68u;
    {
        const bool branch_taken_0x20de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20de68) {
            ctx->pc = 0x20E054u;
            goto label_20e054;
        }
    }
    ctx->pc = 0x20DE70u;
label_20de70:
    // 0x20de70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20de70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20de74: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20de74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20de78: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20de78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20de7c: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20de80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20de80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20de84: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20de84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20de88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de8c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x20de8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x20de90: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20de90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20de94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de98: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DE98u;
    {
        const bool branch_taken_0x20de98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20de98) {
            ctx->pc = 0x20DEA8u;
            goto label_20dea8;
        }
    }
    ctx->pc = 0x20DEA0u;
    // 0x20dea0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20DEA0u;
    {
        const bool branch_taken_0x20dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dea0) {
            ctx->pc = 0x20DEA8u;
            goto label_20dea8;
        }
    }
    ctx->pc = 0x20DEA8u;
label_20dea8:
    // 0x20dea8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20deac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20deacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20deb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20deb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20deb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20deb8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20deb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20debc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dec0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20dec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dec4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dec8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20dec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20decc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20deccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20ded0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20ded4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x20DED4u;
    {
        const bool branch_taken_0x20ded4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ded4) {
            ctx->pc = 0x20E054u;
            goto label_20e054;
        }
    }
    ctx->pc = 0x20DEDCu;
label_20dedc:
    // 0x20dedc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dee0: 0x8c64135c  lw          $a0, 0x135C($v1)
    ctx->pc = 0x20dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4956)));
    // 0x20dee4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20dee8: 0x1483005a  bne         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x20DEE8u;
    {
        const bool branch_taken_0x20dee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20dee8) {
            ctx->pc = 0x20E054u;
            goto label_20e054;
        }
    }
    ctx->pc = 0x20DEF0u;
    // 0x20def0: 0x24020511  addiu       $v0, $zero, 0x511
    ctx->pc = 0x20def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x20def4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x20def4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20def8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20defc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20df00: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20df04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20df04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20df08: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x20df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20df0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20df0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20df10: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20df14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20df14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20df18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20df18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20df1c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x20df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20df20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20df24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20df28: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x20df28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20df2c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20DF2Cu;
    SET_GPR_U32(ctx, 31, 0x20DF34u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20DF34u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DF34u) { return; }
    ctx->pc = 0x20DF34u;
label_20df34:
    // 0x20df34: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20df38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20df3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20df3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20df40: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x20df40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20df44: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20df44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20df48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20df48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20df4c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20DF4Cu;
    SET_GPR_U32(ctx, 31, 0x20DF54u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20DF4Cu, 0x20DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF54u;
label_20df54:
    // 0x20df54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df58: 0xac60135c  sw          $zero, 0x135C($v1)
    ctx->pc = 0x20df58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4956), GPR_U32(ctx, 0));
    // 0x20df5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df60: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x20df60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x20df64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df68: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x20df68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x20df6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df70: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x20df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x20df74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20df74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20df78: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x20DF78u;
    {
        const bool branch_taken_0x20df78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20df78) {
            ctx->pc = 0x20DFF0u;
            goto label_20dff0;
        }
    }
    ctx->pc = 0x20DF80u;
    // 0x20df80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20df84: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20df84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20df88: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20df8c: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20df90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20df90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20df94: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20df94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20df98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20df9c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x20df9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x20dfa0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20dfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20dfa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dfa8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DFA8u;
    {
        const bool branch_taken_0x20dfa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20dfa8) {
            ctx->pc = 0x20DFB8u;
            goto label_20dfb8;
        }
    }
    ctx->pc = 0x20DFB0u;
    // 0x20dfb0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20DFB0u;
    {
        const bool branch_taken_0x20dfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dfb0) {
            ctx->pc = 0x20DFB8u;
            goto label_20dfb8;
        }
    }
    ctx->pc = 0x20DFB8u;
label_20dfb8:
    // 0x20dfb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dfbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20dfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dfc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dfc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfcc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20dfccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dfd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfd4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20dfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dfd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20dfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dfe0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dfe4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20dfe8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20DFE8u;
    {
        const bool branch_taken_0x20dfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dfe8) {
            ctx->pc = 0x20E054u;
            goto label_20e054;
        }
    }
    ctx->pc = 0x20DFF0u;
label_20dff0:
    // 0x20dff0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20dff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20dff4: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20dff8: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20dffc: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20e000: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20e000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20e004: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20e004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20e008: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e00c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x20e00cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x20e010: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20e010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20e014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e018: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E018u;
    {
        const bool branch_taken_0x20e018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e018) {
            ctx->pc = 0x20E028u;
            goto label_20e028;
        }
    }
    ctx->pc = 0x20E020u;
    // 0x20e020: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20E020u;
    {
        const bool branch_taken_0x20e020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e020) {
            ctx->pc = 0x20E028u;
            goto label_20e028;
        }
    }
    ctx->pc = 0x20E028u;
label_20e028:
    // 0x20e028: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20e028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e02c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e030: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20e030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e034: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e038: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20e038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e03c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e040: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20e040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e044: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e048: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20e048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e04c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20e050: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20e050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20e054:
    // 0x20e054: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x20e054u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e05c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e064: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x20e064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20e068: 0x3e00008  jr          $ra
    ctx->pc = 0x20E068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E070u;
}
