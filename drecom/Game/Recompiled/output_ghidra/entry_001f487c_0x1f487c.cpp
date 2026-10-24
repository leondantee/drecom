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

// Function: entry_001f487c
// Address: 0x1f487c - 0x1f4954
void entry_001f487c_0x1f487c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f487c_0x1f487c");
#endif

    switch (ctx->pc) {
        case 0x1f488cu: goto label_1f488c;
        case 0x1f4898u: goto label_1f4898;
        case 0x1f4900u: goto label_1f4900;
        case 0x1f493cu: goto label_1f493c;
        default: break;
    }

    ctx->pc = 0x1f487cu;

    // 0x1f487c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f487cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4880: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f4880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4884: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F4884u;
    SET_GPR_U32(ctx, 31, 0x1F488Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F4884u, 0x1F488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F488Cu;
label_1f488c:
    // 0x1f488c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4890: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F4890u;
    SET_GPR_U32(ctx, 31, 0x1F4898u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F4890u, 0x1F4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4898u;
label_1f4898:
    // 0x1f4898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f489c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f489cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f48a0: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x1F48A0u;
    {
        const bool branch_taken_0x1f48a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f48a0) {
            ctx->pc = 0x1F4B14u;
            return;
        }
    }
    ctx->pc = 0x1F48A8u;
    // 0x1f48a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f48a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f48ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f48acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48b0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f48b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f48b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48b8: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1f48b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f48bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1f48bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f48c0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f48c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f48c4: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x1F48C4u;
    {
        const bool branch_taken_0x1f48c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f48c4) {
            ctx->pc = 0x1F4B14u;
            return;
        }
    }
    ctx->pc = 0x1F48CCu;
    // 0x1f48cc: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x1f48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x1f48d0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1f48d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1f48d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f48d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f48d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48dc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1f48dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1f48e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f48e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f48ec: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1f48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f48f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f48f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f48f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f48f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f48f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F48F8u;
    SET_GPR_U32(ctx, 31, 0x1F4900u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F48F8u, 0x1F4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4900u;
label_1f4900:
    // 0x1f4900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4908: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f4908u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f490c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1f490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f4910: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4914: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f4914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4918: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f491c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f491cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4920: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4924: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f4924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4928: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f492c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f492cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f4930: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4934: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F4934u;
    SET_GPR_U32(ctx, 31, 0x1F493Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F4934u, 0x1F493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F493Cu;
label_1f493c:
    // 0x1f493c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4940: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f4940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f4944: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f4944u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4948: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f494c: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f494cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f4950: 0x0  nop
    ctx->pc = 0x1f4950u;
    // NOP
    ctx->pc = 0x1f4954u;
}
