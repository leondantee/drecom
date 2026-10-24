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

// Function: entry_00302884
// Address: 0x302884 - 0x302910
void entry_00302884_0x302884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302884_0x302884");
#endif

    switch (ctx->pc) {
        case 0x3028d8u: goto label_3028d8;
        default: break;
    }

    ctx->pc = 0x302884u;

    // 0x302884: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302888: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30288c: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x30288cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x302890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302894: 0x0  nop
    ctx->pc = 0x302894u;
    // NOP
    // 0x302898: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30289c: 0x0  nop
    ctx->pc = 0x30289cu;
    // NOP
    // 0x3028a0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3028A0u;
    {
        const bool branch_taken_0x3028a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3028a0) {
            ctx->pc = 0x302910u;
            return;
        }
    }
    ctx->pc = 0x3028A8u;
    // 0x3028a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3028a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028ac: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3028acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3028b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3028b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028b4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x3028b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x3028b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3028b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3028bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3028bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3028c0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x3028c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x3028c4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3028c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3028c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3028c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3028cc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3028ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3028d0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3028D0u;
    SET_GPR_U32(ctx, 31, 0x3028D8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3028D0u, 0x3028D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3028D8u;
label_3028d8:
    // 0x3028d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3028D8u;
    {
        const bool branch_taken_0x3028d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3028d8) {
            ctx->pc = 0x302910u;
            return;
        }
    }
    ctx->pc = 0x3028E0u;
    // 0x3028e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3028e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3028e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3028e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3028e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3028ec: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x3028ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3028f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3028f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3028f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3028f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3028f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3028fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3028fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302900: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302904: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302908: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30290c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30290cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x302910u;
}
