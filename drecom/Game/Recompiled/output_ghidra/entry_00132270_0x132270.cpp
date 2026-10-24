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

// Function: entry_00132270
// Address: 0x132270 - 0x132300
void entry_00132270_0x132270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132270_0x132270");
#endif

    switch (ctx->pc) {
        case 0x132288u: goto label_132288;
        default: break;
    }

    ctx->pc = 0x132270u;

    // 0x132270: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132278: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x132278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x13227c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x13227cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x132280: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x132280u;
    SET_GPR_U32(ctx, 31, 0x132288u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x132280u, 0x132288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132288u;
label_132288:
    // 0x132288: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x132288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x13228c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132290: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132294: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132298: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x132298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13229c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13229cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1322a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1322a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1322a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1322a8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1322a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1322ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1322b0: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1322b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1322b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1322b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1322b8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1322b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1322bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1322c0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1322c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1322c4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1322c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1322c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1322c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1322cc: 0x0  nop
    ctx->pc = 0x1322ccu;
    // NOP
    // 0x1322d0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1322D0u;
    {
        const bool branch_taken_0x1322d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1322d0) {
            ctx->pc = 0x132300u;
            return;
        }
    }
    ctx->pc = 0x1322D8u;
    // 0x1322d8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1322d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1322dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1322e0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1322e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1322e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1322e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1322e8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1322e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1322ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1322ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1322f0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1322f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1322f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1322f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1322f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1322f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1322fc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1322fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x132300u;
}
