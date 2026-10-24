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

// Function: Em00_R0_damage
// Address: 0x2d4e70 - 0x2d504c
void Em00_R0_damage_0x2d4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R0_damage_0x2d4e70");
#endif

    switch (ctx->pc) {
        case 0x2d4edcu: goto label_2d4edc;
        case 0x2d4efcu: goto label_2d4efc;
        case 0x2d4f08u: goto label_2d4f08;
        case 0x2d4f18u: goto label_2d4f18;
        case 0x2d4f24u: goto label_2d4f24;
        case 0x2d4fb4u: goto label_2d4fb4;
        case 0x2d4fd4u: goto label_2d4fd4;
        case 0x2d4fe0u: goto label_2d4fe0;
        case 0x2d4ff0u: goto label_2d4ff0;
        case 0x2d4ffcu: goto label_2d4ffc;
        default: break;
    }

    ctx->pc = 0x2d4e70u;

    // 0x2d4e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4e74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d4e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d4e78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d4e7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4e80: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x2d4e80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2d4e84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d4e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d4e88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d4e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d4e8c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D4E8Cu;
    {
        const bool branch_taken_0x2d4e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4e8c) {
            ctx->pc = 0x2D4F6Cu;
            goto label_2d4f6c;
        }
    }
    ctx->pc = 0x2D4E94u;
    // 0x2d4e94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4e98: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d4e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4e9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d4e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d4ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4ea4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D4EA4u;
    {
        const bool branch_taken_0x2d4ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d4ea4) {
            ctx->pc = 0x2D4EECu;
            goto label_2d4eec;
        }
    }
    ctx->pc = 0x2D4EACu;
    // 0x2d4eac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4EACu;
    {
        const bool branch_taken_0x2d4eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4eac) {
            ctx->pc = 0x2D4EBCu;
            goto label_2d4ebc;
        }
    }
    ctx->pc = 0x2D4EB4u;
    // 0x2d4eb4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2D4EB4u;
    {
        const bool branch_taken_0x2d4eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4eb4) {
            ctx->pc = 0x2D503Cu;
            goto label_2d503c;
        }
    }
    ctx->pc = 0x2D4EBCu;
label_2d4ebc:
    // 0x2d4ebc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ec0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ec4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4ec8: 0x2406642b  addiu       $a2, $zero, 0x642B
    ctx->pc = 0x2d4ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25643));
    // 0x2d4ecc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4ed0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4ed4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4ED4u;
    SET_GPR_U32(ctx, 31, 0x2D4EDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4ED4u, 0x2D4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EDCu;
label_2d4edc:
    // 0x2d4edc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ee0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4ee8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d4eec:
    // 0x2d4eec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ef0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4ef0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4ef4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4EF4u;
    SET_GPR_U32(ctx, 31, 0x2D4EFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4EF4u, 0x2D4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EFCu;
label_2d4efc:
    // 0x2d4efc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4F00u;
    SET_GPR_U32(ctx, 31, 0x2D4F08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4F00u, 0x2D4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F08u;
label_2d4f08:
    // 0x2d4f08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4f0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4f10: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4F10u;
    SET_GPR_U32(ctx, 31, 0x2D4F18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4F10u, 0x2D4F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F18u;
label_2d4f18:
    // 0x2d4f18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f1c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D4F24u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4F1Cu, 0x2D4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F24u;
label_2d4f24:
    // 0x2d4f24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4f2c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D4F2Cu;
    {
        const bool branch_taken_0x2d4f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f2c) {
            ctx->pc = 0x2D503Cu;
            goto label_2d503c;
        }
    }
    ctx->pc = 0x2D4F34u;
    // 0x2d4f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4f38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4f40: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2d4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d4f44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d4f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4f4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4f54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4f5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d4f64: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D4F64u;
    {
        const bool branch_taken_0x2d4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f64) {
            ctx->pc = 0x2D503Cu;
            goto label_2d503c;
        }
    }
    ctx->pc = 0x2D4F6Cu;
label_2d4f6c:
    // 0x2d4f6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f70: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d4f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4f74: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d4f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d4f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4f7c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D4F7Cu;
    {
        const bool branch_taken_0x2d4f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d4f7c) {
            ctx->pc = 0x2D4FC4u;
            goto label_2d4fc4;
        }
    }
    ctx->pc = 0x2D4F84u;
    // 0x2d4f84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4F84u;
    {
        const bool branch_taken_0x2d4f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f84) {
            ctx->pc = 0x2D4F94u;
            goto label_2d4f94;
        }
    }
    ctx->pc = 0x2D4F8Cu;
    // 0x2d4f8c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D4F8Cu;
    {
        const bool branch_taken_0x2d4f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f8c) {
            ctx->pc = 0x2D503Cu;
            goto label_2d503c;
        }
    }
    ctx->pc = 0x2D4F94u;
label_2d4f94:
    // 0x2d4f94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f9c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4fa0: 0x2406642c  addiu       $a2, $zero, 0x642C
    ctx->pc = 0x2d4fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25644));
    // 0x2d4fa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4fa8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4fac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4FACu;
    SET_GPR_U32(ctx, 31, 0x2D4FB4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4FACu, 0x2D4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FB4u;
label_2d4fb4:
    // 0x2d4fb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4fb8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4fbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4fc0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d4fc4:
    // 0x2d4fc4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4fc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4fc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4fcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4FCCu;
    SET_GPR_U32(ctx, 31, 0x2D4FD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4FCCu, 0x2D4FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FD4u;
label_2d4fd4:
    // 0x2d4fd4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4fd8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4FD8u;
    SET_GPR_U32(ctx, 31, 0x2D4FE0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4FD8u, 0x2D4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FE0u;
label_2d4fe0:
    // 0x2d4fe0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4fe4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4fe8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4FE8u;
    SET_GPR_U32(ctx, 31, 0x2D4FF0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4FE8u, 0x2D4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FF0u;
label_2d4ff0:
    // 0x2d4ff0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d4ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4ff4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4FF4u;
    SET_GPR_U32(ctx, 31, 0x2D4FFCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4FF4u, 0x2D4FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FFCu;
label_2d4ffc:
    // 0x2d4ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5000: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d5000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d5004: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D5004u;
    {
        const bool branch_taken_0x2d5004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5004) {
            ctx->pc = 0x2D503Cu;
            goto label_2d503c;
        }
    }
    ctx->pc = 0x2D500Cu;
    // 0x2d500c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5010: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5014: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5018: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d501c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5020: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d5020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5024: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5028: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d502c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5030: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5038: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d503c:
    // 0x2d503c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d503cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5040: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d5044: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D504Cu;
}
