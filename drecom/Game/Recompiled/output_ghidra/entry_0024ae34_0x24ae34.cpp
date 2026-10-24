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

// Function: entry_0024ae34
// Address: 0x24ae34 - 0x24af10
void entry_0024ae34_0x24ae34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024ae34_0x24ae34");
#endif

    switch (ctx->pc) {
        case 0x24ae40u: goto label_24ae40;
        case 0x24ae80u: goto label_24ae80;
        case 0x24ae98u: goto label_24ae98;
        case 0x24aeb8u: goto label_24aeb8;
        default: break;
    }

    ctx->pc = 0x24ae34u;

    // 0x24ae34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24ae38: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24AE38u;
    SET_GPR_U32(ctx, 31, 0x24AE40u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24AE40u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AE40u) { return; }
    ctx->pc = 0x24AE40u;
label_24ae40:
    // 0x24ae40: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ae44: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ae48: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x24ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x24ae4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24ae50: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24ae50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x24ae54: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x24ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x24ae58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24ae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24ae5c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x24ae5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24ae60: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24ae64: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x24ae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24ae68: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x24ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24ae6c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x24ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x24ae70: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x24ae70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x24ae74: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x24ae74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x24ae78: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x24AE78u;
    SET_GPR_U32(ctx, 31, 0x24AE80u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x24AE78u, 0x24AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE80u;
label_24ae80:
    // 0x24ae80: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ae84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ae88: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x24ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ae8c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24ae8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ae90: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24AE90u;
    SET_GPR_U32(ctx, 31, 0x24AE98u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24AE90u, 0x24AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE98u;
label_24ae98:
    // 0x24ae98: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ae9c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24aea0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aea4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x24aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aea8: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x24aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aeac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24aeacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24aeb0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24AEB0u;
    SET_GPR_U32(ctx, 31, 0x24AEB8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24AEB0u, 0x24AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEB8u;
label_24aeb8:
    // 0x24aeb8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aebc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x24aec0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aec4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x24aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aec8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x24aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x24aecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aed0: 0x0  nop
    ctx->pc = 0x24aed0u;
    // NOP
    // 0x24aed4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24aed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24aed8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x24aed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x24aedc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aee0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x24aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aee4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x24aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x24aee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aeec: 0x0  nop
    ctx->pc = 0x24aeecu;
    // NOP
    // 0x24aef0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24aef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aef4: 0x0  nop
    ctx->pc = 0x24aef4u;
    // NOP
    // 0x24aef8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24AEF8u;
    {
        const bool branch_taken_0x24aef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aef8) {
            ctx->pc = 0x24AF10u;
            return;
        }
    }
    ctx->pc = 0x24AF00u;
    // 0x24af00: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x24af00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x24af04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24af04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af08: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24af0c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24af0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x24af10u;
}
