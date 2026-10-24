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

// Function: entry_001b6378
// Address: 0x1b6378 - 0x1b6444
void entry_001b6378_0x1b6378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6378_0x1b6378");
#endif

    switch (ctx->pc) {
        case 0x1b6398u: goto label_1b6398;
        case 0x1b63a4u: goto label_1b63a4;
        case 0x1b63c0u: goto label_1b63c0;
        case 0x1b63dcu: goto label_1b63dc;
        default: break;
    }

    ctx->pc = 0x1b6378u;

    // 0x1b6378: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b637c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6380: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6384: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1b6384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1b6388: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b6388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b638c: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1b638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6390: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B6390u;
    SET_GPR_U32(ctx, 31, 0x1B6398u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B6398u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B6398u) { return; }
    ctx->pc = 0x1B6398u;
label_1b6398:
    // 0x1b6398: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b639c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B639Cu;
    SET_GPR_U32(ctx, 31, 0x1B63A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B639Cu, 0x1B63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63A4u;
label_1b63a4:
    // 0x1b63a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b63a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b63a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b63a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b63ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b63b0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b63b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b63b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b63b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b63b8: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B63B8u;
    SET_GPR_U32(ctx, 31, 0x1B63C0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B63B8u, 0x1B63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63C0u;
label_1b63c0:
    // 0x1b63c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b63c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b63c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b63c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b63cc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b63ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1b63d0: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1b63d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1b63d4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B63D4u;
    SET_GPR_U32(ctx, 31, 0x1B63DCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B63D4u, 0x1B63DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63DCu;
label_1b63dc:
    // 0x1b63dc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b63dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b63e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b63e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b63e4: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b63e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b63e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b63ec: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x1b63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b63f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b63f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b63f4: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b63f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1b63f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b63fc: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1b63fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6400: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6404: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b6404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6408: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b640c: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b640cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b6410: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6414: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b6414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6418: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b641c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b641cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6420: 0x0  nop
    ctx->pc = 0x1b6420u;
    // NOP
    // 0x1b6424: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6424u;
    {
        const bool branch_taken_0x1b6424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6424) {
            ctx->pc = 0x1B6444u;
            return;
        }
    }
    ctx->pc = 0x1B642Cu;
    // 0x1b642c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6430: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6434: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b6434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b6438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b643c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6440: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b6440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    ctx->pc = 0x1b6444u;
}
