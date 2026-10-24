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

// Function: Md_grp_env_def_set
// Address: 0x2570c0 - 0x2571e8
void Md_grp_env_def_set_0x2570c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_grp_env_def_set_0x2570c0");
#endif

    ctx->pc = 0x2570c0u;

    // 0x2570c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2570c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2570c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2570c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2570c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2570c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2570cc: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x2570ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x2570d0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2570d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2570d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2570d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2570d8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x2570d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2570dc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2570dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2570e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2570e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2570e4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x2570e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2570e8: 0x24040eee  addiu       $a0, $zero, 0xEEE
    ctx->pc = 0x2570e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x2570ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2570ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2570f0: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x2570f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x2570f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2570f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2570f8: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x2570f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2570fc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2570FCu;
    {
        const bool branch_taken_0x2570fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2570fc) {
            ctx->pc = 0x257114u;
            goto label_257114;
        }
    }
    ctx->pc = 0x257104u;
    // 0x257104: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x257104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257108: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x257108u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x25710c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25710Cu;
    {
        const bool branch_taken_0x25710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25710c) {
            ctx->pc = 0x25716Cu;
            goto label_25716c;
        }
    }
    ctx->pc = 0x257114u;
label_257114:
    // 0x257114: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257118: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x257118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x25711c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257120: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x257120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x257124: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x257124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x257128: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25712c: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x25712cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x257130: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257134: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x257134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x257138: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x257138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x25713c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257140: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x257140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x257144: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257148: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x257148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x25714c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x25714cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x257150: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257154: 0x9463001e  lhu         $v1, 0x1E($v1)
    ctx->pc = 0x257154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x257158: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25715c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x25715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x257160: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x257160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x257164: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x257164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257168: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x257168u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
label_25716c:
    // 0x25716c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x25716cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x257170: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x257170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257174: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x257174u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x257178: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x257178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25717c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x25717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x257180: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x257180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x257184: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x257184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x257188: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x257188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x25718c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x25718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x257190: 0x34640140  ori         $a0, $v1, 0x140
    ctx->pc = 0x257190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)320);
    // 0x257194: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x257194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x257198: 0x8423cc92  lh          $v1, -0x336E($at)
    ctx->pc = 0x257198u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47CC92u));
    // 0x25719c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x25719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2571a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2571a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2571a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2571a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2571a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2571a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2571ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2571acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2571b0: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x2571b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x2571b4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2571b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2571b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2571b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2571bc: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x2571bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x2571c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2571c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2571c4: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x2571c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2571c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2571c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2571cc: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x2571ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x2571d0: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x2571d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2571d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2571d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2571d8: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x2571d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x2571dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2571dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2571e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2571E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2571E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2571E8u;
}
