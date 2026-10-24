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

// Function: entry_0026db5c
// Address: 0x26db5c - 0x26db7c
void entry_0026db5c_0x26db5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026db5c_0x26db5c");
#endif

    switch (ctx->pc) {
        case 0x26db78u: goto label_26db78;
        default: break;
    }

    ctx->pc = 0x26db5cu;

    // 0x26db5c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26db60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26db64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26db64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26db68: 0xc60c1290  lwc1        $f12, 0x1290($s0)
    ctx->pc = 0x26db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26db6c: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x26db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26db70: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26DB70u;
    SET_GPR_U32(ctx, 31, 0x26DB78u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26DB70u, 0x26DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB78u;
label_26db78:
    // 0x26db78: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x26db78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x26db7cu;
}
