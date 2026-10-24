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

// Function: entry_0013946c
// Address: 0x13946c - 0x139528
void entry_0013946c_0x13946c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013946c_0x13946c");
#endif

    switch (ctx->pc) {
        case 0x139480u: goto label_139480;
        case 0x139518u: goto label_139518;
        default: break;
    }

    ctx->pc = 0x13946cu;

    // 0x13946c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139470: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x139470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x139474: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x139474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x139478: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x139478u;
    SET_GPR_U32(ctx, 31, 0x139480u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x139478u, 0x139480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139480u;
label_139480:
    // 0x139480: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x139480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x139484: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139488: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x139488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13948c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139490: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x139490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139494: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x139494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x139498: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x139498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13949c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394a0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1394a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1394a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394a8: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1394a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1394ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1394acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1394b0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1394b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1394b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394b8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1394b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1394bc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1394bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1394c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1394c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1394c4: 0x0  nop
    ctx->pc = 0x1394c4u;
    // NOP
    // 0x1394c8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1394C8u;
    {
        const bool branch_taken_0x1394c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1394c8) {
            ctx->pc = 0x139528u;
            return;
        }
    }
    ctx->pc = 0x1394D0u;
    // 0x1394d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1394d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1394d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394d8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1394d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1394dc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1394dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1394e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1394e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1394e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1394e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1394ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1394f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1394f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1394f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1394f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1394f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1394fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139500: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x139500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x139504: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x139504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x139508: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13950c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13950cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139510: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139510u;
    SET_GPR_U32(ctx, 31, 0x139518u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139510u, 0x139518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139518u;
label_139518:
    // 0x139518: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x139518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13951c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x139520: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x139520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x139524: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x139524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x139528u;
}
