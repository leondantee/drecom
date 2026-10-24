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

// Function: Em01_R1_dm_sword2
// Address: 0x306b80 - 0x306d74
void Em01_R1_dm_sword2_0x306b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_dm_sword2_0x306b80");
#endif

    switch (ctx->pc) {
        case 0x306be4u: goto label_306be4;
        case 0x306c28u: goto label_306c28;
        case 0x306c48u: goto label_306c48;
        case 0x306c54u: goto label_306c54;
        case 0x306c64u: goto label_306c64;
        case 0x306c70u: goto label_306c70;
        case 0x306cccu: goto label_306ccc;
        case 0x306cf8u: goto label_306cf8;
        case 0x306d04u: goto label_306d04;
        case 0x306d14u: goto label_306d14;
        case 0x306d20u: goto label_306d20;
        default: break;
    }

    ctx->pc = 0x306b80u;

    // 0x306b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x306b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306b84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x306b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x306b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x306b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x306b8c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x306b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x306b90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b94: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x306b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306b98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x306b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x306b9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x306b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306ba0: 0x10830051  beq         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x306BA0u;
    {
        const bool branch_taken_0x306ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306ba0) {
            ctx->pc = 0x306CE8u;
            goto label_306ce8;
        }
    }
    ctx->pc = 0x306BA8u;
    // 0x306ba8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x306ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306bac: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x306BACu;
    {
        const bool branch_taken_0x306bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306bac) {
            ctx->pc = 0x306C98u;
            goto label_306c98;
        }
    }
    ctx->pc = 0x306BB4u;
    // 0x306bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306bb8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x306BB8u;
    {
        const bool branch_taken_0x306bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306bb8) {
            ctx->pc = 0x306C38u;
            goto label_306c38;
        }
    }
    ctx->pc = 0x306BC0u;
    // 0x306bc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306BC0u;
    {
        const bool branch_taken_0x306bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306bc0) {
            ctx->pc = 0x306BD0u;
            goto label_306bd0;
        }
    }
    ctx->pc = 0x306BC8u;
    // 0x306bc8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x306BC8u;
    {
        const bool branch_taken_0x306bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306bc8) {
            ctx->pc = 0x306D60u;
            goto label_306d60;
        }
    }
    ctx->pc = 0x306BD0u;
label_306bd0:
    // 0x306bd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x306bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x306bd4: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x306bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x306bd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306bdc: 0xc05cd90  jal         func_173640
    ctx->pc = 0x306BDCu;
    SET_GPR_U32(ctx, 31, 0x306BE4u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x306BDCu, 0x306BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BE4u;
label_306be4:
    // 0x306be4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x306be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306be8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x306be8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x306bec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306bf0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x306bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x306bf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306bf8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x306bf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x306bfc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x306bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306c00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306c00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306c04: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x306c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x306c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c0c: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x306c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x306c10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306c18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306c1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306c20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306C20u;
    SET_GPR_U32(ctx, 31, 0x306C28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306C20u, 0x306C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C28u;
label_306c28:
    // 0x306c28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c2c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306c34: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_306c38:
    // 0x306c38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306c3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306c40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306C40u;
    SET_GPR_U32(ctx, 31, 0x306C48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306C40u, 0x306C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C48u;
label_306c48:
    // 0x306c48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c4c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306C4Cu;
    SET_GPR_U32(ctx, 31, 0x306C54u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306C4Cu, 0x306C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C54u;
label_306c54:
    // 0x306c54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306c58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306c5c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306C5Cu;
    SET_GPR_U32(ctx, 31, 0x306C64u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306C5Cu, 0x306C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C64u;
label_306c64:
    // 0x306c64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c68: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306C68u;
    SET_GPR_U32(ctx, 31, 0x306C70u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306C68u, 0x306C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C70u;
label_306c70:
    // 0x306c70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c74: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306c78: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x306C78u;
    {
        const bool branch_taken_0x306c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c78) {
            ctx->pc = 0x306D60u;
            goto label_306d60;
        }
    }
    ctx->pc = 0x306C80u;
    // 0x306c80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c84: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x306c84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x306c88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306c8c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x306c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x306c90: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x306C90u;
    {
        const bool branch_taken_0x306c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c90) {
            ctx->pc = 0x306D60u;
            goto label_306d60;
        }
    }
    ctx->pc = 0x306C98u;
label_306c98:
    // 0x306c98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c9c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x306c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x306ca0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x306ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306ca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306ca8: 0x24500024  addiu       $s0, $v0, 0x24
    ctx->pc = 0x306ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x306cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cb0: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x306cb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x306cb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cb8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306cbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306cc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306cc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306CC4u;
    SET_GPR_U32(ctx, 31, 0x306CCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306CC4u, 0x306CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CCCu;
label_306ccc:
    // 0x306ccc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x306cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x306cd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cd4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x306cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x306cd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cdc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306ce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306ce4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_306ce8:
    // 0x306ce8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306cecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306cf0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306CF0u;
    SET_GPR_U32(ctx, 31, 0x306CF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306CF0u, 0x306CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CF8u;
label_306cf8:
    // 0x306cf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cfc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306CFCu;
    SET_GPR_U32(ctx, 31, 0x306D04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306CFCu, 0x306D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D04u;
label_306d04:
    // 0x306d04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306d08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306d0c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306D0Cu;
    SET_GPR_U32(ctx, 31, 0x306D14u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306D0Cu, 0x306D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D14u;
label_306d14:
    // 0x306d14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d18: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306D18u;
    SET_GPR_U32(ctx, 31, 0x306D20u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306D18u, 0x306D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D20u;
label_306d20:
    // 0x306d20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d24: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306d28: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x306D28u;
    {
        const bool branch_taken_0x306d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306d28) {
            ctx->pc = 0x306D60u;
            goto label_306d60;
        }
    }
    ctx->pc = 0x306D30u;
    // 0x306d30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306d34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306d3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306d40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306d48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306d50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306d54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306d58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_306d60:
    // 0x306d60: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x306d60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x306d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306d68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x306d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x306d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x306D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306D74u;
}
