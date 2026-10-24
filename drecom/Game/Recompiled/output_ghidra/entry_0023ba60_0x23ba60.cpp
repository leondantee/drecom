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

// Function: entry_0023ba60
// Address: 0x23ba60 - 0x23bab4
void entry_0023ba60_0x23ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ba60_0x23ba60");
#endif

    switch (ctx->pc) {
        case 0x23ba68u: goto label_23ba68;
        default: break;
    }

    ctx->pc = 0x23ba60u;

    // 0x23ba60: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BA60u;
    SET_GPR_U32(ctx, 31, 0x23BA68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BA60u, 0x23BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA68u;
label_23ba68:
    // 0x23ba68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23ba68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ba6c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23ba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23ba70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ba74: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23ba74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23ba78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23ba78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23ba7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba80: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23ba80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ba84: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x23ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x23ba88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23ba8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ba98: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23ba98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23ba9c: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x23ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x23baa0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23baa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23baa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23baa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23baa8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23baac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bab0: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23bab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->pc = 0x23bab4u;
}
