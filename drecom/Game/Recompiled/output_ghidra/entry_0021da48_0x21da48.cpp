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

// Function: entry_0021da48
// Address: 0x21da48 - 0x21daa8
void entry_0021da48_0x21da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021da48_0x21da48");
#endif

    switch (ctx->pc) {
        case 0x21da7cu: goto label_21da7c;
        default: break;
    }

    ctx->pc = 0x21da48u;

    // 0x21da48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21da48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21da4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21da50: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x21da50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21da54: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x21da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21da58: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21da5c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21da60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21da60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21da64: 0x0  nop
    ctx->pc = 0x21da64u;
    // NOP
    // 0x21da68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21da68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21da6c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21da6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21da70: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x21da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21da74: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21DA74u;
    SET_GPR_U32(ctx, 31, 0x21DA7Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21DA74u, 0x21DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA7Cu;
label_21da7c:
    // 0x21da7c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x21da7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x21da80: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x21da80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x21da84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21da84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21da88: 0x0  nop
    ctx->pc = 0x21da88u;
    // NOP
    // 0x21da8c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21da8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21da90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21da90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21da94: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x21da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21da98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21da98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21da9c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x21da9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x21daa0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x21DAA0u;
    {
        const bool branch_taken_0x21daa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21daa0) {
            ctx->pc = 0x21DD28u;
            return;
        }
    }
    ctx->pc = 0x21DAA8u;
}
