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

// Function: entry_00221a88
// Address: 0x221a88 - 0x221aec
void entry_00221a88_0x221a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221a88_0x221a88");
#endif

    switch (ctx->pc) {
        case 0x221aacu: goto label_221aac;
        default: break;
    }

    ctx->pc = 0x221a88u;

    // 0x221a88: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221a8c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x221a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x221a90: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x221a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x221a94: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x221a94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221a98: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x221a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x221a9c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x221a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x221aa0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221aa0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221aa4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x221AA4u;
    SET_GPR_U32(ctx, 31, 0x221AACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x221AA4u, 0x221AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AACu;
label_221aac:
    // 0x221aac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221aacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221ab0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221ab4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x221ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x221ab8: 0x84a4005c  lh          $a0, 0x5C($a1)
    ctx->pc = 0x221ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x221abc: 0x2483fffb  addiu       $v1, $a0, -0x5
    ctx->pc = 0x221abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x221ac0: 0xa4a3005c  sh          $v1, 0x5C($a1)
    ctx->pc = 0x221ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x221ac4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221ac8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x221ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x221acc: 0x8483005c  lh          $v1, 0x5C($a0)
    ctx->pc = 0x221accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x221ad0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x221ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x221ad4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x221ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x221ad8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221AD8u;
    {
        const bool branch_taken_0x221ad8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x221ad8) {
            ctx->pc = 0x221AECu;
            return;
        }
    }
    ctx->pc = 0x221AE0u;
    // 0x221ae0: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221ae4: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x221ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x221ae8: 0xa460005c  sh          $zero, 0x5C($v1)
    ctx->pc = 0x221ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x221aecu;
}
