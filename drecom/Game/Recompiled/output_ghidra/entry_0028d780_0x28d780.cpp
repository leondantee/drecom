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

// Function: entry_0028d780
// Address: 0x28d780 - 0x28d7e0
void entry_0028d780_0x28d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d780_0x28d780");
#endif

    switch (ctx->pc) {
        case 0x28d7acu: goto label_28d7ac;
        case 0x28d7dcu: goto label_28d7dc;
        default: break;
    }

    ctx->pc = 0x28d780u;

    // 0x28d780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d784: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x28d784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x28d788: 0x24e221f0  addiu       $v0, $a3, 0x21F0
    ctx->pc = 0x28d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8688));
    // 0x28d78c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28d78cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d790: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x28d790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x28d794: 0x24c2c1e0  addiu       $v0, $a2, -0x3E20
    ctx->pc = 0x28d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951392));
    // 0x28d798: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28d798u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d79c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28d7a0: 0x24462210  addiu       $a2, $v0, 0x2210
    ctx->pc = 0x28d7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x28d7a4: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x28D7A4u;
    SET_GPR_U32(ctx, 31, 0x28D7ACu);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x28D7A4u, 0x28D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7ACu;
label_28d7ac:
    // 0x28d7ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28D7ACu;
    {
        const bool branch_taken_0x28d7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d7ac) {
            ctx->pc = 0x28D7ECu;
            return;
        }
    }
    ctx->pc = 0x28D7B4u;
    // 0x28d7b4: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d7b8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x28d7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d7bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d7c0: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x28d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x28d7c4: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x28d7c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28d7c8: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D7C8u;
    {
        const bool branch_taken_0x28d7c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d7c8) {
            ctx->pc = 0x28D7E0u;
            return;
        }
    }
    ctx->pc = 0x28D7D0u;
    // 0x28d7d0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28d7d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d7d4: 0xc062b40  jal         func_18AD00
    ctx->pc = 0x28D7D4u;
    SET_GPR_U32(ctx, 31, 0x28D7DCu);
    ctx->pc = 0x18AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD00u, 0x28D7D4u, 0x28D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0xa2006855  sb          $zero, 0x6855($s0)
    ctx->pc = 0x28d7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x28d7e0u;
}
