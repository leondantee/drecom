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

// Function: entry_001ef968
// Address: 0x1ef968 - 0x1ef9ac
void entry_001ef968_0x1ef968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef968_0x1ef968");
#endif

    switch (ctx->pc) {
        case 0x1ef9a8u: goto label_1ef9a8;
        default: break;
    }

    ctx->pc = 0x1ef968u;

    // 0x1ef968: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef96c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef970: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ef970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ef974: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef97c: 0x0  nop
    ctx->pc = 0x1ef97cu;
    // NOP
    // 0x1ef980: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ef980u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef984: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef988: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef98c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef990: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef994: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef998: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef99c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef9a0: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF9A0u;
    SET_GPR_U32(ctx, 31, 0x1EF9A8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF9A0u, 0x1EF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9A8u;
label_1ef9a8:
    // 0x1ef9a8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ef9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x1ef9acu;
}
