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

// Function: caseD_1c
// Address: 0x14742c - 0x1474b0
void caseD_1c_0x14742c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x14742c");
#endif

    switch (ctx->pc) {
        case 0x14746cu: goto label_14746c;
        case 0x14749cu: goto label_14749c;
        default: break;
    }

    ctx->pc = 0x14742cu;

    // 0x14742c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x14742cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147430: 0xc4e10124  lwc1        $f1, 0x124($a3)
    ctx->pc = 0x147430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147434: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
    // 0x147438: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x147438u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14743c: 0x0  nop
    ctx->pc = 0x14743cu;
    // NOP
    // 0x147440: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147444: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x147444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
    // 0x147448: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14744c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147450: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x147450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x147454: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x147454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x147458: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x147458u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14745c: 0x0  nop
    ctx->pc = 0x14745cu;
    // NOP
    // 0x147460: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x147460u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x147464: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x147464u;
    SET_GPR_U32(ctx, 31, 0x14746Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x147464u, 0x14746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14746Cu;
label_14746c:
    // 0x14746c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x14746cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147470: 0xe4c000d4  swc1        $f0, 0xD4($a2)
    ctx->pc = 0x147470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 212), bits); }
    // 0x147474: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147478: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14747c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14747cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147480: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x147480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x147484: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x147484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x147488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14748c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x14748cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147490: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147494: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147494u;
    SET_GPR_U32(ctx, 31, 0x14749Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147494u, 0x14749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14749Cu;
label_14749c:
    // 0x14749c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14749cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1474a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1474a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1474a4: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x1474a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1474a8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1474a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1474ac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1474acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1474b0u;
}
