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

// Function: entry_0016ece8
// Address: 0x16ece8 - 0x16ed70
void entry_0016ece8_0x16ece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ece8_0x16ece8");
#endif

    switch (ctx->pc) {
        case 0x16ed68u: goto label_16ed68;
        default: break;
    }

    ctx->pc = 0x16ece8u;

    // 0x16ece8: 0x97a200de  lhu         $v0, 0xDE($sp)
    ctx->pc = 0x16ece8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x16ecec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x16ECECu;
    {
        const bool branch_taken_0x16ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ecec) {
            ctx->pc = 0x16ED70u;
            return;
        }
    }
    ctx->pc = 0x16ECF4u;
    // 0x16ecf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ecf8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16ecf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ecfc: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x16ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x16ed00: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x16ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16ed04: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x16ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x16ed08: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x16ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16ed0c: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x16ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x16ed10: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16ed14: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x16ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
    // 0x16ed18: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x16ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16ed1c: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x16ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x16ed20: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16ed24: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x16ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x16ed28: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x16ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x16ed2c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x16ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16ed30: 0xae031320  sw          $v1, 0x1320($s0)
    ctx->pc = 0x16ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 3));
    // 0x16ed34: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x16ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x16ed38: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x16ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x16ed3c: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x16ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x16ed40: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x16ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x16ed44: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x16ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x16ed48: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x16ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    // 0x16ed4c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x16ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x16ed50: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x16ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16ed54: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x16ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x16ed58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16ed58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16ed5c: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x16ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x16ed60: 0xc09940c  jal         func_265030
    ctx->pc = 0x16ED60u;
    SET_GPR_U32(ctx, 31, 0x16ED68u);
    ctx->pc = 0x265030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265030u, 0x16ED60u, 0x16ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ED68u;
label_16ed68:
    // 0x16ed68: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x16ED68u;
    {
        const bool branch_taken_0x16ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ed68) {
            ctx->pc = 0x16F1F8u;
            return;
        }
    }
    ctx->pc = 0x16ED70u;
}
