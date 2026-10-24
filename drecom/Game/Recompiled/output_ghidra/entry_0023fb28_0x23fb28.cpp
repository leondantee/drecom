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

// Function: entry_0023fb28
// Address: 0x23fb28 - 0x23fbbc
void entry_0023fb28_0x23fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fb28_0x23fb28");
#endif

    ctx->pc = 0x23fb28u;

    // 0x23fb28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fb2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fb30: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fb34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fb38: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x23fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fb3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23fb3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23fb40: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x23fb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x23fb44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fb48: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x23fb48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x23fb4c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23fb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23fb50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23fb50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23fb54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23fb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23fb58: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x23FB58u;
    {
        const bool branch_taken_0x23fb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fb58) {
            ctx->pc = 0x23FC30u;
            return;
        }
    }
    ctx->pc = 0x23FB60u;
    // 0x23fb60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fb64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fb68: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x23fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fb6c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x23fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x23fb70: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x23fb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x23fb74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fb74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fb78: 0x0  nop
    ctx->pc = 0x23fb78u;
    // NOP
    // 0x23fb7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23fb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23fb80: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x23fb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x23fb84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fb88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fb8c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fb90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x23fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x23fb94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fb94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fb98: 0x0  nop
    ctx->pc = 0x23fb98u;
    // NOP
    // 0x23fb9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23fb9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23fba0: 0x0  nop
    ctx->pc = 0x23fba0u;
    // NOP
    // 0x23fba4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23FBA4u;
    {
        const bool branch_taken_0x23fba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fba4) {
            ctx->pc = 0x23FBBCu;
            return;
        }
    }
    ctx->pc = 0x23FBACu;
    // 0x23fbac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fbb0: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x23fbb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x23fbb4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x23fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x23fbb8: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x23fbb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23fbbcu;
}
