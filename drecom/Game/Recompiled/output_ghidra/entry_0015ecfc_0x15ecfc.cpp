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

// Function: entry_0015ecfc
// Address: 0x15ecfc - 0x15ed38
void entry_0015ecfc_0x15ecfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ecfc_0x15ecfc");
#endif

    switch (ctx->pc) {
        case 0x15ed18u: goto label_15ed18;
        default: break;
    }

    ctx->pc = 0x15ecfcu;

    // 0x15ecfc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15ed00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15ed00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15ed04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ed04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ed08: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ed0c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x15ed0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ed10: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15ED10u;
    SET_GPR_U32(ctx, 31, 0x15ED18u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15ED10u, 0x15ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED18u;
label_15ed18:
    // 0x15ed18: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15ed18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15ed1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ed20: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15ed20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ed24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15ed28: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15ed28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ed2c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15ed2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed30: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15ed30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x15ed38u;
}
