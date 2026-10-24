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

// Function: entry_001b42fc
// Address: 0x1b42fc - 0x1b4328
void entry_001b42fc_0x1b42fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b42fc_0x1b42fc");
#endif

    switch (ctx->pc) {
        case 0x1b431cu: goto label_1b431c;
        default: break;
    }

    ctx->pc = 0x1b42fcu;

    // 0x1b42fc: 0xc60111f8  lwc1        $f1, 0x11F8($s0)
    ctx->pc = 0x1b42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4300: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b4300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b4304: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b4308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b430c: 0x0  nop
    ctx->pc = 0x1b430cu;
    // NOP
    // 0x1b4310: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b4310u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4314: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B4314u;
    SET_GPR_U32(ctx, 31, 0x1B431Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B4314u, 0x1B431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B431Cu;
label_1b431c:
    // 0x1b431c: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b431cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b4320: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B4320u;
    {
        const bool branch_taken_0x1b4320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4320) {
            ctx->pc = 0x1B4378u;
            return;
        }
    }
    ctx->pc = 0x1B4328u;
}
