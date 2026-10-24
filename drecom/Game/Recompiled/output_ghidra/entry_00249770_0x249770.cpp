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

// Function: entry_00249770
// Address: 0x249770 - 0x249808
void entry_00249770_0x249770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249770_0x249770");
#endif

    switch (ctx->pc) {
        case 0x249788u: goto label_249788;
        case 0x2497b4u: goto label_2497b4;
        default: break;
    }

    ctx->pc = 0x249770u;

    // 0x249770: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249774: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x249774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249778: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24977c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24977cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249780: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x249780u;
    SET_GPR_U32(ctx, 31, 0x249788u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249780u, 0x249788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249788u;
label_249788:
    // 0x249788: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24978c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24978cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x249790: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249794: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249798: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x249798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x24979c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2497a0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2497a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2497a4: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2497a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2497a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2497a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2497ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2497ACu;
    SET_GPR_U32(ctx, 31, 0x2497B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2497ACu, 0x2497B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497B4u;
label_2497b4:
    // 0x2497b4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2497b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2497b8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2497b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2497bc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2497bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2497c0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2497c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2497c4: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2497c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2497c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2497c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2497cc: 0x0  nop
    ctx->pc = 0x2497ccu;
    // NOP
    // 0x2497d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2497d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2497d4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2497d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2497d8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2497d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2497dc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2497dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2497e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2497e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2497e4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2497e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2497e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2497e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2497ec: 0x0  nop
    ctx->pc = 0x2497ecu;
    // NOP
    // 0x2497f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2497F0u;
    {
        const bool branch_taken_0x2497f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2497f0) {
            ctx->pc = 0x249808u;
            return;
        }
    }
    ctx->pc = 0x2497F8u;
    // 0x2497f8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2497f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2497fc: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2497fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249800: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249804: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x249804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x249808u;
}
