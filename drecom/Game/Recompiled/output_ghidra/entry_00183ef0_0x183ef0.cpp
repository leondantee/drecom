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

// Function: entry_00183ef0
// Address: 0x183ef0 - 0x183fe0
void entry_00183ef0_0x183ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183ef0_0x183ef0");
#endif

    switch (ctx->pc) {
        case 0x183f20u: goto label_183f20;
        case 0x183f44u: goto label_183f44;
        case 0x183f58u: goto label_183f58;
        case 0x183f74u: goto label_183f74;
        case 0x183facu: goto label_183fac;
        case 0x183fc8u: goto label_183fc8;
        default: break;
    }

    ctx->pc = 0x183ef0u;

    // 0x183ef0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183ef4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183ef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183efc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x183efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183f00: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183f00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183f04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x183f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183f08: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x183f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183f0c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183f10: 0x24450260  addiu       $a1, $v0, 0x260
    ctx->pc = 0x183f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x183f14: 0x24660150  addiu       $a2, $v1, 0x150
    ctx->pc = 0x183f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x183f18: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x183F18u;
    SET_GPR_U32(ctx, 31, 0x183F20u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x183F18u, 0x183F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F20u;
label_183f20:
    // 0x183f20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183f24: 0xc4200244  lwc1        $f0, 0x244($at)
    ctx->pc = 0x183f24u;
    { uint32_t bits = FAST_READ32(0x480244u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183f28: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x183f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x183f2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183f30: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183f34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183f38: 0x24460230  addiu       $a2, $v0, 0x230
    ctx->pc = 0x183f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183f3c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x183F3Cu;
    SET_GPR_U32(ctx, 31, 0x183F44u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x183F3Cu, 0x183F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F44u;
label_183f44:
    // 0x183f44: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x183f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183f48: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183f4c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183f50: 0xc040c86  jal         func_103218
    ctx->pc = 0x183F50u;
    SET_GPR_U32(ctx, 31, 0x183F58u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x183F58u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183F58u) { return; }
    ctx->pc = 0x183F58u;
label_183f58:
    // 0x183f58: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x183f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183f5c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x183f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183f60: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x183f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183f64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x183f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x183f68: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x183f68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x183f6c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x183F6Cu;
    SET_GPR_U32(ctx, 31, 0x183F74u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x183F6Cu, 0x183F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F74u;
label_183f74:
    // 0x183f74: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x183f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x183f78: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x183f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183f7c: 0x3c02440f  lui         $v0, 0x440F
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17423 << 16));
    // 0x183f80: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x183f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x183f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183f88: 0x0  nop
    ctx->pc = 0x183f88u;
    // NOP
    // 0x183f8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183f90: 0x0  nop
    ctx->pc = 0x183f90u;
    // NOP
    // 0x183f94: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x183F94u;
    {
        const bool branch_taken_0x183f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183f94) {
            ctx->pc = 0x183FE0u;
            return;
        }
    }
    ctx->pc = 0x183F9Cu;
    // 0x183f9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fa0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fa4: 0xc040c24  jal         func_103090
    ctx->pc = 0x183FA4u;
    SET_GPR_U32(ctx, 31, 0x183FACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x183FACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183FACu) { return; }
    ctx->pc = 0x183FACu;
label_183fac:
    // 0x183fac: 0x3c02440f  lui         $v0, 0x440F
    ctx->pc = 0x183facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17423 << 16));
    // 0x183fb0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x183fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x183fb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x183fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183fb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fbc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fc0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x183FC0u;
    SET_GPR_U32(ctx, 31, 0x183FC8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x183FC8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183FC8u) { return; }
    ctx->pc = 0x183FC8u;
label_183fc8:
    // 0x183fc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x183fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183fcc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183fd0: 0x24450230  addiu       $a1, $v0, 0x230
    ctx->pc = 0x183fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183fd4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fd8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x183FD8u;
    SET_GPR_U32(ctx, 31, 0x183FE0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x183FD8u, 0x183FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FE0u;
}
