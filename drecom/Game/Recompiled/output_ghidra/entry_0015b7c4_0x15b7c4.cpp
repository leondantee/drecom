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

// Function: entry_0015b7c4
// Address: 0x15b7c4 - 0x15b864
void entry_0015b7c4_0x15b7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b7c4_0x15b7c4");
#endif

    switch (ctx->pc) {
        case 0x15b7fcu: goto label_15b7fc;
        case 0x15b820u: goto label_15b820;
        default: break;
    }

    ctx->pc = 0x15b7c4u;

    // 0x15b7c4: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
    ctx->pc = 0x15B7C4u;
    {
        const bool branch_taken_0x15b7c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b7c4) {
            ctx->pc = 0x15B8F0u;
            return;
        }
    }
    ctx->pc = 0x15B7CCu;
    // 0x15b7cc: 0x924200ac  lbu         $v0, 0xAC($s2)
    ctx->pc = 0x15b7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x15b7d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b7d4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x15b7d8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x15b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x15b7dc: 0x924200ad  lbu         $v0, 0xAD($s2)
    ctx->pc = 0x15b7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 173)));
    // 0x15b7e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b7e4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x15b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x15b7e8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x15b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x15b7ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b7f0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15b7f4: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x15B7F4u;
    SET_GPR_U32(ctx, 31, 0x15B7FCu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x15B7FCu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15B7FCu) { return; }
    ctx->pc = 0x15B7FCu;
label_15b7fc:
    // 0x15b7fc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x15b7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b800: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x15b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b804: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15b804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b808: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x15b808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b80c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x15b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15b810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b814: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15b814u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15b818: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15B818u;
    SET_GPR_U32(ctx, 31, 0x15B820u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15B818u, 0x15B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B820u;
label_15b820:
    // 0x15b820: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x15b820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x15b824: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x15b824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b828: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x15b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x15b82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b830: 0x0  nop
    ctx->pc = 0x15b830u;
    // NOP
    // 0x15b834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15b834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b838: 0x0  nop
    ctx->pc = 0x15b838u;
    // NOP
    // 0x15b83c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x15B83Cu;
    {
        const bool branch_taken_0x15b83c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b83c) {
            ctx->pc = 0x15B8E4u;
            return;
        }
    }
    ctx->pc = 0x15B844u;
    // 0x15b844: 0x92021920  lbu         $v0, 0x1920($s0)
    ctx->pc = 0x15b844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6432)));
    // 0x15b848: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B848u;
    {
        const bool branch_taken_0x15b848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b848) {
            ctx->pc = 0x15B864u;
            return;
        }
    }
    ctx->pc = 0x15B850u;
    // 0x15b850: 0x92021920  lbu         $v0, 0x1920($s0)
    ctx->pc = 0x15b850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6432)));
    // 0x15b854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15b858: 0xa2021920  sb          $v0, 0x1920($s0)
    ctx->pc = 0x15b858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b85c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x15B85Cu;
    {
        const bool branch_taken_0x15b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b85c) {
            ctx->pc = 0x15BA44u;
            return;
        }
    }
    ctx->pc = 0x15B864u;
}
