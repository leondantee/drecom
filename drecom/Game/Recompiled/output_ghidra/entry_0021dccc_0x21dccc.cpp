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

// Function: entry_0021dccc
// Address: 0x21dccc - 0x21dd28
void entry_0021dccc_0x21dccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021dccc_0x21dccc");
#endif

    switch (ctx->pc) {
        case 0x21dd00u: goto label_21dd00;
        default: break;
    }

    ctx->pc = 0x21dcccu;

    // 0x21dccc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21dcccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21dcd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21dcd4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x21dcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21dcd8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x21dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dcdc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21dce0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21dce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21dce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dce8: 0x0  nop
    ctx->pc = 0x21dce8u;
    // NOP
    // 0x21dcec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21dcecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21dcf0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21dcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21dcf4: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x21dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21dcf8: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21DCF8u;
    SET_GPR_U32(ctx, 31, 0x21DD00u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21DCF8u, 0x21DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD00u;
label_21dd00:
    // 0x21dd00: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x21dd00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x21dd04: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x21dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x21dd08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21dd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21dd0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21dd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dd10: 0x0  nop
    ctx->pc = 0x21dd10u;
    // NOP
    // 0x21dd14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21dd14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21dd18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dd1c: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x21dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21dd20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21dd24: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x21dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    ctx->pc = 0x21dd28u;
}
