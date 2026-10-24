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

// Function: entry_0017c238
// Address: 0x17c238 - 0x17c2f0
void entry_0017c238_0x17c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c238_0x17c238");
#endif

    switch (ctx->pc) {
        case 0x17c264u: goto label_17c264;
        case 0x17c2b8u: goto label_17c2b8;
        case 0x17c2c4u: goto label_17c2c4;
        default: break;
    }

    ctx->pc = 0x17c238u;

    // 0x17c238: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x17c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c23c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x17c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x17c240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c244: 0x0  nop
    ctx->pc = 0x17c244u;
    // NOP
    // 0x17c248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c24c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x17c24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x17c250: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c254: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17c254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c258: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c25c: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C25Cu;
    SET_GPR_U32(ctx, 31, 0x17C264u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C264u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C264u) { return; }
    ctx->pc = 0x17C264u;
label_17c264:
    // 0x17c264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c26c: 0x0  nop
    ctx->pc = 0x17c26cu;
    // NOP
    // 0x17c270: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c274: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c278: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c278u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c27c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c280: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c280u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c28c: 0x0  nop
    ctx->pc = 0x17c28cu;
    // NOP
    // 0x17c290: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17c290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17c294: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c298: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c29c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17c2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c2a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17c2a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c2ac: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x17c2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c2b0: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C2B0u;
    SET_GPR_U32(ctx, 31, 0x17C2B8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C2B8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C2B8u) { return; }
    ctx->pc = 0x17C2B8u;
label_17c2b8:
    // 0x17c2b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17c2bc: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C2BCu;
    SET_GPR_U32(ctx, 31, 0x17C2C4u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C2BCu, 0x17C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2C4u;
label_17c2c4:
    // 0x17c2c4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c2c8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x17c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c2cc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x17c2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c2d4: 0x0  nop
    ctx->pc = 0x17c2d4u;
    // NOP
    // 0x17c2d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c2d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c2dc: 0x0  nop
    ctx->pc = 0x17c2dcu;
    // NOP
    // 0x17c2e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C2E0u;
    {
        const bool branch_taken_0x17c2e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c2e0) {
            ctx->pc = 0x17C2F0u;
            return;
        }
    }
    ctx->pc = 0x17C2E8u;
    // 0x17c2e8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c2ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17c2ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x17c2f0u;
}
