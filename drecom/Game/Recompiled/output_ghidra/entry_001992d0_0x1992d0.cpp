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

// Function: entry_001992d0
// Address: 0x1992d0 - 0x199380
void entry_001992d0_0x1992d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001992d0_0x1992d0");
#endif

    switch (ctx->pc) {
        case 0x1992fcu: goto label_1992fc;
        case 0x199310u: goto label_199310;
        case 0x199348u: goto label_199348;
        default: break;
    }

    ctx->pc = 0x1992d0u;

    // 0x1992d0: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x1992d4: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1992d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x1992d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1992d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1992dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1992e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1992e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1992e4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1992e8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1992e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1992ec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1992f0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1992f4: 0xc05c848  jal         func_172120
    ctx->pc = 0x1992F4u;
    SET_GPR_U32(ctx, 31, 0x1992FCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1992F4u, 0x1992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992FCu;
label_1992fc:
    // 0x1992fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1992fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199300: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199304: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199304u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199308: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x199308u;
    SET_GPR_U32(ctx, 31, 0x199310u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199308u, 0x199310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199310u;
label_199310:
    // 0x199310: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199314: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x199318: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19931c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x19931cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x199320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199324: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x199324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x199328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19932c: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x199330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199334: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x199334u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x199338: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19933c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19933cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x199340: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x199340u;
    SET_GPR_U32(ctx, 31, 0x199348u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x199340u, 0x199348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199348u;
label_199348:
    // 0x199348: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19934c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x19934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199350: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x199354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199358: 0x0  nop
    ctx->pc = 0x199358u;
    // NOP
    // 0x19935c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19935cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199360: 0x0  nop
    ctx->pc = 0x199360u;
    // NOP
    // 0x199364: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x199364u;
    {
        const bool branch_taken_0x199364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199364) {
            ctx->pc = 0x199380u;
            return;
        }
    }
    ctx->pc = 0x19936Cu;
    // 0x19936c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19936cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199370: 0x0  nop
    ctx->pc = 0x199370u;
    // NOP
    // 0x199374: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x199374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x199378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x199378u;
    {
        const bool branch_taken_0x199378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199378) {
            ctx->pc = 0x199390u;
            return;
        }
    }
    ctx->pc = 0x199380u;
}
