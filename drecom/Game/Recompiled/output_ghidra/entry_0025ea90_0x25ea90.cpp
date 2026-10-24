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

// Function: entry_0025ea90
// Address: 0x25ea90 - 0x25eaf0
void entry_0025ea90_0x25ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ea90_0x25ea90");
#endif

    switch (ctx->pc) {
        case 0x25eab0u: goto label_25eab0;
        default: break;
    }

    ctx->pc = 0x25ea90u;

    // 0x25ea90: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ea94: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25ea98: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x25ea98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x25ea9c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25EA9Cu;
    {
        const bool branch_taken_0x25ea9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea9c) {
            ctx->pc = 0x25EAF0u;
            return;
        }
    }
    ctx->pc = 0x25EAA4u;
    // 0x25eaa4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25eaa8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25EAA8u;
    SET_GPR_U32(ctx, 31, 0x25EAB0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25EAB0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EAB0u) { return; }
    ctx->pc = 0x25EAB0u;
label_25eab0:
    // 0x25eab0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eab4: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x25eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eab8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25eabc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eac0: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x25eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eac4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25eac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25eac8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eacc: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x25eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ead0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25ead4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ead8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eadc: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x25eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25eae0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25eae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25eae4: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25eae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25eae8: 0xc067618  jal         func_19D860
    ctx->pc = 0x25EAE8u;
    SET_GPR_U32(ctx, 31, 0x25EAF0u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x25EAE8u, 0x25EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAF0u;
}
