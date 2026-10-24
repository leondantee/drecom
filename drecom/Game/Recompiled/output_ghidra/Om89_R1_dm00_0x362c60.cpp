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

// Function: Om89_R1_dm00
// Address: 0x362c60 - 0x362de4
void Om89_R1_dm00_0x362c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om89_R1_dm00_0x362c60");
#endif

    switch (ctx->pc) {
        case 0x362ce8u: goto label_362ce8;
        case 0x362d1cu: goto label_362d1c;
        case 0x362d60u: goto label_362d60;
        case 0x362d6cu: goto label_362d6c;
        default: break;
    }

    ctx->pc = 0x362c60u;

    // 0x362c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x362c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x362c64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x362c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x362c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362c6c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x362c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x362c70: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x362c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x362c74: 0x2463ad40  addiu       $v1, $v1, -0x52C0
    ctx->pc = 0x362c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946112));
    // 0x362c78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x362c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x362c7c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x362c7cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AAD40u));
    // 0x362c80: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x362c80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x362c84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362c88: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x362c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x362c8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362c90: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x362c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x362c94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362c98: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x362c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x362c9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362ca0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x362ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x362ca4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x362ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x362ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362cac: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x362CACu;
    {
        const bool branch_taken_0x362cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x362cac) {
            ctx->pc = 0x362D40u;
            goto label_362d40;
        }
    }
    ctx->pc = 0x362CB4u;
    // 0x362cb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362CB4u;
    {
        const bool branch_taken_0x362cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362cb4) {
            ctx->pc = 0x362CC4u;
            goto label_362cc4;
        }
    }
    ctx->pc = 0x362CBCu;
    // 0x362cbc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x362CBCu;
    {
        const bool branch_taken_0x362cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362cbc) {
            ctx->pc = 0x362DD0u;
            goto label_362dd0;
        }
    }
    ctx->pc = 0x362CC4u;
label_362cc4:
    // 0x362cc4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x362cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x362cc8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x362cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x362ccc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x362cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x362cd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x362cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362cd4: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x362cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x362cd8: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x362cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x362cdc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x362cdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362ce0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x362CE0u;
    SET_GPR_U32(ctx, 31, 0x362CE8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x362CE0u, 0x362CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CE8u;
label_362ce8:
    // 0x362ce8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362cec: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x362cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x362cf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x362cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x362cf4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x362CF4u;
    {
        const bool branch_taken_0x362cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x362cf4) {
            ctx->pc = 0x362D1Cu;
            goto label_362d1c;
        }
    }
    ctx->pc = 0x362CFCu;
    // 0x362cfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x362cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x362d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x362d08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x362d08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362d0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x362d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362d10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x362d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x362d14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x362D14u;
    SET_GPR_U32(ctx, 31, 0x362D1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x362D14u, 0x362D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D1Cu;
label_362d1c:
    // 0x362d1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x362d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d20: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x362d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x362d24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x362d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x362d28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x362d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x362d2c: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x362d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
    // 0x362d30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d34: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x362d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x362d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x362d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x362d3c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x362d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_362d40:
    // 0x362d40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d44: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x362d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x362d48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x362d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x362d4c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362D4Cu;
    {
        const bool branch_taken_0x362d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x362d4c) {
            ctx->pc = 0x362D6Cu;
            goto label_362d6c;
        }
    }
    ctx->pc = 0x362D54u;
    // 0x362d54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d58: 0xc05cd10  jal         func_173440
    ctx->pc = 0x362D58u;
    SET_GPR_U32(ctx, 31, 0x362D60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x362D58u, 0x362D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D60u;
label_362d60:
    // 0x362d60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d64: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x362D64u;
    SET_GPR_U32(ctx, 31, 0x362D6Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x362D64u, 0x362D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D6Cu;
label_362d6c:
    // 0x362d6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d70: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x362d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x362d74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x362d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x362d78: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x362d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x362d7c: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x362d7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x362d80: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x362D80u;
    {
        const bool branch_taken_0x362d80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x362d80) {
            ctx->pc = 0x362DD0u;
            goto label_362dd0;
        }
    }
    ctx->pc = 0x362D88u;
    // 0x362d88: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x362d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d8c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x362d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x362d90: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x362d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x362d94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x362d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x362d98: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x362d98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x362d9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x362d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362da0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362da4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x362da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x362da8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362dac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x362dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x362db0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362db4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x362db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362db8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362dbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x362dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x362dc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362dc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x362dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x362dc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362dcc: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x362dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
label_362dd0:
    // 0x362dd0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x362dd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362dd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x362dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x362ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x362DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362DE4u;
}
