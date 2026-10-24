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

// Function: entry_001eae80
// Address: 0x1eae80 - 0x1eafac
void entry_001eae80_0x1eae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eae80_0x1eae80");
#endif

    switch (ctx->pc) {
        case 0x1eaeb0u: goto label_1eaeb0;
        case 0x1eaf1cu: goto label_1eaf1c;
        case 0x1eaf2cu: goto label_1eaf2c;
        case 0x1eaf40u: goto label_1eaf40;
        default: break;
    }

    ctx->pc = 0x1eae80u;

    // 0x1eae80: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x1eae80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eae84: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1eae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1eae88: 0x14830048  bne         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1EAE88u;
    {
        const bool branch_taken_0x1eae88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eae88) {
            ctx->pc = 0x1EAFACu;
            return;
        }
    }
    ctx->pc = 0x1EAE90u;
    // 0x1eae90: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae94: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eae94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1eae98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1eae9c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1eaea0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eaea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaea4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eaea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eaea8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EAEA8u;
    SET_GPR_U32(ctx, 31, 0x1EAEB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EAEA8u, 0x1EAEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAEB0u;
label_1eaeb0:
    // 0x1eaeb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eaeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaeb4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaeb8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eaeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eaebc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1eaebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eaec0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaec4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eaec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eaec8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaecc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1eaeccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaed0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaed4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eaed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaed8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaedc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eaedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eaee0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaee4: 0x245e1330  addiu       $fp, $v0, 0x1330
    ctx->pc = 0x1eaee4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eaee8: 0x8fc30030  lw          $v1, 0x30($fp)
    ctx->pc = 0x1eaee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1eaeec: 0x34622018  ori         $v0, $v1, 0x2018
    ctx->pc = 0x1eaeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8216);
    // 0x1eaef0: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x1eaef0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1eaef4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaef8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eaefc: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1eaefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1eaf00: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1eaf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1eaf04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1eaf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eaf08: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1eaf08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1eaf0c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf10: 0x2405027c  addiu       $a1, $zero, 0x27C
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1eaf14: 0xc0960d0  jal         func_258340
    ctx->pc = 0x1EAF14u;
    SET_GPR_U32(ctx, 31, 0x1EAF1Cu);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x1EAF14u, 0x1EAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF1Cu;
label_1eaf1c:
    // 0x1eaf1c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf20: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eaf24: 0xc096188  jal         func_258620
    ctx->pc = 0x1EAF24u;
    SET_GPR_U32(ctx, 31, 0x1EAF2Cu);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x1EAF24u, 0x1EAF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF2Cu;
label_1eaf2c:
    // 0x1eaf2c: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eaf2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf30: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1eaf30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1eaf34: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1eaf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eaf38: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EAF38u;
    SET_GPR_U32(ctx, 31, 0x1EAF40u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EAF38u, 0x1EAF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF40u;
label_1eaf40:
    // 0x1eaf40: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf44: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x1eaf44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1eaf48: 0x26130480  addiu       $s3, $s0, 0x480
    ctx->pc = 0x1eaf48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x1eaf4c: 0x72608628  paddub      $s0, $s3, $zero
    ctx->pc = 0x1eaf4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1eaf50: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eaf50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaf54: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf58: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1eaf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1eaf5c: 0x24850510  addiu       $a1, $a0, 0x510
    ctx->pc = 0x1eaf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x1eaf60: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1eaf60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eaf64: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eaf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaf68: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1eaf68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf6c: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x1eaf6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x1eaf70: 0x250205a0  addiu       $v0, $t0, 0x5A0
    ctx->pc = 0x1eaf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1440));
    // 0x1eaf74: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eaf74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eaf78: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eaf78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eaf7c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaf80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eaf84: 0xa44000aa  sh          $zero, 0xAA($v0)
    ctx->pc = 0x1eaf84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eaf88: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1eaf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1eaf8c: 0x8c26af60  lw          $a2, -0x50A0($at)
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1eaf90: 0x2cc401f4  sltiu       $a0, $a2, 0x1F4
    ctx->pc = 0x1eaf90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x1eaf94: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAF94u;
    {
        const bool branch_taken_0x1eaf94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf94) {
            ctx->pc = 0x1EAFACu;
            return;
        }
    }
    ctx->pc = 0x1EAF9Cu;
    // 0x1eaf9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eaf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eafa0: 0x8fb60138  lw          $s6, 0x138($sp)
    ctx->pc = 0x1eafa0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eafa4: 0x26c21330  addiu       $v0, $s6, 0x1330
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4912));
    // 0x1eafa8: 0xa44500aa  sh          $a1, 0xAA($v0)
    ctx->pc = 0x1eafa8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1eafacu;
}
