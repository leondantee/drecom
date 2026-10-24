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

// Function: entry_001996f4
// Address: 0x1996f4 - 0x1997b4
void entry_001996f4_0x1996f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001996f4_0x1996f4");
#endif

    switch (ctx->pc) {
        case 0x199720u: goto label_199720;
        case 0x199734u: goto label_199734;
        case 0x199748u: goto label_199748;
        default: break;
    }

    ctx->pc = 0x1996f4u;

    // 0x1996f4: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x1996f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x1996f8: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1996f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x1996fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1996fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x199700: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199704: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199708: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19970c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x19970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x199710: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x199710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199714: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x199714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x199718: 0xc05c848  jal         func_172120
    ctx->pc = 0x199718u;
    SET_GPR_U32(ctx, 31, 0x199720u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199718u, 0x199720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199720u;
label_199720:
    // 0x199720: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199724: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199728: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199728u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19972c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x19972Cu;
    SET_GPR_U32(ctx, 31, 0x199734u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x19972Cu, 0x199734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199734u;
label_199734:
    // 0x199734: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199738: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x19973c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199740: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x199740u;
    SET_GPR_U32(ctx, 31, 0x199748u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x199740u, 0x199748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199748u;
label_199748:
    // 0x199748: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19974c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19974cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x199750: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x199750u;
    {
        const bool branch_taken_0x199750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199750) {
            ctx->pc = 0x199BD0u;
            return;
        }
    }
    ctx->pc = 0x199758u;
    // 0x199758: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19975c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x19975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199760: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x199760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x199764: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x199764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199768: 0x0  nop
    ctx->pc = 0x199768u;
    // NOP
    // 0x19976c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19976cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199770: 0x0  nop
    ctx->pc = 0x199770u;
    // NOP
    // 0x199774: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x199774u;
    {
        const bool branch_taken_0x199774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199774) {
            ctx->pc = 0x1997B4u;
            return;
        }
    }
    ctx->pc = 0x19977Cu;
    // 0x19977c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199780: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199784: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x199784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x199788: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x199788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19978c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199790: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x199790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x199794: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199798: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x199798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19979c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1997a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1997a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1997a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1997a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1997a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1997a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1997ac: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x1997ACu;
    {
        const bool branch_taken_0x1997ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1997ac) {
            ctx->pc = 0x199BD0u;
            return;
        }
    }
    ctx->pc = 0x1997B4u;
}
