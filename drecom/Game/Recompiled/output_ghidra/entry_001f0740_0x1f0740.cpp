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

// Function: entry_001f0740
// Address: 0x1f0740 - 0x1f0784
void entry_001f0740_0x1f0740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0740_0x1f0740");
#endif

    switch (ctx->pc) {
        case 0x1f0780u: goto label_1f0780;
        default: break;
    }

    ctx->pc = 0x1f0740u;

    // 0x1f0740: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0744: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x1f0744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0748: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1f0748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1f074c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f074cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f0750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0754: 0x0  nop
    ctx->pc = 0x1f0754u;
    // NOP
    // 0x1f0758: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f0758u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f075c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0760: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0764: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0768: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f0768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f076c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x1f076cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x1f0770: 0x2605dce0  addiu       $a1, $s0, -0x2320
    ctx->pc = 0x1f0770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x1f0774: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f0774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0778: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F0778u;
    SET_GPR_U32(ctx, 31, 0x1F0780u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F0778u, 0x1F0780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0780u;
label_1f0780:
    // 0x1f0780: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x1f0784u;
}
