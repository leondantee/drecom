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

// Function: entry_001f0328
// Address: 0x1f0328 - 0x1f036c
void entry_001f0328_0x1f0328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0328_0x1f0328");
#endif

    switch (ctx->pc) {
        case 0x1f0368u: goto label_1f0368;
        default: break;
    }

    ctx->pc = 0x1f0328u;

    // 0x1f0328: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f032c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0330: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f0330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0334: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1f0334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x1f0338: 0x34a20fdb  ori         $v0, $a1, 0xFDB
    ctx->pc = 0x1f0338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1f033c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0340: 0x0  nop
    ctx->pc = 0x1f0340u;
    // NOP
    // 0x1f0344: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f0344u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f0348: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x1f0348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f034c: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x1f034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1f0350: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f0350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f0354: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f0354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f0358: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x1f0358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x1f035c: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x1f035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0360: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F0360u;
    SET_GPR_U32(ctx, 31, 0x1F0368u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F0360u, 0x1F0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0368u;
label_1f0368:
    // 0x1f0368: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x1f036cu;
}
