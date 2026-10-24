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

// Function: entry_0037ca80
// Address: 0x37ca80 - 0x37ca9c
void entry_0037ca80_0x37ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ca80_0x37ca80");
#endif

    switch (ctx->pc) {
        case 0x37ca8cu: goto label_37ca8c;
        default: break;
    }

    ctx->pc = 0x37ca80u;

    // 0x37ca80: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x37ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37ca84: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x37CA84u;
    SET_GPR_U32(ctx, 31, 0x37CA8Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x37CA84u, 0x37CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA8Cu;
label_37ca8c:
    // 0x37ca8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x37ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x37ca90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ca94: 0x0  nop
    ctx->pc = 0x37ca94u;
    // NOP
    // 0x37ca98: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x37ca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x37ca9cu;
}
