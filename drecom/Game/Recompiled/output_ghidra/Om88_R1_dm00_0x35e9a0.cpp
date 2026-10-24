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

// Function: Om88_R1_dm00
// Address: 0x35e9a0 - 0x35eb24
void Om88_R1_dm00_0x35e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om88_R1_dm00_0x35e9a0");
#endif

    switch (ctx->pc) {
        case 0x35ea28u: goto label_35ea28;
        case 0x35ea5cu: goto label_35ea5c;
        case 0x35eaa0u: goto label_35eaa0;
        case 0x35eaacu: goto label_35eaac;
        default: break;
    }

    ctx->pc = 0x35e9a0u;

    // 0x35e9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35e9a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35e9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x35e9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35e9ac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x35e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x35e9b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35e9b4: 0x2463aac0  addiu       $v1, $v1, -0x5540
    ctx->pc = 0x35e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945472));
    // 0x35e9b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35e9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35e9bc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x35e9bcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AAAC0u));
    // 0x35e9c0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x35e9c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35e9c8: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x35e9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x35e9cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35e9d0: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x35e9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e9d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35e9d8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x35e9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e9dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35e9e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x35e9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35e9e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35e9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35e9e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e9ec: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x35E9ECu;
    {
        const bool branch_taken_0x35e9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35e9ec) {
            ctx->pc = 0x35EA80u;
            goto label_35ea80;
        }
    }
    ctx->pc = 0x35E9F4u;
    // 0x35e9f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E9F4u;
    {
        const bool branch_taken_0x35e9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e9f4) {
            ctx->pc = 0x35EA04u;
            goto label_35ea04;
        }
    }
    ctx->pc = 0x35E9FCu;
    // 0x35e9fc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x35E9FCu;
    {
        const bool branch_taken_0x35e9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e9fc) {
            ctx->pc = 0x35EB10u;
            goto label_35eb10;
        }
    }
    ctx->pc = 0x35EA04u;
label_35ea04:
    // 0x35ea04: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35ea08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35ea0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35ea0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35ea10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea14: 0x2404042c  addiu       $a0, $zero, 0x42C
    ctx->pc = 0x35ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
    // 0x35ea18: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x35ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x35ea1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ea1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ea20: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35EA20u;
    SET_GPR_U32(ctx, 31, 0x35EA28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35EA20u, 0x35EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA28u;
label_35ea28:
    // 0x35ea28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea2c: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35ea30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ea34: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35EA34u;
    {
        const bool branch_taken_0x35ea34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ea34) {
            ctx->pc = 0x35EA5Cu;
            goto label_35ea5c;
        }
    }
    ctx->pc = 0x35EA3Cu;
    // 0x35ea3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea44: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35ea48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ea48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ea4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35ea4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ea50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35ea50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35ea54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35EA54u;
    SET_GPR_U32(ctx, 31, 0x35EA5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35EA54u, 0x35EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA5Cu;
label_35ea5c:
    // 0x35ea5c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x35ea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea60: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x35ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x35ea64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x35ea68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35ea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35ea6c: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x35ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
    // 0x35ea70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea74: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35ea74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35ea78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35ea7c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35ea7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_35ea80:
    // 0x35ea80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea84: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35ea88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ea8c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EA8Cu;
    {
        const bool branch_taken_0x35ea8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ea8c) {
            ctx->pc = 0x35EAACu;
            goto label_35eaac;
        }
    }
    ctx->pc = 0x35EA94u;
    // 0x35ea94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ea98: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35EA98u;
    SET_GPR_U32(ctx, 31, 0x35EAA0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35EA98u, 0x35EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAA0u;
label_35eaa0:
    // 0x35eaa0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eaa4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35EAA4u;
    SET_GPR_U32(ctx, 31, 0x35EAACu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35EAA4u, 0x35EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAACu;
label_35eaac:
    // 0x35eaac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eab0: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x35eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x35eab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35eab8: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x35eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x35eabc: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x35eabcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35eac0: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x35EAC0u;
    {
        const bool branch_taken_0x35eac0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35eac0) {
            ctx->pc = 0x35EB10u;
            goto label_35eb10;
        }
    }
    ctx->pc = 0x35EAC8u;
    // 0x35eac8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35eacc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ead0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35ead0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35ead4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35ead8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35ead8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eadc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eae0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35eae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eae8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35eae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eaec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eaf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35eaf4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x35eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eaf8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x35eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35eafc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x35eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35eb00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35eb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35eb04: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x35eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x35eb08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35eb0c: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x35eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
label_35eb10:
    // 0x35eb10: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35eb10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35eb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35eb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eb18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35eb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35eb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x35EB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EB24u;
}
