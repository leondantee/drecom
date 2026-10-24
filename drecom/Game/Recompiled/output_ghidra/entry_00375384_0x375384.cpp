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

// Function: entry_00375384
// Address: 0x375384 - 0x375414
void entry_00375384_0x375384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375384_0x375384");
#endif

    switch (ctx->pc) {
        case 0x3753e8u: goto label_3753e8;
        case 0x3753f0u: goto label_3753f0;
        default: break;
    }

    ctx->pc = 0x375384u;

    // 0x375384: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375388: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37538c: 0x1460009a  bnez        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x37538Cu;
    {
        const bool branch_taken_0x37538c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37538c) {
            ctx->pc = 0x3755F8u;
            return;
        }
    }
    ctx->pc = 0x375394u;
    // 0x375394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375398: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x375398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37539c: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x37539cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x3753a0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3753a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3753a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3753a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3753a8: 0x0  nop
    ctx->pc = 0x3753a8u;
    // NOP
    // 0x3753ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3753acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3753b0: 0x0  nop
    ctx->pc = 0x3753b0u;
    // NOP
    // 0x3753b4: 0x45000090  bc1f        . + 4 + (0x90 << 2)
    ctx->pc = 0x3753B4u;
    {
        const bool branch_taken_0x3753b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3753b4) {
            ctx->pc = 0x3755F8u;
            return;
        }
    }
    ctx->pc = 0x3753BCu;
    // 0x3753bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3753bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3753c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3753c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3753c4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3753c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3753c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3753c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3753cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3753ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3753d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3753d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3753d4: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x3753d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x3753d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3753d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3753dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3753dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3753e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3753E0u;
    SET_GPR_U32(ctx, 31, 0x3753E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3753E0u, 0x3753E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3753E8u;
label_3753e8:
    // 0x3753e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3753E8u;
    SET_GPR_U32(ctx, 31, 0x3753F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3753E8u, 0x3753F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3753F0u;
label_3753f0:
    // 0x3753f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3753f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3753f4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3753f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3753f8: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x3753f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3753fc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3753fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x375400: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x375400u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x375404: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375408: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x375408u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x37540c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x37540Cu;
    {
        const bool branch_taken_0x37540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37540c) {
            ctx->pc = 0x3755F8u;
            return;
        }
    }
    ctx->pc = 0x375414u;
}
