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

// Function: entry_00132978
// Address: 0x132978 - 0x132a08
void entry_00132978_0x132978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132978_0x132978");
#endif

    switch (ctx->pc) {
        case 0x132990u: goto label_132990;
        default: break;
    }

    ctx->pc = 0x132978u;

    // 0x132978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13297c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132980: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x132980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x132984: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x132984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x132988: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x132988u;
    SET_GPR_U32(ctx, 31, 0x132990u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x132988u, 0x132990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132990u;
label_132990:
    // 0x132990: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x132990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x132994: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132998: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13299c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1329a0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1329a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1329a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1329a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1329a8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1329a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1329ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1329acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1329b0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1329b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1329b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1329b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1329b8: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1329b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1329bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1329bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1329c0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1329c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1329c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1329c8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1329c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1329cc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1329ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1329d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1329d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1329d4: 0x0  nop
    ctx->pc = 0x1329d4u;
    // NOP
    // 0x1329d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1329D8u;
    {
        const bool branch_taken_0x1329d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1329d8) {
            ctx->pc = 0x132A08u;
            return;
        }
    }
    ctx->pc = 0x1329E0u;
    // 0x1329e0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1329e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1329e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1329e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1329e8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1329e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1329ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1329ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1329f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1329f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1329f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1329f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1329f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1329f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1329fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1329fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132a00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132a04: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x132a08u;
}
