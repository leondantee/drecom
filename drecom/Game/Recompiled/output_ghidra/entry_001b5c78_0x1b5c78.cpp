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

// Function: entry_001b5c78
// Address: 0x1b5c78 - 0x1b5cf0
void entry_001b5c78_0x1b5c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5c78_0x1b5c78");
#endif

    switch (ctx->pc) {
        case 0x1b5c9cu: goto label_1b5c9c;
        case 0x1b5cbcu: goto label_1b5cbc;
        default: break;
    }

    ctx->pc = 0x1b5c78u;

    // 0x1b5c78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5c7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5c80: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1b5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x1b5c84: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b5c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b5c88: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1b5c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b5c8c: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1b5c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5c90: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1b5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b5c94: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1B5C94u;
    SET_GPR_U32(ctx, 31, 0x1B5C9Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B5C94u, 0x1B5C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C9Cu;
label_1b5c9c:
    // 0x1b5c9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ca0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b5ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1b5ca4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ca8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5cac: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1b5cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5cb0: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1b5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b5cb4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B5CB4u;
    SET_GPR_U32(ctx, 31, 0x1B5CBCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B5CB4u, 0x1B5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CBCu;
label_1b5cbc:
    // 0x1b5cbc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b5cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b5cc0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5cc8: 0x0  nop
    ctx->pc = 0x1b5cc8u;
    // NOP
    // 0x1b5ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5cd0: 0x0  nop
    ctx->pc = 0x1b5cd0u;
    // NOP
    // 0x1b5cd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5CD4u;
    {
        const bool branch_taken_0x1b5cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5cd4) {
            ctx->pc = 0x1B5CF0u;
            return;
        }
    }
    ctx->pc = 0x1B5CDCu;
    // 0x1b5cdc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1b5ce0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b5ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5ce4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b5ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5ce8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b5ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b5cec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b5cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b5cf0u;
}
