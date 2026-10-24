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

// Function: atari_check_Cylinder_4
// Address: 0x169e50 - 0x16a3bc
void atari_check_Cylinder_4_0x169e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atari_check_Cylinder_4_0x169e50");
#endif

    switch (ctx->pc) {
        case 0x169ea8u: goto label_169ea8;
        case 0x169ff0u: goto label_169ff0;
        case 0x16a000u: goto label_16a000;
        case 0x16a010u: goto label_16a010;
        case 0x16a030u: goto label_16a030;
        case 0x16a068u: goto label_16a068;
        case 0x16a0a0u: goto label_16a0a0;
        case 0x16a0c4u: goto label_16a0c4;
        case 0x16a0ecu: goto label_16a0ec;
        case 0x16a0fcu: goto label_16a0fc;
        case 0x16a128u: goto label_16a128;
        case 0x16a138u: goto label_16a138;
        case 0x16a210u: goto label_16a210;
        case 0x16a220u: goto label_16a220;
        case 0x16a240u: goto label_16a240;
        case 0x16a278u: goto label_16a278;
        case 0x16a2b0u: goto label_16a2b0;
        case 0x16a2d4u: goto label_16a2d4;
        case 0x16a2fcu: goto label_16a2fc;
        case 0x16a30cu: goto label_16a30c;
        case 0x16a338u: goto label_16a338;
        case 0x16a348u: goto label_16a348;
        default: break;
    }

    ctx->pc = 0x169e50u;

    // 0x169e50: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x169e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x169e54: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x169e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x169e58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x169e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x169e5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x169e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x169e60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x169e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x169e64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x169e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x169e68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x169e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x169e6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x169e70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x169e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169e7c: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x169e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x169e80: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x169e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
    // 0x169e84: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x169e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169e88: 0x8c63ffe0  lw          $v1, -0x20($v1)
    ctx->pc = 0x169e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x169e8c: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x169e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
    // 0x169e90: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x169e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169e94: 0x8c63ffe4  lw          $v1, -0x1C($v1)
    ctx->pc = 0x169e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
    // 0x169e98: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x169e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x169e9c: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x169e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x169ea0: 0x8c63ffe8  lw          $v1, -0x18($v1)
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967272)));
    // 0x169ea4: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x169ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
label_169ea8:
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
            goto label_16a368;
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
            goto label_16a368;
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
            goto label_16a158;
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
            goto label_16a080;
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
            goto label_16a158;
        }
    }
    ctx->pc = 0x16A078u;
    // 0x16a078: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A078u;
    {
        const bool branch_taken_0x16a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a078) {
            ctx->pc = 0x16A0D8u;
            goto label_16a0d8;
        }
    }
    ctx->pc = 0x16A080u;
label_16a080:
    // 0x16a080: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a084: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a088: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a08c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a090: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a094: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16a094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a098: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A098u;
    SET_GPR_U32(ctx, 31, 0x16A0A0u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A098u, 0x16A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0A0u;
label_16a0a0:
    // 0x16a0a0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a0a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a0a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16a0a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a0ac: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a0b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a0b4: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a0b8: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16a0bc: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A0BCu;
    SET_GPR_U32(ctx, 31, 0x16A0C4u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A0BCu, 0x16A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0C4u;
label_16a0c4:
    // 0x16a0c4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x16a0c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a0c8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A0C8u;
    {
        const bool branch_taken_0x16a0c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a0c8) {
            ctx->pc = 0x16A0D8u;
            goto label_16a0d8;
        }
    }
    ctx->pc = 0x16A0D0u;
    // 0x16a0d0: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x16A0D0u;
    {
        const bool branch_taken_0x16a0d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0d0) {
            ctx->pc = 0x16A158u;
            goto label_16a158;
        }
    }
    ctx->pc = 0x16A0D8u;
label_16a0d8:
    // 0x16a0d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16a0d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a0dc: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x16a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a0e0: 0x7200f628  paddub      $fp, $s0, $zero
    ctx->pc = 0x16a0e0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a0e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A0E4u;
    {
        const bool branch_taken_0x16a0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0e4) {
            ctx->pc = 0x16A108u;
            goto label_16a108;
        }
    }
    ctx->pc = 0x16A0ECu;
label_16a0ec:
    // 0x16a0ec: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a0f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16a0f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a0f4: 0xc05a8f0  jal         func_16A3C0
    ctx->pc = 0x16A0F4u;
    SET_GPR_U32(ctx, 31, 0x16A0FCu);
    ctx->pc = 0x16A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3C0u, 0x16A0F4u, 0x16A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0FCu;
label_16a0fc:
    // 0x16a0fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16a0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a100: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16a100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16a104: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x16a104u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16a108:
    // 0x16a108: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x16a108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x16a10c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16A10Cu;
    {
        const bool branch_taken_0x16a10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a10c) {
            ctx->pc = 0x16A0ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a0ec;
        }
    }
    ctx->pc = 0x16A114u;
    // 0x16a114: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16a114u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a118: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x16a118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16a11c: 0xafb00254  sw          $s0, 0x254($sp)
    ctx->pc = 0x16a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 16));
    // 0x16a120: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16A120u;
    {
        const bool branch_taken_0x16a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a120) {
            ctx->pc = 0x16A148u;
            goto label_16a148;
        }
    }
    ctx->pc = 0x16A128u;
label_16a128:
    // 0x16a128: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16a128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a12c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16a12cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a130: 0xc05a8f0  jal         func_16A3C0
    ctx->pc = 0x16A130u;
    SET_GPR_U32(ctx, 31, 0x16A138u);
    ctx->pc = 0x16A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3C0u, 0x16A130u, 0x16A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A138u;
label_16a138:
    // 0x16a138: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16a138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a13c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16a13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16a140: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x16a140u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a144: 0x0  nop
    ctx->pc = 0x16a144u;
    // NOP
label_16a148:
    // 0x16a148: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x16a148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16a14c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16A14Cu;
    {
        const bool branch_taken_0x16a14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a14c) {
            ctx->pc = 0x16A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a128;
        }
    }
    ctx->pc = 0x16A154u;
    // 0x16a154: 0x0  nop
    ctx->pc = 0x16a154u;
    // NOP
label_16a158:
    // 0x16a158: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a15c: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x16a15cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16a160: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a164: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a164u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a168: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16a16c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a170: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x16a170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x16a174: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a178: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x16a178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16a17c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a180: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a184: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16a188: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a18c: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x16a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x16a190: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a194: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x16a194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16a198: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a19c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a19cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a1a0: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16a1a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1a8: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x16a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x16a1ac: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a1b0: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x16a1b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x16a1b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a1b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a1b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a1bc: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16a1c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1c4: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x16a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x16a1c8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a1cc: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x16a1ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16a1d0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a1d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a1d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a1d8: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16a1dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1e0: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x16a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x16a1e4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a1e8: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x16a1ec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a1f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a1f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a1f4: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16a1f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1fc: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x16a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x16a200: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16a200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16a204: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x16a204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x16a208: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16A208u;
    SET_GPR_U32(ctx, 31, 0x16A210u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16A210u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A210u) { return; }
    ctx->pc = 0x16A210u;
label_16a210:
    // 0x16a210: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x16a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x16a214: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x16a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x16a218: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16A218u;
    SET_GPR_U32(ctx, 31, 0x16A220u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16A220u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A220u) { return; }
    ctx->pc = 0x16A220u;
label_16a220:
    // 0x16a220: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16a224: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a228: 0x24455750  addiu       $a1, $v0, 0x5750
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
    // 0x16a22c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a230: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16a234: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x16a234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a238: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A238u;
    SET_GPR_U32(ctx, 31, 0x16A240u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A238u, 0x16A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A240u;
label_16a240:
    // 0x16a240: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a240u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a244: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x16A244u;
    {
        const bool branch_taken_0x16a244 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a244) {
            ctx->pc = 0x16A368u;
            goto label_16a368;
        }
    }
    ctx->pc = 0x16A24Cu;
    // 0x16a24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a250: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A250u;
    {
        const bool branch_taken_0x16a250 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a250) {
            ctx->pc = 0x16A290u;
            goto label_16a290;
        }
    }
    ctx->pc = 0x16A258u;
    // 0x16a258: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a25c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a260: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a264: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a268: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a26c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a270: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A270u;
    SET_GPR_U32(ctx, 31, 0x16A278u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A270u, 0x16A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A278u;
label_16a278:
    // 0x16a278: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a278u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a27c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x16a27cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a280: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x16A280u;
    {
        const bool branch_taken_0x16a280 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a280) {
            ctx->pc = 0x16A368u;
            goto label_16a368;
        }
    }
    ctx->pc = 0x16A288u;
    // 0x16a288: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A288u;
    {
        const bool branch_taken_0x16a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a288) {
            ctx->pc = 0x16A2E8u;
            goto label_16a2e8;
        }
    }
    ctx->pc = 0x16A290u;
label_16a290:
    // 0x16a290: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a294: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a298: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a29c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a2a0: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a2a4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16a2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a2a8: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A2A8u;
    SET_GPR_U32(ctx, 31, 0x16A2B0u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A2A8u, 0x16A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2B0u;
label_16a2b0:
    // 0x16a2b0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a2b0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a2b4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16a2b8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a2bc: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a2c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a2c4: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a2c8: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x16a2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16a2cc: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A2CCu;
    SET_GPR_U32(ctx, 31, 0x16A2D4u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A2CCu, 0x16A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2D4u;
label_16a2d4:
    // 0x16a2d4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x16a2d4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a2d8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A2D8u;
    {
        const bool branch_taken_0x16a2d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a2d8) {
            ctx->pc = 0x16A2E8u;
            goto label_16a2e8;
        }
    }
    ctx->pc = 0x16A2E0u;
    // 0x16a2e0: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x16A2E0u;
    {
        const bool branch_taken_0x16a2e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a2e0) {
            ctx->pc = 0x16A368u;
            goto label_16a368;
        }
    }
    ctx->pc = 0x16A2E8u;
label_16a2e8:
    // 0x16a2e8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16a2e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a2ec: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x16a2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a2f0: 0xafb00258  sw          $s0, 0x258($sp)
    ctx->pc = 0x16a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 16));
    // 0x16a2f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A2F4u;
    {
        const bool branch_taken_0x16a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a2f4) {
            ctx->pc = 0x16A318u;
            goto label_16a318;
        }
    }
    ctx->pc = 0x16A2FCu;
label_16a2fc:
    // 0x16a2fc: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a300: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16a300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a304: 0xc05a8f0  jal         func_16A3C0
    ctx->pc = 0x16A304u;
    SET_GPR_U32(ctx, 31, 0x16A30Cu);
    ctx->pc = 0x16A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3C0u, 0x16A304u, 0x16A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A30Cu;
label_16a30c:
    // 0x16a30c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16a30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a310: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16a310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16a314: 0x7200b628  paddub      $s6, $s0, $zero
    ctx->pc = 0x16a314u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16a318:
    // 0x16a318: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x16a318u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x16a31c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16A31Cu;
    {
        const bool branch_taken_0x16a31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a31c) {
            ctx->pc = 0x16A2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a2fc;
        }
    }
    ctx->pc = 0x16A324u;
    // 0x16a324: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16a324u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a328: 0x27b00160  addiu       $s0, $sp, 0x160
    ctx->pc = 0x16a328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16a32c: 0xafb0025c  sw          $s0, 0x25C($sp)
    ctx->pc = 0x16a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 16));
    // 0x16a330: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16A330u;
    {
        const bool branch_taken_0x16a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a330) {
            ctx->pc = 0x16A358u;
            goto label_16a358;
        }
    }
    ctx->pc = 0x16A338u;
label_16a338:
    // 0x16a338: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a33c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16a33cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a340: 0xc05a8f0  jal         func_16A3C0
    ctx->pc = 0x16A340u;
    SET_GPR_U32(ctx, 31, 0x16A348u);
    ctx->pc = 0x16A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3C0u, 0x16A340u, 0x16A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A348u;
label_16a348:
    // 0x16a348: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16a348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a34c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16a34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16a350: 0x7200be28  paddub      $s7, $s0, $zero
    ctx->pc = 0x16a350u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a354: 0x0  nop
    ctx->pc = 0x16a354u;
    // NOP
label_16a358:
    // 0x16a358: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x16a358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16a35c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16A35Cu;
    {
        const bool branch_taken_0x16a35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a35c) {
            ctx->pc = 0x16A338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a338;
        }
    }
    ctx->pc = 0x16A364u;
    // 0x16a364: 0x0  nop
    ctx->pc = 0x16a364u;
    // NOP
label_16a368:
    // 0x16a368: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a36c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x16a370: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x16a370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x16a374: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x16a374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x16a378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16a378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a37c: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x16a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
    // 0x16a380: 0x1460fec9  bnez        $v1, . + 4 + (-0x137 << 2)
    ctx->pc = 0x16A380u;
    {
        const bool branch_taken_0x16a380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a380) {
            ctx->pc = 0x169EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169ea8;
        }
    }
    ctx->pc = 0x16A388u;
    // 0x16a388: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x16a388u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a38c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16a38cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a390: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16a390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a394: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16a394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a398: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16a398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a39c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16a39cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a3a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16a3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a3a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a3a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a3a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a3b0: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x16a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x16a3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A3BCu;
}
