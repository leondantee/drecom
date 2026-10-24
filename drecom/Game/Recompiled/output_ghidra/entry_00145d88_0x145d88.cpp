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

// Function: entry_00145d88
// Address: 0x145d88 - 0x145db4
void entry_00145d88_0x145d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145d88_0x145d88");
#endif

    switch (ctx->pc) {
        case 0x145dacu: goto label_145dac;
        default: break;
    }

    ctx->pc = 0x145d88u;

    // 0x145d88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d90: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x145d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x145d94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x145d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x145d98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x145d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x145d9c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x145d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145da0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x145da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145da4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x145DA4u;
    SET_GPR_U32(ctx, 31, 0x145DACu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x145DA4u, 0x145DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DACu;
label_145dac:
    // 0x145dac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145db0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x145db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x145db4u;
}
