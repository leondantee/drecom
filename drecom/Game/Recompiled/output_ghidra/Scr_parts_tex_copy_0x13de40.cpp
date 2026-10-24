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

// Function: Scr_parts_tex_copy
// Address: 0x13de40 - 0x13df7c
void Scr_parts_tex_copy_0x13de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_tex_copy_0x13de40");
#endif

    switch (ctx->pc) {
        case 0x13de84u: goto label_13de84;
        case 0x13dee0u: goto label_13dee0;
        default: break;
    }

    ctx->pc = 0x13de40u;

    // 0x13de40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13de44: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13de44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13de48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13de4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13de50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13de50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13de54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13de54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13de58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13de5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13de60: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x13de60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x13de64: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x13de64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x13de68: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13de6c: 0x8c5600a0  lw          $s6, 0xA0($v0)
    ctx->pc = 0x13de6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x13de70: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x13de70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x13de74: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x13de74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13de78: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13de7c: 0x8c540034  lw          $s4, 0x34($v0)
    ctx->pc = 0x13de7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13de80: 0x0  nop
    ctx->pc = 0x13de80u;
    // NOP
label_13de84:
    // 0x13de84: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x13de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x13de88: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x13de88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x13de8c: 0x8e9000b0  lw          $s0, 0xB0($s4)
    ctx->pc = 0x13de8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x13de90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x13de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13de94: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x13de94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
    // 0x13de98: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x13de98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13de9c: 0x8e930020  lw          $s3, 0x20($s4)
    ctx->pc = 0x13de9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x13dea0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13dea4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13dea8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x13dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x13deac: 0xafb10078  sw          $s1, 0x78($sp)
    ctx->pc = 0x13deacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 17));
    // 0x13deb0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x13deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13deb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13deb8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13debc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13debcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13dec0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x13dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13dec4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13dec8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13decc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13ded0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13ded4: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x13ded4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13ded8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x13ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13dedc: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x13dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_13dee0:
    // 0x13dee0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x13dee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13dee4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x13dee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13dee8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x13dee8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x13deec: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x13deecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x13def0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x13def0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13def4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x13def4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13def8: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x13def8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x13defc: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x13defcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x13df00: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13df00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13df04: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x13df04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13df08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x13df08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x13df0c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13df0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13df10: 0x1660fff3  bnez        $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x13DF10u;
    {
        const bool branch_taken_0x13df10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df10) {
            ctx->pc = 0x13DEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dee0;
        }
    }
    ctx->pc = 0x13DF18u;
    // 0x13df18: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x13df18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
    // 0x13df1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x13df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13df20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13df24: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13df28: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13df28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13df2c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x13df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13df30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13df30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13df34: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13df38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13df3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13df40: 0x269400c0  addiu       $s4, $s4, 0xC0
    ctx->pc = 0x13df40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x13df44: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x13df44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x13df48: 0x16a0ffce  bnez        $s5, . + 4 + (-0x32 << 2)
    ctx->pc = 0x13DF48u;
    {
        const bool branch_taken_0x13df48 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df48) {
            ctx->pc = 0x13DE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13de84;
        }
    }
    ctx->pc = 0x13DF50u;
    // 0x13df50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13df54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13df54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13df58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13df58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13df5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13df5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13df60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13df60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13df64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13df64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13df68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13df68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13df6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13df6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13df70: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13df74: 0x3e00008  jr          $ra
    ctx->pc = 0x13DF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DF7Cu;
}
