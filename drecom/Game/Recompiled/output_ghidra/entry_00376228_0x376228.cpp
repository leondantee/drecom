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

// Function: entry_00376228
// Address: 0x376228 - 0x3762b8
void entry_00376228_0x376228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376228_0x376228");
#endif

    switch (ctx->pc) {
        case 0x37628cu: goto label_37628c;
        case 0x376294u: goto label_376294;
        default: break;
    }

    ctx->pc = 0x376228u;

    // 0x376228: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37622c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x37622cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x376230: 0x146000ae  bnez        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x376230u;
    {
        const bool branch_taken_0x376230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x376230) {
            ctx->pc = 0x3764ECu;
            return;
        }
    }
    ctx->pc = 0x376238u;
    // 0x376238: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x376238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37623c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x37623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376240: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x376240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x376244: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x376244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x376248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x376248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37624c: 0x0  nop
    ctx->pc = 0x37624cu;
    // NOP
    // 0x376250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x376250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376254: 0x0  nop
    ctx->pc = 0x376254u;
    // NOP
    // 0x376258: 0x450000a4  bc1f        . + 4 + (0xA4 << 2)
    ctx->pc = 0x376258u;
    {
        const bool branch_taken_0x376258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x376258) {
            ctx->pc = 0x3764ECu;
            return;
        }
    }
    ctx->pc = 0x376260u;
    // 0x376260: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x376260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376264: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376268: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37626c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376270: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376274: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376278: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x376278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x37627c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37627cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376280: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376284: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376284u;
    SET_GPR_U32(ctx, 31, 0x37628Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376284u, 0x37628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37628Cu;
label_37628c:
    // 0x37628c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37628Cu;
    SET_GPR_U32(ctx, 31, 0x376294u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37628Cu, 0x376294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376294u;
label_376294:
    // 0x376294: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x376294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376298: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x376298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x37629c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x37629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3762a0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3762a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3762a4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3762a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3762a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3762a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3762ac: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3762acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x3762b0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x3762B0u;
    {
        const bool branch_taken_0x3762b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3762b0) {
            ctx->pc = 0x3764ECu;
            return;
        }
    }
    ctx->pc = 0x3762B8u;
}
