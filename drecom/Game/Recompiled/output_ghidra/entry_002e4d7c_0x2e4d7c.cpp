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

// Function: entry_002e4d7c
// Address: 0x2e4d7c - 0x2e4dd4
void entry_002e4d7c_0x2e4d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4d7c_0x2e4d7c");
#endif

    switch (ctx->pc) {
        case 0x2e4dccu: goto label_2e4dcc;
        default: break;
    }

    ctx->pc = 0x2e4d7cu;

    // 0x2e4d7c: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2e4d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d80: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2e4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2e4d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d88: 0x0  nop
    ctx->pc = 0x2e4d88u;
    // NOP
    // 0x2e4d8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e4d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e4d90: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e4d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2e4d94: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2e4d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d9c: 0x0  nop
    ctx->pc = 0x2e4d9cu;
    // NOP
    // 0x2e4da0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4da4: 0x0  nop
    ctx->pc = 0x2e4da4u;
    // NOP
    // 0x2e4da8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2E4DA8u;
    {
        const bool branch_taken_0x2e4da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4da8) {
            ctx->pc = 0x2E4DD4u;
            return;
        }
    }
    ctx->pc = 0x2E4DB0u;
    // 0x2e4db0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4db4: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2e4db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4db8: 0xc60d00a4  lwc1        $f13, 0xA4($s0)
    ctx->pc = 0x2e4db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4dbc: 0xc60e00a4  lwc1        $f14, 0xA4($s0)
    ctx->pc = 0x2e4dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4dc0: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2e4dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e4dc4: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x2E4DC4u;
    SET_GPR_U32(ctx, 31, 0x2E4DCCu);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2E4DC4u, 0x2E4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DCCu;
label_2e4dcc:
    // 0x2e4dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4DCCu;
    {
        const bool branch_taken_0x2e4dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4dcc) {
            ctx->pc = 0x2E4DD8u;
            return;
        }
    }
    ctx->pc = 0x2E4DD4u;
}
