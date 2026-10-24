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

// Function: entry_001dc958
// Address: 0x1dc958 - 0x1dc97c
void entry_001dc958_0x1dc958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc958_0x1dc958");
#endif

    switch (ctx->pc) {
        case 0x1dc964u: goto label_1dc964;
        default: break;
    }

    ctx->pc = 0x1dc958u;

    // 0x1dc958: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1dc958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc95c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1DC95Cu;
    SET_GPR_U32(ctx, 31, 0x1DC964u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1DC95Cu, 0x1DC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC964u;
label_1dc964:
    // 0x1dc964: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1dc964u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dc968: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1dc968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1dc96c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1dc96cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dc970: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc974: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x1dc974u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc978: 0x0  nop
    ctx->pc = 0x1dc978u;
    // NOP
    ctx->pc = 0x1dc97cu;
}
