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

// Function: entry_002329b8
// Address: 0x2329b8 - 0x232a08
void entry_002329b8_0x2329b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002329b8_0x2329b8");
#endif

    switch (ctx->pc) {
        case 0x2329d0u: goto label_2329d0;
        default: break;
    }

    ctx->pc = 0x2329b8u;

    // 0x2329b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2329b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2329bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2329bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2329c0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2329c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2329c4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2329c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2329c8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2329C8u;
    SET_GPR_U32(ctx, 31, 0x2329D0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2329C8u, 0x2329D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329D0u;
label_2329d0:
    // 0x2329d0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2329d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2329d4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2329d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2329d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2329d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2329dc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2329dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2329e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2329e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2329e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2329e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2329e8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2329e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2329ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2329ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2329f0: 0x0  nop
    ctx->pc = 0x2329f0u;
    // NOP
    // 0x2329f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2329F4u;
    {
        const bool branch_taken_0x2329f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2329f4) {
            ctx->pc = 0x232A08u;
            return;
        }
    }
    ctx->pc = 0x2329FCu;
    // 0x2329fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2329fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232a00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232a04: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x232a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x232a08u;
}
