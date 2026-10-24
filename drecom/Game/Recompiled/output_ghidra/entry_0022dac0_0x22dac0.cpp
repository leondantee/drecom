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

// Function: entry_0022dac0
// Address: 0x22dac0 - 0x22db78
void entry_0022dac0_0x22dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022dac0_0x22dac0");
#endif

    switch (ctx->pc) {
        case 0x22dad0u: goto label_22dad0;
        case 0x22dadcu: goto label_22dadc;
        case 0x22db14u: goto label_22db14;
        default: break;
    }

    ctx->pc = 0x22dac0u;

    // 0x22dac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dac4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22dac8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22DAC8u;
    SET_GPR_U32(ctx, 31, 0x22DAD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22DAC8u, 0x22DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAD0u;
label_22dad0:
    // 0x22dad0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dad4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22DAD4u;
    SET_GPR_U32(ctx, 31, 0x22DADCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22DAD4u, 0x22DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DADCu;
label_22dadc:
    // 0x22dadc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x22dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dae0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x22dae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x22dae4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x22dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22dae8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x22dae8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22daec: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22DAECu;
    {
        const bool branch_taken_0x22daec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22daec) {
            ctx->pc = 0x22DB78u;
            return;
        }
    }
    ctx->pc = 0x22DAF4u;
    // 0x22daf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22daf8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dafc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22db00: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22db04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22db04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22db08: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22db08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22db0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22DB0Cu;
    SET_GPR_U32(ctx, 31, 0x22DB14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22DB0Cu, 0x22DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB14u;
label_22db14:
    // 0x22db14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22db18: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x22db18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22db1c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22db20: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22db24: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22db24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22db28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db2c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x22db2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x22db30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22db34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22db38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22db3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22db40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22db44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22db48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22db4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22db50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22db54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22db58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22db60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22db60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22db64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db68: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22db68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22db6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22db6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22db70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db74: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22db74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x22db78u;
}
