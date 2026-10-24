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

// Function: entry_003067a0
// Address: 0x3067a0 - 0x306854
void entry_003067a0_0x3067a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003067a0_0x3067a0");
#endif

    switch (ctx->pc) {
        case 0x30681cu: goto label_30681c;
        default: break;
    }

    ctx->pc = 0x3067a0u;

    // 0x3067a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3067a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3067a4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3067a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3067a8: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x3067a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x3067ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3067acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3067b0: 0x0  nop
    ctx->pc = 0x3067b0u;
    // NOP
    // 0x3067b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3067b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3067b8: 0x0  nop
    ctx->pc = 0x3067b8u;
    // NOP
    // 0x3067bc: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x3067BCu;
    {
        const bool branch_taken_0x3067bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3067bc) {
            ctx->pc = 0x306854u;
            return;
        }
    }
    ctx->pc = 0x3067C4u;
    // 0x3067c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3067c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3067c8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3067c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3067cc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x3067ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x3067d0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3067d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3067d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3067d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3067d8: 0x0  nop
    ctx->pc = 0x3067d8u;
    // NOP
    // 0x3067dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3067dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3067e0: 0x0  nop
    ctx->pc = 0x3067e0u;
    // NOP
    // 0x3067e4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3067E4u;
    {
        const bool branch_taken_0x3067e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3067e4) {
            ctx->pc = 0x306854u;
            return;
        }
    }
    ctx->pc = 0x3067ECu;
    // 0x3067ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3067ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3067f0: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3067f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3067f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3067f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3067f8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x3067f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x3067fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3067fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x306800: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x306804: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x306804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x306808: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x306808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30680c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x306810: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x306810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x306814: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x306814u;
    SET_GPR_U32(ctx, 31, 0x30681Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x306814u, 0x30681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30681Cu;
label_30681c:
    // 0x30681c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30681Cu;
    {
        const bool branch_taken_0x30681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30681c) {
            ctx->pc = 0x306854u;
            return;
        }
    }
    ctx->pc = 0x306824u;
    // 0x306824: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306828: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30682c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30682cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306830: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x306830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x306834: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306838: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30683c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306840: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306844: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306848: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30684c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306850: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x306854u;
}
