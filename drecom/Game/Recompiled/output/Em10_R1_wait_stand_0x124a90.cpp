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

// Function: Em10_R1_wait_stand
// Address: 0x124a90 - 0x124dfc
void Em10_R1_wait_stand_0x124a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_wait_stand_0x124a90");
#endif

    switch (ctx->pc) {
        case 0x124b20u: goto label_124b20;
        case 0x124b48u: goto label_124b48;
        case 0x124b78u: goto label_124b78;
        case 0x124b84u: goto label_124b84;
        case 0x124b94u: goto label_124b94;
        case 0x124ba0u: goto label_124ba0;
        case 0x124bd0u: goto label_124bd0;
        case 0x124c74u: goto label_124c74;
        case 0x124cccu: goto label_124ccc;
        case 0x124cf4u: goto label_124cf4;
        case 0x124d28u: goto label_124d28;
        case 0x124d34u: goto label_124d34;
        case 0x124d44u: goto label_124d44;
        case 0x124d50u: goto label_124d50;
        default: break;
    }

    ctx->pc = 0x124a90u;

    // 0x124a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124a94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x124a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x124a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124a9c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x124a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x124aa0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124aa4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x124aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x124aa8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124aac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x124aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x124ab0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x124ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x124ab4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x124ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124ab8: 0x10830097  beq         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x124AB8u;
    {
        const bool branch_taken_0x124ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124ab8) {
            ctx->pc = 0x124D18u;
            goto label_124d18;
        }
    }
    ctx->pc = 0x124AC0u;
    // 0x124ac0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x124ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124ac4: 0x10830073  beq         $a0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x124AC4u;
    {
        const bool branch_taken_0x124ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124ac4) {
            ctx->pc = 0x124C94u;
            goto label_124c94;
        }
    }
    ctx->pc = 0x124ACCu;
    // 0x124acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ad0: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x124AD0u;
    {
        const bool branch_taken_0x124ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124ad0) {
            ctx->pc = 0x124B58u;
            goto label_124b58;
        }
    }
    ctx->pc = 0x124AD8u;
    // 0x124ad8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124AD8u;
    {
        const bool branch_taken_0x124ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ad8) {
            ctx->pc = 0x124AE8u;
            goto label_124ae8;
        }
    }
    ctx->pc = 0x124AE0u;
    // 0x124ae0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x124AE0u;
    {
        const bool branch_taken_0x124ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ae0) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124AE8u;
label_124ae8:
    // 0x124ae8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124aec: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x124aecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x124af0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x124af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x124af4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124af8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124AF8u;
    {
        const bool branch_taken_0x124af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124af8) {
            ctx->pc = 0x124B28u;
            goto label_124b28;
        }
    }
    ctx->pc = 0x124B00u;
    // 0x124b00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124b0c: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x124b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x124b10: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x124b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124b14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124b18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124B18u;
    SET_GPR_U32(ctx, 31, 0x124B20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124B18u, 0x124B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B20u;
label_124b20:
    // 0x124b20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124B20u;
    {
        const bool branch_taken_0x124b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124b20) {
            ctx->pc = 0x124B48u;
            goto label_124b48;
        }
    }
    ctx->pc = 0x124B28u;
label_124b28:
    // 0x124b28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124b34: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x124b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x124b38: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x124b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124b3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124b40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124B40u;
    SET_GPR_U32(ctx, 31, 0x124B48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124B40u, 0x124B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B48u;
label_124b48:
    // 0x124b48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b4c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x124b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x124b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124b54: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_124b58:
    // 0x124b58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x124b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124b60: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x124b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x124b64: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x124b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x124b68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x124b6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x124b70: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x124B70u;
    SET_GPR_U32(ctx, 31, 0x124B78u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x124B70u, 0x124B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B78u;
label_124b78:
    // 0x124b78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b7c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x124B7Cu;
    SET_GPR_U32(ctx, 31, 0x124B84u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x124B7Cu, 0x124B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B84u;
label_124b84:
    // 0x124b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124b8c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x124B8Cu;
    SET_GPR_U32(ctx, 31, 0x124B94u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x124B8Cu, 0x124B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B94u;
label_124b94:
    // 0x124b94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b98: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x124B98u;
    SET_GPR_U32(ctx, 31, 0x124BA0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x124B98u, 0x124BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BA0u;
label_124ba0:
    // 0x124ba0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124ba4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124ba8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x124ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x124bac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124bb0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x124BB0u;
    {
        const bool branch_taken_0x124bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124bb0) {
            ctx->pc = 0x124BE8u;
            goto label_124be8;
        }
    }
    ctx->pc = 0x124BB8u;
    // 0x124bb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124bbc: 0x244412b0  addiu       $a0, $v0, 0x12B0
    ctx->pc = 0x124bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x124bc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x124bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x124bc4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x124bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x124bc8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x124BC8u;
    SET_GPR_U32(ctx, 31, 0x124BD0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x124BD0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x124BD0u) { return; }
    ctx->pc = 0x124BD0u;
label_124bd0:
    // 0x124bd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124bd4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x124bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x124bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x124bdc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x124bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x124be0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x124BE0u;
    {
        const bool branch_taken_0x124be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124be0) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124BE8u;
label_124be8:
    // 0x124be8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124bec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124bf0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x124bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x124bf4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124bf8: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x124BF8u;
    {
        const bool branch_taken_0x124bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124bf8) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124C00u;
    // 0x124c00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c04: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x124c04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x124c08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x124c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x124c0c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x124c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x124c10: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x124C10u;
    {
        const bool branch_taken_0x124c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124c10) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124C18u;
    // 0x124c18: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x124c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x124c1c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x124c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x124c20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x124C20u;
    {
        const bool branch_taken_0x124c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c20) {
            ctx->pc = 0x124C40u;
            goto label_124c40;
        }
    }
    ctx->pc = 0x124C28u;
    // 0x124c28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x124c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x124c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x124c34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x124c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x124c38: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x124C38u;
    {
        const bool branch_taken_0x124c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c38) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124C40u;
label_124c40:
    // 0x124c40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c44: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x124c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124c48: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x124c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x124c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x124c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124c50: 0x0  nop
    ctx->pc = 0x124c50u;
    // NOP
    // 0x124c54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x124c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124c58: 0x0  nop
    ctx->pc = 0x124c58u;
    // NOP
    // 0x124c5c: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x124C5Cu;
    {
        const bool branch_taken_0x124c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124c5c) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124C64u;
    // 0x124c64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x124c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124c6c: 0xc05d25c  jal         func_174970
    ctx->pc = 0x124C6Cu;
    SET_GPR_U32(ctx, 31, 0x124C74u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x124C6Cu, 0x124C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C74u;
label_124c74:
    // 0x124c74: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x124C74u;
    {
        const bool branch_taken_0x124c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c74) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124C7Cu;
    // 0x124c7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x124c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x124c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x124c88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x124c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x124c8c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x124C8Cu;
    {
        const bool branch_taken_0x124c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c8c) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124C94u;
label_124c94:
    // 0x124c94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c98: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x124c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x124c9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x124c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x124ca0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124ca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124CA4u;
    {
        const bool branch_taken_0x124ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ca4) {
            ctx->pc = 0x124CD4u;
            goto label_124cd4;
        }
    }
    ctx->pc = 0x124CACu;
    // 0x124cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cb4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124cb8: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x124cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x124cbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x124cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124cc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124cc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124CC4u;
    SET_GPR_U32(ctx, 31, 0x124CCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124CC4u, 0x124CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CCCu;
label_124ccc:
    // 0x124ccc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124CCCu;
    {
        const bool branch_taken_0x124ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ccc) {
            ctx->pc = 0x124CF4u;
            goto label_124cf4;
        }
    }
    ctx->pc = 0x124CD4u;
label_124cd4:
    // 0x124cd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cdc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124ce0: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x124ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x124ce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x124ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ce8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124cec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124CECu;
    SET_GPR_U32(ctx, 31, 0x124CF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124CECu, 0x124CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CF4u;
label_124cf4:
    // 0x124cf4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x124cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x124cf8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x124cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x124cfc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x124cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x124d00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d04: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x124d04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x124d08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x124d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x124d10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124d14: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_124d18:
    // 0x124d18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x124d1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x124d20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x124D20u;
    SET_GPR_U32(ctx, 31, 0x124D28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x124D20u, 0x124D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D28u;
label_124d28:
    // 0x124d28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d2c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x124D2Cu;
    SET_GPR_U32(ctx, 31, 0x124D34u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x124D2Cu, 0x124D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D34u;
label_124d34:
    // 0x124d34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x124d38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x124d3c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x124D3Cu;
    SET_GPR_U32(ctx, 31, 0x124D44u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x124D3Cu, 0x124D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D44u;
label_124d44:
    // 0x124d44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x124D48u;
    SET_GPR_U32(ctx, 31, 0x124D50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x124D48u, 0x124D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D50u;
label_124d50:
    // 0x124d50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d54: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x124d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x124d58: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x124D58u;
    {
        const bool branch_taken_0x124d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d58) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124D60u;
    // 0x124d60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d64: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124d68: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x124d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x124d6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124d70: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x124D70u;
    {
        const bool branch_taken_0x124d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d70) {
            ctx->pc = 0x124DB0u;
            goto label_124db0;
        }
    }
    ctx->pc = 0x124D78u;
    // 0x124d78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124d7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124d84: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x124d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x124d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124d90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124d98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124d9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124da0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124da4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124da8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x124DA8u;
    {
        const bool branch_taken_0x124da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124da8) {
            ctx->pc = 0x124DE0u;
            goto label_124de0;
        }
    }
    ctx->pc = 0x124DB0u;
label_124db0:
    // 0x124db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124db4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124db8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124dbc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x124dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x124dc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124dc4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124dc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124dcc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124dd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124dd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124ddc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_124de0:
    // 0x124de0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x124DE0u;
    {
        const bool branch_taken_0x124de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124de0) {
            ctx->pc = 0x124DE8u;
            goto label_124de8;
        }
    }
    ctx->pc = 0x124DE8u;
label_124de8:
    // 0x124de8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x124de8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124dec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124df0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x124df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x124df4: 0x3e00008  jr          $ra
    ctx->pc = 0x124DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124DFCu;
}
