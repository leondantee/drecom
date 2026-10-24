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

// Function: entry_0016d9f8
// Address: 0x16d9f8 - 0x16dbd0
void entry_0016d9f8_0x16d9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d9f8_0x16d9f8");
#endif

    switch (ctx->pc) {
        case 0x16db40u: goto label_16db40;
        case 0x16db50u: goto label_16db50;
        case 0x16db60u: goto label_16db60;
        case 0x16db80u: goto label_16db80;
        case 0x16dbb8u: goto label_16dbb8;
        default: break;
    }

    ctx->pc = 0x16d9f8u;

    // 0x16d9f8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16d9fc: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16da00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16da00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16da04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16da08: 0x1460012b  bnez        $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x16DA08u;
    {
        const bool branch_taken_0x16da08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16da08) {
            ctx->pc = 0x16DEB8u;
            return;
        }
    }
    ctx->pc = 0x16DA10u;
    // 0x16da10: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da14: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x16da14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16da18: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x16da18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x16da1c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x16da1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x16da20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16da20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16da24: 0x8c23ab28  lw          $v1, -0x54D8($at)
    ctx->pc = 0x16da24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47AB28u));
    // 0x16da28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16da28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16da2c: 0x14600122  bnez        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x16DA2Cu;
    {
        const bool branch_taken_0x16da2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16da2c) {
            ctx->pc = 0x16DEB8u;
            return;
        }
    }
    ctx->pc = 0x16DA34u;
    // 0x16da34: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da38: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x16da38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16da3c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16da3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16da40: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16da40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16da44: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16da48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16da4c: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x16da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x16da50: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da54: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x16da54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x16da58: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16da58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16da5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16da5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16da60: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16da64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16da68: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x16da68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x16da6c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da70: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x16da70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16da74: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16da74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16da78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16da78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16da7c: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16da80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16da84: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x16da84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x16da88: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16da8c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x16da8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x16da90: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16da90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16da94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16da94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16da98: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16da9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16daa0: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x16daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x16daa4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16daa8: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x16daa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16daac: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16daacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dab0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dab0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dab4: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16dab8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dabc: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x16dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x16dac0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dac4: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x16dac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x16dac8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dacc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16daccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dad0: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16dad4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dad8: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x16dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x16dadc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dae0: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x16dae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16dae4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dae8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dae8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16daec: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16daf0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16daf4: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x16daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x16daf8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dafc: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x16dafcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16db00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16db00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16db04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16db04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16db08: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16db0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16db10: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x16db10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x16db14: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16db18: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x16db18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16db1c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16db20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16db20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16db24: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16db28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16db2c: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x16db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x16db30: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16db34: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x16db38: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DB38u;
    SET_GPR_U32(ctx, 31, 0x16DB40u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DB40u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DB40u) { return; }
    ctx->pc = 0x16DB40u;
label_16db40:
    // 0x16db40: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x16db44: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x16db48: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DB48u;
    SET_GPR_U32(ctx, 31, 0x16DB50u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DB50u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DB50u) { return; }
    ctx->pc = 0x16DB50u;
label_16db50:
    // 0x16db50: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x16db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x16db54: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x16db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x16db58: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DB58u;
    SET_GPR_U32(ctx, 31, 0x16DB60u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DB60u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DB60u) { return; }
    ctx->pc = 0x16DB60u;
label_16db60:
    // 0x16db60: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16db64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16db68: 0x24455750  addiu       $a1, $v0, 0x5750
    ctx->pc = 0x16db68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
    // 0x16db6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16db70: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16db74: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x16db74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16db78: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DB78u;
    SET_GPR_U32(ctx, 31, 0x16DB80u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DB78u, 0x16DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB80u;
label_16db80:
    // 0x16db80: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16db80u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16db84: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x16DB84u;
    {
        const bool branch_taken_0x16db84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db84) {
            ctx->pc = 0x16DCA8u;
            return;
        }
    }
    ctx->pc = 0x16DB8Cu;
    // 0x16db8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16db90: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16DB90u;
    {
        const bool branch_taken_0x16db90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16db90) {
            ctx->pc = 0x16DBD0u;
            return;
        }
    }
    ctx->pc = 0x16DB98u;
    // 0x16db98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16db9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dba0: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16dba4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dba8: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16dbac: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16dbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16dbb0: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DBB0u;
    SET_GPR_U32(ctx, 31, 0x16DBB8u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DBB0u, 0x16DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBB8u;
label_16dbb8:
    // 0x16dbb8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16dbb8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16dbbc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x16dbbcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16dbc0: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x16DBC0u;
    {
        const bool branch_taken_0x16dbc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbc0) {
            ctx->pc = 0x16DCA8u;
            return;
        }
    }
    ctx->pc = 0x16DBC8u;
    // 0x16dbc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16DBC8u;
    {
        const bool branch_taken_0x16dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbc8) {
            ctx->pc = 0x16DC28u;
            return;
        }
    }
    ctx->pc = 0x16DBD0u;
}
