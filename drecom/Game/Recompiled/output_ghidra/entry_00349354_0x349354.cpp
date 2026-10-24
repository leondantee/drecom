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

// Function: entry_00349354
// Address: 0x349354 - 0x3493e4
void entry_00349354_0x349354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349354_0x349354");
#endif

    switch (ctx->pc) {
        case 0x3493b4u: goto label_3493b4;
        case 0x3493dcu: goto label_3493dc;
        default: break;
    }

    ctx->pc = 0x349354u;

    // 0x349354: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349358: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34935c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349360: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349364: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34936c: 0x0  nop
    ctx->pc = 0x34936cu;
    // NOP
    // 0x349370: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x349370u;
    {
        const bool branch_taken_0x349370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349370) {
            ctx->pc = 0x3494A8u;
            return;
        }
    }
    ctx->pc = 0x349378u;
    // 0x349378: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x349378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34937c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349380: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x349384: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349388: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x349388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x34938c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x34938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x349390: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x349390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x349394: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x349394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x349398: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34939c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493a0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3493a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3493a4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3493a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3493a8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x3493a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x3493ac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3493ACu;
    SET_GPR_U32(ctx, 31, 0x3493B4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3493ACu, 0x3493B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493B4u;
label_3493b4:
    // 0x3493b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3493B4u;
    {
        const bool branch_taken_0x3493b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3493b4) {
            ctx->pc = 0x3493E4u;
            return;
        }
    }
    ctx->pc = 0x3493BCu;
    // 0x3493bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3493bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3493c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3493c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3493c8: 0x24060406  addiu       $a2, $zero, 0x406
    ctx->pc = 0x3493c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    // 0x3493cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3493ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3493d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3493d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3493d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3493D4u;
    SET_GPR_U32(ctx, 31, 0x3493DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3493D4u, 0x3493DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493DCu;
label_3493dc:
    // 0x3493dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3493DCu;
    {
        const bool branch_taken_0x3493dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3493dc) {
            ctx->pc = 0x349410u;
            return;
        }
    }
    ctx->pc = 0x3493E4u;
}
