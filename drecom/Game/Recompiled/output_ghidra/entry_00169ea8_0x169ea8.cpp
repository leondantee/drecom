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

// Function: entry_00169ea8
// Address: 0x169ea8 - 0x16a080
void entry_00169ea8_0x169ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169ea8_0x169ea8");
#endif

    switch (ctx->pc) {
        case 0x169ff0u: goto label_169ff0;
        case 0x16a000u: goto label_16a000;
        case 0x16a010u: goto label_16a010;
        case 0x16a030u: goto label_16a030;
        case 0x16a068u: goto label_16a068;
        default: break;
    }

    ctx->pc = 0x169ea8u;

    // 0x169ea8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x169ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169eac: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x169eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x169eb0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x169eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x169eb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x169eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x169eb8: 0x1460012b  bnez        $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x169EB8u;
    {
        const bool branch_taken_0x169eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169eb8) {
            ctx->pc = 0x16A368u;
            return;
        }
    }
    ctx->pc = 0x169EC0u;
    // 0x169ec0: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x169ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169ec4: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x169ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x169ec8: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x169ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x169ecc: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x169eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x169ed0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169ed4: 0x8c23ab28  lw          $v1, -0x54D8($at)
    ctx->pc = 0x169ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47AB28u));
    // 0x169ed8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x169ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x169edc: 0x14600122  bnez        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x169EDCu;
    {
        const bool branch_taken_0x169edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169edc) {
            ctx->pc = 0x16A368u;
            return;
        }
    }
    ctx->pc = 0x169EE4u;
    // 0x169ee4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169ee8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x169ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x169eec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169ef0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169ef0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169ef4: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x169ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x169ef8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169efc: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x169efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x169f00: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169f04: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x169f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x169f08: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169f0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169f0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169f10: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x169f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x169f14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169f18: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x169f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x169f1c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169f20: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x169f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x169f24: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169f28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169f28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169f2c: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x169f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x169f30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169f34: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x169f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x169f38: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169f3c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x169f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x169f40: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169f44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169f44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169f48: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x169f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x169f4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169f50: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x169f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x169f54: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169f58: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x169f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x169f5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169f60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169f60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169f64: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x169f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x169f68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169f6c: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x169f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x169f70: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169f74: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x169f78: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169f7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169f7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169f80: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x169f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x169f84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169f88: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x169f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x169f8c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169f90: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x169f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x169f94: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169f98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169f98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169f9c: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x169f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x169fa0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169fa4: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x169fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x169fa8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169fac: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x169facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x169fb0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169fb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169fb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169fb8: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x169fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x169fbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169fc0: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x169fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x169fc4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x169fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169fc8: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x169fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x169fcc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x169fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169fd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x169fd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x169fd4: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x169fd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169fdc: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x169fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x169fe0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x169fe4: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x169fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x169fe8: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x169FE8u;
    SET_GPR_U32(ctx, 31, 0x169FF0u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x169FF0u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169FF0u) { return; }
    ctx->pc = 0x169FF0u;
label_169ff0:
    // 0x169ff0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x169ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x169ff4: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x169ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x169ff8: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x169FF8u;
    SET_GPR_U32(ctx, 31, 0x16A000u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16A000u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A000u) { return; }
    ctx->pc = 0x16A000u;
label_16a000:
    // 0x16a000: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x16a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x16a004: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x16a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x16a008: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16A008u;
    SET_GPR_U32(ctx, 31, 0x16A010u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16A010u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A010u) { return; }
    ctx->pc = 0x16A010u;
label_16a010:
    // 0x16a010: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16a014: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a018: 0x24455750  addiu       $a1, $v0, 0x5750
    ctx->pc = 0x16a018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
    // 0x16a01c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a020: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16a020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16a024: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x16a024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a028: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A028u;
    SET_GPR_U32(ctx, 31, 0x16A030u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A028u, 0x16A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A030u;
label_16a030:
    // 0x16a030: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a030u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a034: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x16A034u;
    {
        const bool branch_taken_0x16a034 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a034) {
            ctx->pc = 0x16A158u;
            return;
        }
    }
    ctx->pc = 0x16A03Cu;
    // 0x16a03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a040: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A040u;
    {
        const bool branch_taken_0x16a040 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a040) {
            ctx->pc = 0x16A080u;
            return;
        }
    }
    ctx->pc = 0x16A048u;
    // 0x16a048: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a04c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a050: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a054: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a058: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a05c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a060: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A060u;
    SET_GPR_U32(ctx, 31, 0x16A068u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A060u, 0x16A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A068u;
label_16a068:
    // 0x16a068: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a068u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a06c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x16a06cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a070: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x16A070u;
    {
        const bool branch_taken_0x16a070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a070) {
            ctx->pc = 0x16A158u;
            return;
        }
    }
    ctx->pc = 0x16A078u;
    // 0x16a078: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A078u;
    {
        const bool branch_taken_0x16a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a078) {
            ctx->pc = 0x16A0D8u;
            return;
        }
    }
    ctx->pc = 0x16A080u;
}
