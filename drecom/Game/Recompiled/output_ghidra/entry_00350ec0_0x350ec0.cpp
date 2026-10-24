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

// Function: entry_00350ec0
// Address: 0x350ec0 - 0x350fb8
void entry_00350ec0_0x350ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350ec0_0x350ec0");
#endif

    switch (ctx->pc) {
        case 0x350edcu: goto label_350edc;
        case 0x350ee8u: goto label_350ee8;
        case 0x350ef8u: goto label_350ef8;
        case 0x350f04u: goto label_350f04;
        case 0x350f64u: goto label_350f64;
        case 0x350f9cu: goto label_350f9c;
        default: break;
    }

    ctx->pc = 0x350ec0u;

    // 0x350ec0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x350ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x350ec4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ec8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x350ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x350ecc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ed0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350ed0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350ed4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x350ED4u;
    SET_GPR_U32(ctx, 31, 0x350EDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x350ED4u, 0x350EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EDCu;
label_350edc:
    // 0x350edc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ee0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350EE0u;
    SET_GPR_U32(ctx, 31, 0x350EE8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350EE0u, 0x350EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EE8u;
label_350ee8:
    // 0x350ee8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350eec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350eecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350ef0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350EF0u;
    SET_GPR_U32(ctx, 31, 0x350EF8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350EF0u, 0x350EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EF8u;
label_350ef8:
    // 0x350ef8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350efc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350EFCu;
    SET_GPR_U32(ctx, 31, 0x350F04u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350EFCu, 0x350F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F04u;
label_350f04:
    // 0x350f04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x350f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x350f0c: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x350F0Cu;
    {
        const bool branch_taken_0x350f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f0c) {
            ctx->pc = 0x35102Cu;
            return;
        }
    }
    ctx->pc = 0x350F14u;
    // 0x350f14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350f18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f1c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x350f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x350f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x350f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350f24: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f28: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x350f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x350f2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f30: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x350f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x350f34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f38: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x350f38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x350f3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x350f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x350f44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f4c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x350f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x350f50: 0x24065a25  addiu       $a2, $zero, 0x5A25
    ctx->pc = 0x350f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23077));
    // 0x350f54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350f58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x350f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350f5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350F5Cu;
    SET_GPR_U32(ctx, 31, 0x350F64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350F5Cu, 0x350F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F64u;
label_350f64:
    // 0x350f64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x350f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350f68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f6c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x350f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x350f70: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x350f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x350f74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f78: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x350f78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x350f7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350f84: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x350f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350f88: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x350f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x350f8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x350F8Cu;
    {
        const bool branch_taken_0x350f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f8c) {
            ctx->pc = 0x350FB8u;
            return;
        }
    }
    ctx->pc = 0x350F94u;
    // 0x350f94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x350F94u;
    SET_GPR_U32(ctx, 31, 0x350F9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x350F94u, 0x350F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F9Cu;
label_350f9c:
    // 0x350f9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x350f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350fa0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x350fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x350fa4: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x350fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x350fa8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x350fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x350fac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x350facu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x350fb0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350fb4: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x350fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x350fb8u;
}
