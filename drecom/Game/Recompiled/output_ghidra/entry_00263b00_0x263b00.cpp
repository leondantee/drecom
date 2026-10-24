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

// Function: entry_00263b00
// Address: 0x263b00 - 0x263b24
void entry_00263b00_0x263b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263b00_0x263b00");
#endif

    switch (ctx->pc) {
        case 0x263b14u: goto label_263b14;
        default: break;
    }

    ctx->pc = 0x263b00u;

    // 0x263b00: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x263b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x263b04: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x263b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x263b08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x263b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b0c: 0xc098d00  jal         func_263400
    ctx->pc = 0x263B0Cu;
    SET_GPR_U32(ctx, 31, 0x263B14u);
    ctx->pc = 0x263400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263400u, 0x263B0Cu, 0x263B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B14u;
label_263b14:
    // 0x263b14: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b18: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x263b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
    // 0x263b1c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x263B1Cu;
    {
        const bool branch_taken_0x263b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b1c) {
            ctx->pc = 0x263BD8u;
            return;
        }
    }
    ctx->pc = 0x263B24u;
}
