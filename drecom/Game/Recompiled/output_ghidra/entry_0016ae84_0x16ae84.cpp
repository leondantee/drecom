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

// Function: entry_0016ae84
// Address: 0x16ae84 - 0x16b340
void entry_0016ae84_0x16ae84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae84_0x16ae84");
#endif

    switch (ctx->pc) {
        case 0x16b054u: goto label_16b054;
        case 0x16b064u: goto label_16b064;
        case 0x16b074u: goto label_16b074;
        case 0x16b084u: goto label_16b084;
        case 0x16b098u: goto label_16b098;
        case 0x16b0acu: goto label_16b0ac;
        case 0x16b0c0u: goto label_16b0c0;
        case 0x16b0d4u: goto label_16b0d4;
        case 0x16b0ecu: goto label_16b0ec;
        case 0x16b104u: goto label_16b104;
        case 0x16b114u: goto label_16b114;
        case 0x16b128u: goto label_16b128;
        case 0x16b160u: goto label_16b160;
        case 0x16b178u: goto label_16b178;
        case 0x16b190u: goto label_16b190;
        case 0x16b1a8u: goto label_16b1a8;
        case 0x16b1c0u: goto label_16b1c0;
        case 0x16b1d8u: goto label_16b1d8;
        case 0x16b1f0u: goto label_16b1f0;
        case 0x16b208u: goto label_16b208;
        case 0x16b218u: goto label_16b218;
        case 0x16b240u: goto label_16b240;
        case 0x16b268u: goto label_16b268;
        case 0x16b290u: goto label_16b290;
        case 0x16b2bcu: goto label_16b2bc;
        default: break;
    }

    ctx->pc = 0x16ae84u;

    // 0x16ae84: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x16ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16ae88: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x16ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16ae8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16ae90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16ae90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16ae94: 0x1460012a  bnez        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x16AE94u;
    {
        const bool branch_taken_0x16ae94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ae94) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16AE9Cu;
    // 0x16ae9c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x16ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16aea0: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x16aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16aea4: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x16aea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x16aea8: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x16aea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x16aeac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16aeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16aeb0: 0x8c23ab28  lw          $v1, -0x54D8($at)
    ctx->pc = 0x16aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47AB28u));
    // 0x16aeb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16aeb8: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x16AEB8u;
    {
        const bool branch_taken_0x16aeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aeb8) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16AEC0u;
    // 0x16aec0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16aec4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x16aec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16aec8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16aec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16aecc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16aeccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16aed0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aed4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aed8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x16aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x16aedc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16aee0: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x16aee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x16aee4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16aee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16aee8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16aee8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16aeec: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x16aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x16aef0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aef4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x16aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x16aef8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16aefc: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x16aefcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16af00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16af00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16af04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16af04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16af08: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x16af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x16af0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16af10: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x16af10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x16af14: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16af18: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x16af18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x16af1c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16af1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16af20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16af20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16af24: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16af28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16af2c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x16af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x16af30: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16af34: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x16af34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16af38: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16af38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16af3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16af3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16af40: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x16af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x16af44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16af44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16af48: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x16af48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x16af4c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16af50: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x16af50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x16af54: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16af54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16af58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16af58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16af5c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x16af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x16af60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16af64: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x16af64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x16af68: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16af6c: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x16af6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16af70: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16af70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16af74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16af74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16af78: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16af7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16af80: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x16af80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x16af84: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16af88: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x16af88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16af8c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16af8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16af90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16af90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16af94: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x16af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x16af98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16af9c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x16af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x16afa0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16afa4: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x16afa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16afa8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16afa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16afac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16afacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16afb0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x16afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x16afb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16afb8: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x16afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x16afbc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16afc0: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x16afc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x16afc4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16afc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16afc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16afc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16afcc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16afd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16afd4: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x16afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x16afd8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16afdc: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x16afdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16afe0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16afe4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16afe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16afe8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x16afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x16afec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aff0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x16aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x16aff4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16aff8: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x16aff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x16affc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16affcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b000: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b000u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b004: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x16b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x16b008: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b00c: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x16b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x16b010: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16b014: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x16b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b018: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x16b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x16b01c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16b020: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x16b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b024: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x16b024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x16b028: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16b02c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x16b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b030: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x16b030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16b034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b03c: 0x0  nop
    ctx->pc = 0x16b03cu;
    // NOP
    // 0x16b040: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x16b040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x16b044: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16b044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b048: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x16b048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16b04c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16B04Cu;
    SET_GPR_U32(ctx, 31, 0x16B054u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16B054u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B054u) { return; }
    ctx->pc = 0x16B054u;
label_16b054:
    // 0x16b054: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b058: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x16b05c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16B05Cu;
    SET_GPR_U32(ctx, 31, 0x16B064u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16B064u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B064u) { return; }
    ctx->pc = 0x16B064u;
label_16b064:
    // 0x16b064: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16b068: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x16b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x16b06c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16B06Cu;
    SET_GPR_U32(ctx, 31, 0x16B074u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16B074u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B074u) { return; }
    ctx->pc = 0x16B074u;
label_16b074:
    // 0x16b074: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16b074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16b078: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16b078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16b07c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16B07Cu;
    SET_GPR_U32(ctx, 31, 0x16B084u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16B084u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B084u) { return; }
    ctx->pc = 0x16B084u;
label_16b084:
    // 0x16b084: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16b088: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b08c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b090: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B090u;
    SET_GPR_U32(ctx, 31, 0x16B098u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B098u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B098u) { return; }
    ctx->pc = 0x16B098u;
label_16b098:
    // 0x16b098: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16b09c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16b0a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x16b0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b0a4: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B0A4u;
    SET_GPR_U32(ctx, 31, 0x16B0ACu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B0ACu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B0ACu) { return; }
    ctx->pc = 0x16B0ACu;
label_16b0ac:
    // 0x16b0ac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16b0b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16b0b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16b0b8: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B0B8u;
    SET_GPR_U32(ctx, 31, 0x16B0C0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B0C0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B0C0u) { return; }
    ctx->pc = 0x16B0C0u;
label_16b0c0:
    // 0x16b0c0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16b0c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x16b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b0c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16b0cc: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B0CCu;
    SET_GPR_U32(ctx, 31, 0x16B0D4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B0D4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B0D4u) { return; }
    ctx->pc = 0x16B0D4u;
label_16b0d4:
    // 0x16b0d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16b0d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b0dc: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x16b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16b0e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b0e4: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B0E4u;
    SET_GPR_U32(ctx, 31, 0x16B0ECu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B0ECu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B0ECu) { return; }
    ctx->pc = 0x16B0ECu;
label_16b0ec:
    // 0x16b0ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16b0f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b0f4: 0x2445aae0  addiu       $a1, $v0, -0x5520
    ctx->pc = 0x16b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16b0f8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16b0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b0fc: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B0FCu;
    SET_GPR_U32(ctx, 31, 0x16B104u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B104u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B104u) { return; }
    ctx->pc = 0x16B104u;
label_16b104:
    // 0x16b104: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16b108: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16b10c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16B10Cu;
    SET_GPR_U32(ctx, 31, 0x16B114u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x16B114u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B114u) { return; }
    ctx->pc = 0x16B114u;
label_16b114:
    // 0x16b114: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x16b114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x16b118: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16b11c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16b120: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16B120u;
    SET_GPR_U32(ctx, 31, 0x16B128u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x16B128u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B128u) { return; }
    ctx->pc = 0x16B128u;
label_16b128:
    // 0x16b128: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x16b128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b12c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16b12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16b130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b134: 0x0  nop
    ctx->pc = 0x16b134u;
    // NOP
    // 0x16b138: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16b138u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b13c: 0x0  nop
    ctx->pc = 0x16b13cu;
    // NOP
    // 0x16b140: 0x4500007f  bc1f        . + 4 + (0x7F << 2)
    ctx->pc = 0x16B140u;
    {
        const bool branch_taken_0x16b140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b140) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B148u;
    // 0x16b148: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16b148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16b14c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x16b14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16b150: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b154: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x16b154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16b158: 0xc040c12  jal         func_103048
    ctx->pc = 0x16B158u;
    SET_GPR_U32(ctx, 31, 0x16B160u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x16B160u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B160u) { return; }
    ctx->pc = 0x16B160u;
label_16b160:
    // 0x16b160: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16b160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16b164: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x16b164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16b168: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b16c: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x16b16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16b170: 0xc040c12  jal         func_103048
    ctx->pc = 0x16B170u;
    SET_GPR_U32(ctx, 31, 0x16B178u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x16B178u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B178u) { return; }
    ctx->pc = 0x16B178u;
label_16b178:
    // 0x16b178: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16b178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16b17c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16b180: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b184: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x16b184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16b188: 0xc040c12  jal         func_103048
    ctx->pc = 0x16B188u;
    SET_GPR_U32(ctx, 31, 0x16B190u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x16B190u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B190u) { return; }
    ctx->pc = 0x16B190u;
label_16b190:
    // 0x16b190: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16b190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16b194: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16b194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16b198: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b19c: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x16b19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16b1a0: 0xc040c12  jal         func_103048
    ctx->pc = 0x16B1A0u;
    SET_GPR_U32(ctx, 31, 0x16B1A8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x16B1A8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B1A8u) { return; }
    ctx->pc = 0x16B1A8u;
label_16b1a8:
    // 0x16b1a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16b1ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b1b0: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x16b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16b1b4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16b1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b1b8: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B1B8u;
    SET_GPR_U32(ctx, 31, 0x16B1C0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B1C0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B1C0u) { return; }
    ctx->pc = 0x16B1C0u;
label_16b1c0:
    // 0x16b1c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16b1c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b1c8: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x16b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16b1cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x16b1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b1d0: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B1D0u;
    SET_GPR_U32(ctx, 31, 0x16B1D8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B1D8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B1D8u) { return; }
    ctx->pc = 0x16B1D8u;
label_16b1d8:
    // 0x16b1d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16b1dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b1e0: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x16b1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16b1e4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16b1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16b1e8: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B1E8u;
    SET_GPR_U32(ctx, 31, 0x16B1F0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B1F0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B1F0u) { return; }
    ctx->pc = 0x16B1F0u;
label_16b1f0:
    // 0x16b1f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16b1f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b1f8: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x16b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16b1fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16b200: 0xc040c80  jal         func_103200
    ctx->pc = 0x16B200u;
    SET_GPR_U32(ctx, 31, 0x16B208u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16B208u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B208u) { return; }
    ctx->pc = 0x16B208u;
label_16b208:
    // 0x16b208: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16b20c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16b210: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16B210u;
    SET_GPR_U32(ctx, 31, 0x16B218u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x16B218u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B218u) { return; }
    ctx->pc = 0x16B218u;
label_16b218:
    // 0x16b218: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16b218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b21c: 0x0  nop
    ctx->pc = 0x16b21cu;
    // NOP
    // 0x16b220: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b224: 0x0  nop
    ctx->pc = 0x16b224u;
    // NOP
    // 0x16b228: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x16B228u;
    {
        const bool branch_taken_0x16b228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b228) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B230u;
    // 0x16b230: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16b234: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x16b234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16b238: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16B238u;
    SET_GPR_U32(ctx, 31, 0x16B240u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x16B240u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B240u) { return; }
    ctx->pc = 0x16B240u;
label_16b240:
    // 0x16b240: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16b240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b244: 0x0  nop
    ctx->pc = 0x16b244u;
    // NOP
    // 0x16b248: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b24c: 0x0  nop
    ctx->pc = 0x16b24cu;
    // NOP
    // 0x16b250: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x16B250u;
    {
        const bool branch_taken_0x16b250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b250) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B258u;
    // 0x16b258: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16b25c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16b260: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16B260u;
    SET_GPR_U32(ctx, 31, 0x16B268u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x16B268u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B268u) { return; }
    ctx->pc = 0x16B268u;
label_16b268:
    // 0x16b268: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16b268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b26c: 0x0  nop
    ctx->pc = 0x16b26cu;
    // NOP
    // 0x16b270: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b274: 0x0  nop
    ctx->pc = 0x16b274u;
    // NOP
    // 0x16b278: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x16B278u;
    {
        const bool branch_taken_0x16b278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b278) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B280u;
    // 0x16b280: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16b280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16b284: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x16b284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16b288: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16B288u;
    SET_GPR_U32(ctx, 31, 0x16B290u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x16B290u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B290u) { return; }
    ctx->pc = 0x16B290u;
label_16b290:
    // 0x16b290: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16b290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b294: 0x0  nop
    ctx->pc = 0x16b294u;
    // NOP
    // 0x16b298: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b29c: 0x0  nop
    ctx->pc = 0x16b29cu;
    // NOP
    // 0x16b2a0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x16B2A0u;
    {
        const bool branch_taken_0x16b2a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b2a0) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B2A8u;
    // 0x16b2a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16b2ac: 0x2444aaf0  addiu       $a0, $v0, -0x5510
    ctx->pc = 0x16b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16b2b0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16b2b4: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16B2B4u;
    SET_GPR_U32(ctx, 31, 0x16B2BCu);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x16B2BCu;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B2BCu) { return; }
    ctx->pc = 0x16B2BCu;
label_16b2bc:
    // 0x16b2bc: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x16b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b2c0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b2c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b2c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16b2c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16b2c8: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x16b2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x16b2cc: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x16b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b2d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16b2d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16b2d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2d8: 0x0  nop
    ctx->pc = 0x16b2d8u;
    // NOP
    // 0x16b2dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16b2dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2e0: 0x0  nop
    ctx->pc = 0x16b2e0u;
    // NOP
    // 0x16b2e4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x16B2E4u;
    {
        const bool branch_taken_0x16b2e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b2e4) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B2ECu;
    // 0x16b2ec: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x16b2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b2f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b2f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2f4: 0x0  nop
    ctx->pc = 0x16b2f4u;
    // NOP
    // 0x16b2f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2fc: 0x0  nop
    ctx->pc = 0x16b2fcu;
    // NOP
    // 0x16b300: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x16B300u;
    {
        const bool branch_taken_0x16b300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b300) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B308u;
    // 0x16b308: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x16b308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b30c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16b30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16b310: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16b310u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b314: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16b314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b318: 0x0  nop
    ctx->pc = 0x16b318u;
    // NOP
    // 0x16b31c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16B31Cu;
    {
        const bool branch_taken_0x16b31c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b31c) {
            ctx->pc = 0x16B340u;
            return;
        }
    }
    ctx->pc = 0x16B324u;
    // 0x16b324: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x16b324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b328: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16b328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16b32c: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16b32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x16b330: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x16b330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16b334: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16b334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16b338: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x16b338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x16b33c: 0x0  nop
    ctx->pc = 0x16b33cu;
    // NOP
    ctx->pc = 0x16b340u;
}
