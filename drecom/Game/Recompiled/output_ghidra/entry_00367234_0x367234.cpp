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

// Function: entry_00367234
// Address: 0x367234 - 0x367260
void entry_00367234_0x367234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00367234_0x367234");
#endif

    switch (ctx->pc) {
        case 0x367258u: goto label_367258;
        default: break;
    }

    ctx->pc = 0x367234u;

    // 0x367234: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x367234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x367238: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x367238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36723c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x367240: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x367244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367248: 0x0  nop
    ctx->pc = 0x367248u;
    // NOP
    // 0x36724c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x36724cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x367250: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x367250u;
    SET_GPR_U32(ctx, 31, 0x367258u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x367250u, 0x367258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367258u;
label_367258:
    // 0x367258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x367258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36725c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x36725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    ctx->pc = 0x367260u;
}
