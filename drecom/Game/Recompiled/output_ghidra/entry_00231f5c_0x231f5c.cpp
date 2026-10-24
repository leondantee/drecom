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

// Function: entry_00231f5c
// Address: 0x231f5c - 0x231fd4
void entry_00231f5c_0x231f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231f5c_0x231f5c");
#endif

    switch (ctx->pc) {
        case 0x231f80u: goto label_231f80;
        default: break;
    }

    ctx->pc = 0x231f5cu;

    // 0x231f5c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231f60: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x231f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231f64: 0x3c023f1c  lui         $v0, 0x3F1C
    ctx->pc = 0x231f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16156 << 16));
    // 0x231f68: 0x344561aa  ori         $a1, $v0, 0x61AA
    ctx->pc = 0x231f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25002);
    // 0x231f6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x231f6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231f70: 0x0  nop
    ctx->pc = 0x231f70u;
    // NOP
    // 0x231f74: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x231f74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231f78: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x231F78u;
    SET_GPR_U32(ctx, 31, 0x231F80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231F78u, 0x231F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F80u;
label_231f80:
    // 0x231f80: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231f84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x231f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x231f88: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231f8c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x231f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231f90: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x231f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x231f94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231f94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231f98: 0x0  nop
    ctx->pc = 0x231f98u;
    // NOP
    // 0x231f9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231fa0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x231fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x231fa4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231fa8: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x231fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231fac: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x231facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231fb0: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x231fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231fb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x231fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231fb8: 0x0  nop
    ctx->pc = 0x231fb8u;
    // NOP
    // 0x231fbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x231FBCu;
    {
        const bool branch_taken_0x231fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231fbc) {
            ctx->pc = 0x231FD4u;
            return;
        }
    }
    ctx->pc = 0x231FC4u;
    // 0x231fc4: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231fc8: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x231fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231fcc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231fd0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x231fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x231fd4u;
}
