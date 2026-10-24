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

// Function: atari_check_4
// Address: 0x167cc0 - 0x1681e0
void atari_check_4_0x167cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atari_check_4_0x167cc0");
#endif

    switch (ctx->pc) {
        case 0x167cf4u: goto label_167cf4;
        case 0x167ec4u: goto label_167ec4;
        case 0x167ed4u: goto label_167ed4;
        case 0x167ee4u: goto label_167ee4;
        case 0x167ef4u: goto label_167ef4;
        case 0x167f08u: goto label_167f08;
        case 0x167f1cu: goto label_167f1c;
        case 0x167f30u: goto label_167f30;
        case 0x167f44u: goto label_167f44;
        case 0x167f5cu: goto label_167f5c;
        case 0x167f74u: goto label_167f74;
        case 0x167f84u: goto label_167f84;
        case 0x167f98u: goto label_167f98;
        case 0x167fd0u: goto label_167fd0;
        case 0x167fe8u: goto label_167fe8;
        case 0x168000u: goto label_168000;
        case 0x168018u: goto label_168018;
        case 0x168030u: goto label_168030;
        case 0x168048u: goto label_168048;
        case 0x168060u: goto label_168060;
        case 0x168078u: goto label_168078;
        case 0x168088u: goto label_168088;
        case 0x1680b0u: goto label_1680b0;
        case 0x1680d8u: goto label_1680d8;
        case 0x168100u: goto label_168100;
        case 0x16812cu: goto label_16812c;
        default: break;
    }

    ctx->pc = 0x167cc0u;

    // 0x167cc0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x167cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x167cc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x167cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x167cc8: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x167cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x167ccc: 0xafa50188  sw          $a1, 0x188($sp)
    ctx->pc = 0x167cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 5));
    // 0x167cd0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x167cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167cd4: 0x8c63ffe0  lw          $v1, -0x20($v1)
    ctx->pc = 0x167cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x167cd8: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x167cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x167cdc: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x167cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167ce0: 0x8c63ffe4  lw          $v1, -0x1C($v1)
    ctx->pc = 0x167ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
    // 0x167ce4: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x167ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    // 0x167ce8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x167ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167cec: 0x8c63ffe8  lw          $v1, -0x18($v1)
    ctx->pc = 0x167cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967272)));
    // 0x167cf0: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x167cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
label_167cf4:
    // 0x167cf4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x167cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167cf8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x167cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x167cfc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x167d00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x167d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x167d04: 0x1460012a  bnez        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x167D04u;
    {
        const bool branch_taken_0x167d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d04) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x167D0Cu;
    // 0x167d0c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x167d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167d10: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x167d14: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x167d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x167d18: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x167d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x167d1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x167d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x167d20: 0x8c23ab28  lw          $v1, -0x54D8($at)
    ctx->pc = 0x167d20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47AB28u));
    // 0x167d24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x167d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x167d28: 0x14600121  bnez        $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x167D28u;
    {
        const bool branch_taken_0x167d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d28) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x167D30u;
    // 0x167d30: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167d34: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x167d34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x167d38: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167d3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167d3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167d40: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x167d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x167d44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167d48: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x167d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x167d4c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167d50: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x167d50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x167d54: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167d58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167d58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167d5c: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x167d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x167d60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167d64: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x167d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x167d68: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167d6c: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x167d70: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167d74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167d78: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x167d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x167d7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167d80: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x167d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x167d84: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167d88: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x167d88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x167d8c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167d90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167d90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167d94: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x167d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x167d98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167d9c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x167d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x167da0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167da4: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x167da4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x167da8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167dac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167dacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167db0: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x167db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x167db4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167db8: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x167db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x167dbc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167dc0: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x167dc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x167dc4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167dc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167dc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167dcc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x167dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x167dd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167dd4: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x167dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x167dd8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167ddc: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x167ddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x167de0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167de4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167de4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167de8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x167de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x167dec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167df0: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x167df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x167df4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167df8: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x167df8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x167dfc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167e00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167e00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167e04: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x167e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x167e08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167e0c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x167e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x167e10: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167e14: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x167e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x167e18: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167e1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167e1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167e20: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x167e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x167e24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167e28: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x167e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x167e2c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167e30: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x167e30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x167e34: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167e38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167e38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167e3c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x167e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x167e40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167e44: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x167e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x167e48: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167e4c: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x167e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x167e50: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167e54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167e54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167e58: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x167e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x167e5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167e60: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x167e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x167e64: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167e68: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x167e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x167e6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x167e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x167e70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x167e70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x167e74: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x167e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x167e78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167e7c: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x167e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x167e80: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167e84: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x167e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167e88: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x167e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x167e8c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167e90: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x167e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167e94: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x167e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x167e98: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x167e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x167e9c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x167e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167ea0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x167ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x167ea4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x167ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x167ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167eac: 0x0  nop
    ctx->pc = 0x167eacu;
    // NOP
    // 0x167eb0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x167eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x167eb4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x167eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167eb8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x167eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x167ebc: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x167EBCu;
    SET_GPR_U32(ctx, 31, 0x167EC4u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x167EC4u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167EC4u) { return; }
    ctx->pc = 0x167EC4u;
label_167ec4:
    // 0x167ec4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x167ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167ec8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x167ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x167ecc: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x167ECCu;
    SET_GPR_U32(ctx, 31, 0x167ED4u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x167ED4u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167ED4u) { return; }
    ctx->pc = 0x167ED4u;
label_167ed4:
    // 0x167ed4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x167ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167ed8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x167ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x167edc: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x167EDCu;
    SET_GPR_U32(ctx, 31, 0x167EE4u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x167EE4u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167EE4u) { return; }
    ctx->pc = 0x167EE4u;
label_167ee4:
    // 0x167ee4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x167ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167ee8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x167ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x167eec: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x167EECu;
    SET_GPR_U32(ctx, 31, 0x167EF4u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x167EF4u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167EF4u) { return; }
    ctx->pc = 0x167EF4u;
label_167ef4:
    // 0x167ef4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x167ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x167ef8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x167ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167efc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x167efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167f00: 0xc040c80  jal         func_103200
    ctx->pc = 0x167F00u;
    SET_GPR_U32(ctx, 31, 0x167F08u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167F08u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167F08u) { return; }
    ctx->pc = 0x167F08u;
label_167f08:
    // 0x167f08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x167f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x167f0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x167f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167f10: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x167f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167f14: 0xc040c80  jal         func_103200
    ctx->pc = 0x167F14u;
    SET_GPR_U32(ctx, 31, 0x167F1Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167F1Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167F1Cu) { return; }
    ctx->pc = 0x167F1Cu;
label_167f1c:
    // 0x167f1c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x167f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x167f20: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x167f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167f24: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x167f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167f28: 0xc040c80  jal         func_103200
    ctx->pc = 0x167F28u;
    SET_GPR_U32(ctx, 31, 0x167F30u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167F30u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167F30u) { return; }
    ctx->pc = 0x167F30u;
label_167f30:
    // 0x167f30: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x167f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x167f34: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x167f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167f38: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x167f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167f3c: 0xc040c80  jal         func_103200
    ctx->pc = 0x167F3Cu;
    SET_GPR_U32(ctx, 31, 0x167F44u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167F44u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167F44u) { return; }
    ctx->pc = 0x167F44u;
label_167f44:
    // 0x167f44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x167f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x167f48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x167f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x167f4c: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x167f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x167f50: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x167f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167f54: 0xc040c80  jal         func_103200
    ctx->pc = 0x167F54u;
    SET_GPR_U32(ctx, 31, 0x167F5Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167F5Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167F5Cu) { return; }
    ctx->pc = 0x167F5Cu;
label_167f5c:
    // 0x167f5c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x167f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x167f60: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x167f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x167f64: 0x2445aae0  addiu       $a1, $v0, -0x5520
    ctx->pc = 0x167f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x167f68: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x167f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167f6c: 0xc040c80  jal         func_103200
    ctx->pc = 0x167F6Cu;
    SET_GPR_U32(ctx, 31, 0x167F74u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167F74u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167F74u) { return; }
    ctx->pc = 0x167F74u;
label_167f74:
    // 0x167f74: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x167f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x167f78: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x167f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x167f7c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x167F7Cu;
    SET_GPR_U32(ctx, 31, 0x167F84u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x167F84u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167F84u) { return; }
    ctx->pc = 0x167F84u;
label_167f84:
    // 0x167f84: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x167f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x167f88: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x167f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x167f8c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x167f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x167f90: 0xc040c1a  jal         func_103068
    ctx->pc = 0x167F90u;
    SET_GPR_U32(ctx, 31, 0x167F98u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x167F98u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167F98u) { return; }
    ctx->pc = 0x167F98u;
label_167f98:
    // 0x167f98: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x167f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167f9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x167f9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x167fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167fa4: 0x0  nop
    ctx->pc = 0x167fa4u;
    // NOP
    // 0x167fa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167fac: 0x0  nop
    ctx->pc = 0x167facu;
    // NOP
    // 0x167fb0: 0x4500007f  bc1f        . + 4 + (0x7F << 2)
    ctx->pc = 0x167FB0u;
    {
        const bool branch_taken_0x167fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167fb0) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x167FB8u;
    // 0x167fb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x167fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167fbc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x167fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x167fc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x167fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x167fc4: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x167fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x167fc8: 0xc040c12  jal         func_103048
    ctx->pc = 0x167FC8u;
    SET_GPR_U32(ctx, 31, 0x167FD0u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x167FD0u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167FD0u) { return; }
    ctx->pc = 0x167FD0u;
label_167fd0:
    // 0x167fd0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167fd4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x167fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x167fd8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x167fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x167fdc: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x167fe0: 0xc040c12  jal         func_103048
    ctx->pc = 0x167FE0u;
    SET_GPR_U32(ctx, 31, 0x167FE8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x167FE8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167FE8u) { return; }
    ctx->pc = 0x167FE8u;
label_167fe8:
    // 0x167fe8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167fec: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x167fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x167ff0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x167ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x167ff4: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x167ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x167ff8: 0xc040c12  jal         func_103048
    ctx->pc = 0x167FF8u;
    SET_GPR_U32(ctx, 31, 0x168000u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x168000u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168000u) { return; }
    ctx->pc = 0x168000u;
label_168000:
    // 0x168000: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x168000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x168004: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x168008: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16800c: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x16800cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168010: 0xc040c12  jal         func_103048
    ctx->pc = 0x168010u;
    SET_GPR_U32(ctx, 31, 0x168018u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x168018u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168018u) { return; }
    ctx->pc = 0x168018u;
label_168018:
    // 0x168018: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x168018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16801c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16801cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168020: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x168020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168024: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x168024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168028: 0xc040c80  jal         func_103200
    ctx->pc = 0x168028u;
    SET_GPR_U32(ctx, 31, 0x168030u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168030u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168030u) { return; }
    ctx->pc = 0x168030u;
label_168030:
    // 0x168030: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x168030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x168034: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168038: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x168038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16803c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x16803cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168040: 0xc040c80  jal         func_103200
    ctx->pc = 0x168040u;
    SET_GPR_U32(ctx, 31, 0x168048u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168048u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168048u) { return; }
    ctx->pc = 0x168048u;
label_168048:
    // 0x168048: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x168048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16804c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16804cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168050: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x168050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168054: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x168054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168058: 0xc040c80  jal         func_103200
    ctx->pc = 0x168058u;
    SET_GPR_U32(ctx, 31, 0x168060u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168060u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168060u) { return; }
    ctx->pc = 0x168060u;
label_168060:
    // 0x168060: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x168060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x168064: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168068: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x168068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16806c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16806cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168070: 0xc040c80  jal         func_103200
    ctx->pc = 0x168070u;
    SET_GPR_U32(ctx, 31, 0x168078u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168078u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168078u) { return; }
    ctx->pc = 0x168078u;
label_168078:
    // 0x168078: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x168078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16807c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16807cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x168080: 0xc040c1a  jal         func_103068
    ctx->pc = 0x168080u;
    SET_GPR_U32(ctx, 31, 0x168088u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x168088u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168088u) { return; }
    ctx->pc = 0x168088u;
label_168088:
    // 0x168088: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x168088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16808c: 0x0  nop
    ctx->pc = 0x16808cu;
    // NOP
    // 0x168090: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x168090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168094: 0x0  nop
    ctx->pc = 0x168094u;
    // NOP
    // 0x168098: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x168098u;
    {
        const bool branch_taken_0x168098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168098) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x1680A0u;
    // 0x1680a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1680a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1680a4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1680a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1680a8: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1680A8u;
    SET_GPR_U32(ctx, 31, 0x1680B0u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1680B0u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1680B0u) { return; }
    ctx->pc = 0x1680B0u;
label_1680b0:
    // 0x1680b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1680b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1680b4: 0x0  nop
    ctx->pc = 0x1680b4u;
    // NOP
    // 0x1680b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1680b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1680bc: 0x0  nop
    ctx->pc = 0x1680bcu;
    // NOP
    // 0x1680c0: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x1680C0u;
    {
        const bool branch_taken_0x1680c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1680c0) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x1680C8u;
    // 0x1680c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1680c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1680cc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1680d0: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1680D0u;
    SET_GPR_U32(ctx, 31, 0x1680D8u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1680D8u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1680D8u) { return; }
    ctx->pc = 0x1680D8u;
label_1680d8:
    // 0x1680d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1680d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1680dc: 0x0  nop
    ctx->pc = 0x1680dcu;
    // NOP
    // 0x1680e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1680e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1680e4: 0x0  nop
    ctx->pc = 0x1680e4u;
    // NOP
    // 0x1680e8: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x1680E8u;
    {
        const bool branch_taken_0x1680e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1680e8) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x1680F0u;
    // 0x1680f0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1680f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1680f4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1680f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1680f8: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1680F8u;
    SET_GPR_U32(ctx, 31, 0x168100u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x168100u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168100u) { return; }
    ctx->pc = 0x168100u;
label_168100:
    // 0x168100: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x168100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168104: 0x0  nop
    ctx->pc = 0x168104u;
    // NOP
    // 0x168108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x168108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16810c: 0x0  nop
    ctx->pc = 0x16810cu;
    // NOP
    // 0x168110: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x168110u;
    {
        const bool branch_taken_0x168110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168110) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x168118u;
    // 0x168118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16811c: 0x2444aaf0  addiu       $a0, $v0, -0x5510
    ctx->pc = 0x16811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168120: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x168124: 0xc040c1a  jal         func_103068
    ctx->pc = 0x168124u;
    SET_GPR_U32(ctx, 31, 0x16812Cu);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x16812Cu;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16812Cu) { return; }
    ctx->pc = 0x16812Cu;
label_16812c:
    // 0x16812c: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x16812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168130: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x168130u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x168134: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x168134u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x168138: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x168138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x16813c: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x16813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168140: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x168140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x168144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x168144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168148: 0x0  nop
    ctx->pc = 0x168148u;
    // NOP
    // 0x16814c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16814cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168150: 0x0  nop
    ctx->pc = 0x168150u;
    // NOP
    // 0x168154: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x168154u;
    {
        const bool branch_taken_0x168154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168154) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x16815Cu;
    // 0x16815c: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x16815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168164: 0x0  nop
    ctx->pc = 0x168164u;
    // NOP
    // 0x168168: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16816c: 0x0  nop
    ctx->pc = 0x16816cu;
    // NOP
    // 0x168170: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x168170u;
    {
        const bool branch_taken_0x168170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168170) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x168178u;
    // 0x168178: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x168178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16817c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16817cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168180: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x168180u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168184: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168188: 0x0  nop
    ctx->pc = 0x168188u;
    // NOP
    // 0x16818c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16818Cu;
    {
        const bool branch_taken_0x16818c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16818c) {
            ctx->pc = 0x1681B0u;
            goto label_1681b0;
        }
    }
    ctx->pc = 0x168194u;
    // 0x168194: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x168194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168198: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16819c: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16819cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x1681a0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1681a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1681a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1681a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1681a8: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x1681a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x1681ac: 0x0  nop
    ctx->pc = 0x1681acu;
    // NOP
label_1681b0:
    // 0x1681b0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1681b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1681b4: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1681b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1681b8: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x1681b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x1681bc: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1681bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1681c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1681c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1681c4: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x1681c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
    // 0x1681c8: 0x1460feca  bnez        $v1, . + 4 + (-0x136 << 2)
    ctx->pc = 0x1681C8u;
    {
        const bool branch_taken_0x1681c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1681c8) {
            ctx->pc = 0x167CF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167cf4;
        }
    }
    ctx->pc = 0x1681D0u;
    // 0x1681d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1681d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1681d4: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x1681d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1681d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1681D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1681D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1681E0u;
}
