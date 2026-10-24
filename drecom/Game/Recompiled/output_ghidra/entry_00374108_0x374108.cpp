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

// Function: entry_00374108
// Address: 0x374108 - 0x374180
void entry_00374108_0x374108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374108_0x374108");
#endif

    switch (ctx->pc) {
        case 0x374128u: goto label_374128;
        case 0x374168u: goto label_374168;
        default: break;
    }

    ctx->pc = 0x374108u;

    // 0x374108: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37410c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x37410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x374110: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x374110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x374114: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x374114u;
    {
        const bool branch_taken_0x374114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374114) {
            ctx->pc = 0x3741D0u;
            return;
        }
    }
    ctx->pc = 0x37411Cu;
    // 0x37411c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x374120: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x374120u;
    SET_GPR_U32(ctx, 31, 0x374128u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x374128u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374128u) { return; }
    ctx->pc = 0x374128u;
label_374128:
    // 0x374128: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37412c: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x37412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374130: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x374130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x374134: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374138: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x374138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37413c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x37413cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x374140: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374144: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x374144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374148: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x374148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x37414c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x37414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374150: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374154: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x374154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x374158: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x374158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37415c: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x37415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x374160: 0xc067618  jal         func_19D860
    ctx->pc = 0x374160u;
    SET_GPR_U32(ctx, 31, 0x374168u);
    ctx->pc = 0x19D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D860u, 0x374160u, 0x374168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374168u;
label_374168:
    // 0x374168: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37416c: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x37416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x374170: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x374170u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374174: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374178: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x374178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x37417c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x37417cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x374180u;
}
