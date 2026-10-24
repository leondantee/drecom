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

// Function: entry_0029ec98
// Address: 0x29ec98 - 0x29ed60
void entry_0029ec98_0x29ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ec98_0x29ec98");
#endif

    switch (ctx->pc) {
        case 0x29eca8u: goto label_29eca8;
        case 0x29ecb8u: goto label_29ecb8;
        case 0x29ecc4u: goto label_29ecc4;
        case 0x29ecd0u: goto label_29ecd0;
        case 0x29ed20u: goto label_29ed20;
        default: break;
    }

    ctx->pc = 0x29ec98u;

    // 0x29ec98: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29ec9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29eca0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29ECA0u;
    SET_GPR_U32(ctx, 31, 0x29ECA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29ECA0u, 0x29ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECA8u;
label_29eca8:
    // 0x29eca8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29ecacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29ecb0: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29ECB0u;
    SET_GPR_U32(ctx, 31, 0x29ECB8u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29ECB0u, 0x29ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECB8u;
label_29ecb8:
    // 0x29ecb8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecbc: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29ECBCu;
    SET_GPR_U32(ctx, 31, 0x29ECC4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29ECBCu, 0x29ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECC4u;
label_29ecc4:
    // 0x29ecc4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecc8: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29ECC8u;
    SET_GPR_U32(ctx, 31, 0x29ECD0u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29ECC8u, 0x29ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECD0u;
label_29ecd0:
    // 0x29ecd0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29ecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecd4: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29ecd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29ecd8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29ecdc: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29ecdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29ece0: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x29ECE0u;
    {
        const bool branch_taken_0x29ece0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ece0) {
            ctx->pc = 0x29EE2Cu;
            return;
        }
    }
    ctx->pc = 0x29ECE8u;
    // 0x29ece8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ecec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecf0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29ecf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ecf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ecf8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecfc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ed00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed04: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29ed04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ed08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed0c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29ed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ed10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29ed18: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29ED18u;
    SET_GPR_U32(ctx, 31, 0x29ED20u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29ED18u, 0x29ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED20u;
label_29ed20:
    // 0x29ed20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29ed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ed24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29ed24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29ed28: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29ED28u;
    {
        const bool branch_taken_0x29ed28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed28) {
            ctx->pc = 0x29ED60u;
            return;
        }
    }
    ctx->pc = 0x29ED30u;
    // 0x29ed30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ed34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ed3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29ed40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29ed44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ed48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29ed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ed50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ed58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29ed60u;
}
