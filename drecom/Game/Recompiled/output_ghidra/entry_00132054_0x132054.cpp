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

// Function: entry_00132054
// Address: 0x132054 - 0x1320f4
void entry_00132054_0x132054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132054_0x132054");
#endif

    switch (ctx->pc) {
        case 0x13206cu: goto label_13206c;
        case 0x1320ecu: goto label_1320ec;
        default: break;
    }

    ctx->pc = 0x132054u;

    // 0x132054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132058: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13205c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x13205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x132060: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x132060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x132064: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x132064u;
    SET_GPR_U32(ctx, 31, 0x13206Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x132064u, 0x13206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13206Cu;
label_13206c:
    // 0x13206c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x132070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132074: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132078: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13207c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132084: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132088: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13208c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x13208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132090: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132094: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x132094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132098: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13209c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x13209cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1320a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1320a4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1320a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1320a8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1320a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1320ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1320acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1320b0: 0x0  nop
    ctx->pc = 0x1320b0u;
    // NOP
    // 0x1320b4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1320B4u;
    {
        const bool branch_taken_0x1320b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1320b4) {
            ctx->pc = 0x1320F4u;
            return;
        }
    }
    ctx->pc = 0x1320BCu;
    // 0x1320bc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1320bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1320c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1320c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1320c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1320c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1320c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1320cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1320d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1320d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1320d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1320d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1320d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1320d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1320dc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1320dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1320e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1320e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1320e4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1320E4u;
    SET_GPR_U32(ctx, 31, 0x1320ECu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1320E4u, 0x1320ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1320ECu;
label_1320ec:
    // 0x1320ec: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1320ECu;
    {
        const bool branch_taken_0x1320ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1320ec) {
            ctx->pc = 0x132470u;
            return;
        }
    }
    ctx->pc = 0x1320F4u;
}
