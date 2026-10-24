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

// Function: entry_0023e908
// Address: 0x23e908 - 0x23e990
void entry_0023e908_0x23e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e908_0x23e908");
#endif

    switch (ctx->pc) {
        case 0x23e958u: goto label_23e958;
        default: break;
    }

    ctx->pc = 0x23e908u;

    // 0x23e908: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x23e908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e90c: 0xc4e11288  lwc1        $f1, 0x1288($a3)
    ctx->pc = 0x23e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e910: 0x3c0844fa  lui         $t0, 0x44FA
    ctx->pc = 0x23e910u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17658 << 16));
    // 0x23e914: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x23e914u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e918: 0x0  nop
    ctx->pc = 0x23e918u;
    // NOP
    // 0x23e91c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e91cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e920: 0x0  nop
    ctx->pc = 0x23e920u;
    // NOP
    // 0x23e924: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x23E924u;
    {
        const bool branch_taken_0x23e924 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e924) {
            ctx->pc = 0x23E990u;
            return;
        }
    }
    ctx->pc = 0x23E92Cu;
    // 0x23e92c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x23e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x23e930: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23e934: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23e934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e938: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e93c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e940: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23e940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23e944: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23e944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e948: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e94c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e950: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E950u;
    SET_GPR_U32(ctx, 31, 0x23E958u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E950u, 0x23E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E958u;
label_23e958:
    // 0x23e958: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E958u;
    {
        const bool branch_taken_0x23e958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e958) {
            ctx->pc = 0x23E990u;
            return;
        }
    }
    ctx->pc = 0x23E960u;
    // 0x23e960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e964: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e968: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e96c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23e970: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e974: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23e974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e978: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e97c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23e97cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e980: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e984: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23e984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e988: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e98c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23e990u;
}
