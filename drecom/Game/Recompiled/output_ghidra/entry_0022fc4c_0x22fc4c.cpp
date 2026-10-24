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

// Function: entry_0022fc4c
// Address: 0x22fc4c - 0x22fc90
void entry_0022fc4c_0x22fc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fc4c_0x22fc4c");
#endif

    switch (ctx->pc) {
        case 0x22fc8cu: goto label_22fc8c;
        default: break;
    }

    ctx->pc = 0x22fc4cu;

    // 0x22fc4c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc54: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22fc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fc58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22fc5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22fc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22fc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22fc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22fc64: 0x0  nop
    ctx->pc = 0x22fc64u;
    // NOP
    // 0x22fc68: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x22fc68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fc6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fc74: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22fc78: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22fc7c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22fc80: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22fc84: 0xc05c848  jal         func_172120
    ctx->pc = 0x22FC84u;
    SET_GPR_U32(ctx, 31, 0x22FC8Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22FC84u, 0x22FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC8Cu;
label_22fc8c:
    // 0x22fc8c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22fc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->pc = 0x22fc90u;
}
