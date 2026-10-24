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

// Function: entry_0014b068
// Address: 0x14b068 - 0x14b0c4
void entry_0014b068_0x14b068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b068_0x14b068");
#endif

    switch (ctx->pc) {
        case 0x14b078u: goto label_14b078;
        case 0x14b0b4u: goto label_14b0b4;
        default: break;
    }

    ctx->pc = 0x14b068u;

    // 0x14b068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b06c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14b06cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b070: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14B070u;
    SET_GPR_U32(ctx, 31, 0x14B078u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14B070u, 0x14B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B078u;
label_14b078:
    // 0x14b078: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b07c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14b07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14b080: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14B080u;
    {
        const bool branch_taken_0x14b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b080) {
            ctx->pc = 0x14B0C4u;
            return;
        }
    }
    ctx->pc = 0x14B088u;
    // 0x14b088: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b08c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14b08cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14b090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b094: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14b094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x14b098: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b09c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b0a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b0a4: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x14b0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b0a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x14b0a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14b0ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14B0ACu;
    SET_GPR_U32(ctx, 31, 0x14B0B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14B0ACu, 0x14B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0B4u;
label_14b0b4:
    // 0x14b0b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b0b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14b0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14b0bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B0BCu;
    {
        const bool branch_taken_0x14b0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b0bc) {
            ctx->pc = 0x14B0D4u;
            return;
        }
    }
    ctx->pc = 0x14B0C4u;
}
