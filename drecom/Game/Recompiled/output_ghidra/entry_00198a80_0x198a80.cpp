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

// Function: entry_00198a80
// Address: 0x198a80 - 0x198b30
void entry_00198a80_0x198a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a80_0x198a80");
#endif

    switch (ctx->pc) {
        case 0x198a90u: goto label_198a90;
        case 0x198ab0u: goto label_198ab0;
        case 0x198abcu: goto label_198abc;
        default: break;
    }

    ctx->pc = 0x198a80u;

    // 0x198a80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x198a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198a88: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x198A88u;
    SET_GPR_U32(ctx, 31, 0x198A90u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x198A88u, 0x198A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A90u;
label_198a90:
    // 0x198a90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a9c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x198a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x198aa0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x198aa4: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x198aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198aa8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x198AA8u;
    SET_GPR_U32(ctx, 31, 0x198AB0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x198AB0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x198AB0u) { return; }
    ctx->pc = 0x198AB0u;
label_198ab0:
    // 0x198ab0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ab4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x198AB4u;
    SET_GPR_U32(ctx, 31, 0x198ABCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x198AB4u, 0x198ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ABCu;
label_198abc:
    // 0x198abc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ac0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x198ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198ac4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ac8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x198ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x198ad0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x198ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x198ad4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ad8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x198ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198adc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ae0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x198ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ae4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x198ae8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x198ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x198aec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198af0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x198af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198af4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x198af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x198af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198afc: 0x0  nop
    ctx->pc = 0x198afcu;
    // NOP
    // 0x198b00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198b04: 0x0  nop
    ctx->pc = 0x198b04u;
    // NOP
    // 0x198b08: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x198B08u;
    {
        const bool branch_taken_0x198b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198b08) {
            ctx->pc = 0x198B30u;
            return;
        }
    }
    ctx->pc = 0x198B10u;
    // 0x198b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b14: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x198b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198b18: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x198b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x198b1c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b24: 0x0  nop
    ctx->pc = 0x198b24u;
    // NOP
    // 0x198b28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198b2c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x198b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x198b30u;
}
