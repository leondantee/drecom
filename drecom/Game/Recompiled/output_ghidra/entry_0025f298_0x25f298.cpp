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

// Function: entry_0025f298
// Address: 0x25f298 - 0x25f310
void entry_0025f298_0x25f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f298_0x25f298");
#endif

    switch (ctx->pc) {
        case 0x25f2b8u: goto label_25f2b8;
        case 0x25f2f8u: goto label_25f2f8;
        default: break;
    }

    ctx->pc = 0x25f298u;

    // 0x25f298: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f29c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25f2a0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x25f2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x25f2a4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x25F2A4u;
    {
        const bool branch_taken_0x25f2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f2a4) {
            ctx->pc = 0x25F360u;
            return;
        }
    }
    ctx->pc = 0x25F2ACu;
    // 0x25f2ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f2b0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F2B0u;
    SET_GPR_U32(ctx, 31, 0x25F2B8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F2B8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F2B8u) { return; }
    ctx->pc = 0x25F2B8u;
label_25f2b8:
    // 0x25f2b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2bc: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f2c0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f2c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2c8: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f2cc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f2d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2d4: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f2d8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f2dc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2e0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2e4: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25f2e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f2ec: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25f2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25f2f0: 0xc067618  jal         func_19D860
    ctx->pc = 0x25F2F0u;
    SET_GPR_U32(ctx, 31, 0x25F2F8u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x25F2F0u, 0x25F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2F8u;
label_25f2f8:
    // 0x25f2f8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f2fc: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x25f300: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25f300u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f304: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f308: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25f308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25f30c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25f30cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x25f310u;
}
