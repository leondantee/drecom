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

// Function: entry_0029de6c
// Address: 0x29de6c - 0x29df28
void entry_0029de6c_0x29de6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029de6c_0x29de6c");
#endif

    switch (ctx->pc) {
        case 0x29dea8u: goto label_29dea8;
        case 0x29dedcu: goto label_29dedc;
        default: break;
    }

    ctx->pc = 0x29de6cu;

    // 0x29de6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29de70: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29de74: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x29de74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x29de78: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29de78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29de7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29de7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29de80: 0x0  nop
    ctx->pc = 0x29de80u;
    // NOP
    // 0x29de84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29de84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29de88: 0x0  nop
    ctx->pc = 0x29de88u;
    // NOP
    // 0x29de8c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x29DE8Cu;
    {
        const bool branch_taken_0x29de8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29de8c) {
            ctx->pc = 0x29DF28u;
            return;
        }
    }
    ctx->pc = 0x29DE94u;
    // 0x29de94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29de98: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x29de98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x29de9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29dea0: 0xc05cd90  jal         func_173640
    ctx->pc = 0x29DEA0u;
    SET_GPR_U32(ctx, 31, 0x29DEA8u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x29DEA0u, 0x29DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DEA8u;
label_29dea8:
    // 0x29dea8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29DEA8u;
    {
        const bool branch_taken_0x29dea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dea8) {
            ctx->pc = 0x29DF28u;
            return;
        }
    }
    ctx->pc = 0x29DEB0u;
    // 0x29deb0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29deb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29deb8: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x29deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x29debc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x29debcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x29dec0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29dec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29dec4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29dec8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29decc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29deccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29ded0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29ded4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x29DED4u;
    SET_GPR_U32(ctx, 31, 0x29DEDCu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x29DED4u, 0x29DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DEDCu;
label_29dedc:
    // 0x29dedc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29DEDCu;
    {
        const bool branch_taken_0x29dedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dedc) {
            ctx->pc = 0x29DF28u;
            return;
        }
    }
    ctx->pc = 0x29DEE4u;
    // 0x29dee4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29dee8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29deec: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x29deecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x29def0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29DEF0u;
    {
        const bool branch_taken_0x29def0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29def0) {
            ctx->pc = 0x29DF28u;
            return;
        }
    }
    ctx->pc = 0x29DEF8u;
    // 0x29def8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29defc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29df00: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29df00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29df04: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29df08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29df08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29df0c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29df0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29df10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29df10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29df14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29df14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29df18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29df1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29df1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29df20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29df24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29df24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29df28u;
}
