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

// Function: Em0a_R1_mask_on
// Address: 0x365940 - 0x365b54
void Em0a_R1_mask_on_0x365940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_mask_on_0x365940");
#endif

    switch (ctx->pc) {
        case 0x3659bcu: goto label_3659bc;
        case 0x365a44u: goto label_365a44;
        case 0x365a50u: goto label_365a50;
        case 0x365a60u: goto label_365a60;
        case 0x365a6cu: goto label_365a6c;
        case 0x365ab4u: goto label_365ab4;
        case 0x365ad4u: goto label_365ad4;
        case 0x365ae0u: goto label_365ae0;
        case 0x365af0u: goto label_365af0;
        case 0x365afcu: goto label_365afc;
        default: break;
    }

    ctx->pc = 0x365940u;

    // 0x365940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x365940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x365944: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x365944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x365948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36594c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365950: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x365950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x365954: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365958: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x365958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36595c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365960: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x365960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365964: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x365964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x365968: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x365968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36596c: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x36596Cu;
    {
        const bool branch_taken_0x36596c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36596c) {
            ctx->pc = 0x365AC4u;
            goto label_365ac4;
        }
    }
    ctx->pc = 0x365974u;
    // 0x365974: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x365974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365978: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x365978u;
    {
        const bool branch_taken_0x365978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365978) {
            ctx->pc = 0x365A94u;
            goto label_365a94;
        }
    }
    ctx->pc = 0x365980u;
    // 0x365980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365984: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x365984u;
    {
        const bool branch_taken_0x365984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365984) {
            ctx->pc = 0x3659CCu;
            goto label_3659cc;
        }
    }
    ctx->pc = 0x36598Cu;
    // 0x36598c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36598Cu;
    {
        const bool branch_taken_0x36598c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36598c) {
            ctx->pc = 0x36599Cu;
            goto label_36599c;
        }
    }
    ctx->pc = 0x365994u;
    // 0x365994: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x365994u;
    {
        const bool branch_taken_0x365994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365994) {
            ctx->pc = 0x365B3Cu;
            goto label_365b3c;
        }
    }
    ctx->pc = 0x36599Cu;
label_36599c:
    // 0x36599c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3659a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3659a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3659a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3659a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3659a8: 0x24061e01  addiu       $a2, $zero, 0x1E01
    ctx->pc = 0x3659a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x3659ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3659acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3659b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3659b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3659b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3659B4u;
    SET_GPR_U32(ctx, 31, 0x3659BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3659B4u, 0x3659BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659BCu;
label_3659bc:
    // 0x3659bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3659bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3659c0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3659c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3659c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3659c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3659c8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3659c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3659cc:
    // 0x3659cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3659ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3659d0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3659d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3659d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3659d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3659d8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3659d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3659dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3659DCu;
    {
        const bool branch_taken_0x3659dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3659dc) {
            ctx->pc = 0x365A34u;
            goto label_365a34;
        }
    }
    ctx->pc = 0x3659E4u;
    // 0x3659e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3659e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3659e8: 0xa202006e  sb          $v0, 0x6E($s0)
    ctx->pc = 0x3659e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x3659ec: 0xa200006f  sb          $zero, 0x6F($s0)
    ctx->pc = 0x3659ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3659f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3659f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3659f4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3659f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3659f8: 0x245103f0  addiu       $s1, $v0, 0x3F0
    ctx->pc = 0x3659f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x3659fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3659fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365a00: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x365a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x365a04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a08: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x365a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x365a0c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x365a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x365a10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x365a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x365a14: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x365a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x365a18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a1c: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x365a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x365a20: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x365a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x365a24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x365a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x365a28: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x365a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x365a2c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x365a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365a30: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x365a30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
label_365a34:
    // 0x365a34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365a3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365A3Cu;
    SET_GPR_U32(ctx, 31, 0x365A44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365A3Cu, 0x365A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A44u;
label_365a44:
    // 0x365a44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365A48u;
    SET_GPR_U32(ctx, 31, 0x365A50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365A48u, 0x365A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A50u;
label_365a50:
    // 0x365a50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365a58: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365A58u;
    SET_GPR_U32(ctx, 31, 0x365A60u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365A58u, 0x365A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A60u;
label_365a60:
    // 0x365a60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a64: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365A64u;
    SET_GPR_U32(ctx, 31, 0x365A6Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365A64u, 0x365A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A6Cu;
label_365a6c:
    // 0x365a6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365a74: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x365A74u;
    {
        const bool branch_taken_0x365a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365a74) {
            ctx->pc = 0x365B3Cu;
            goto label_365b3c;
        }
    }
    ctx->pc = 0x365A7Cu;
    // 0x365a7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x365a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x365a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x365a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x365a88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x365a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365a8c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x365A8Cu;
    {
        const bool branch_taken_0x365a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365a8c) {
            ctx->pc = 0x365B3Cu;
            goto label_365b3c;
        }
    }
    ctx->pc = 0x365A94u;
label_365a94:
    // 0x365a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a9c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x365aa0: 0x24061e01  addiu       $a2, $zero, 0x1E01
    ctx->pc = 0x365aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x365aa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365aa8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365aac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365AACu;
    SET_GPR_U32(ctx, 31, 0x365AB4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365AACu, 0x365AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AB4u;
label_365ab4:
    // 0x365ab4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ab8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365abc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x365ac0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x365ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_365ac4:
    // 0x365ac4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365acc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365ACCu;
    SET_GPR_U32(ctx, 31, 0x365AD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365ACCu, 0x365AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AD4u;
label_365ad4:
    // 0x365ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ad8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365AD8u;
    SET_GPR_U32(ctx, 31, 0x365AE0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365AD8u, 0x365AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AE0u;
label_365ae0:
    // 0x365ae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ae4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365ae4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365ae8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365AE8u;
    SET_GPR_U32(ctx, 31, 0x365AF0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365AE8u, 0x365AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AF0u;
label_365af0:
    // 0x365af0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365af4: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365AF4u;
    SET_GPR_U32(ctx, 31, 0x365AFCu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365AF4u, 0x365AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AFCu;
label_365afc:
    // 0x365afc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b00: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365b04: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x365B04u;
    {
        const bool branch_taken_0x365b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365b04) {
            ctx->pc = 0x365B3Cu;
            goto label_365b3c;
        }
    }
    ctx->pc = 0x365B0Cu;
    // 0x365b0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365b10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b14: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365b1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365b24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365b2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365b34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365b38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_365b3c:
    // 0x365b3c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x365b3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365b40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365b48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x365b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x365b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x365B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365B54u;
}
