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

// Function: Gp_Sttexture_uv_add
// Address: 0x1d2690 - 0x1d277c
void Gp_Sttexture_uv_add_0x1d2690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Sttexture_uv_add_0x1d2690");
#endif

    ctx->pc = 0x1d2690u;

    // 0x1d2690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2694: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2698: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1d2698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1d269c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d26a0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1d26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1d26a4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d26a8: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d26a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d26ac: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1d26acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d26b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d26b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d26b4: 0x8ca300a0  lw          $v1, 0xA0($a1)
    ctx->pc = 0x1d26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x1d26b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d26bc: 0xaca300a0  sw          $v1, 0xA0($a1)
    ctx->pc = 0x1d26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 3));
    // 0x1d26c0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1d26c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d26c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d26c8: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x1d26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x1d26cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d26d0: 0xaca300a4  sw          $v1, 0xA4($a1)
    ctx->pc = 0x1d26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 3));
    // 0x1d26d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1d26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d26d8: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x1d26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1d26dc: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1d26dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1d26e0: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x1d26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
    // 0x1d26e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1d26e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d26e8: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x1d26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1d26ec: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1d26ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1d26f0: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x1d26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
    // 0x1d26f4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1d26f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d26f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d26fc: 0x8ca300d0  lw          $v1, 0xD0($a1)
    ctx->pc = 0x1d26fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1d2700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2704: 0xaca300d0  sw          $v1, 0xD0($a1)
    ctx->pc = 0x1d2704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 208), GPR_U32(ctx, 3));
    // 0x1d2708: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d270c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d270cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d2710: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x1d2710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x1d2714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2718: 0xaca300d4  sw          $v1, 0xD4($a1)
    ctx->pc = 0x1d2718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 3));
    // 0x1d271c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2720: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x1d2720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x1d2724: 0x2c631fff  sltiu       $v1, $v1, 0x1FFF
    ctx->pc = 0x1d2724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8191) ? 1 : 0);
    // 0x1d2728: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2728u;
    {
        const bool branch_taken_0x1d2728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2728) {
            ctx->pc = 0x1D2744u;
            goto label_1d2744;
        }
    }
    ctx->pc = 0x1D2730u;
    // 0x1d2730: 0x240407f0  addiu       $a0, $zero, 0x7F0
    ctx->pc = 0x1d2730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1d2734: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2738: 0xac6400d0  sw          $a0, 0xD0($v1)
    ctx->pc = 0x1d2738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 4));
    // 0x1d273c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d273cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2740: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x1d2740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
label_1d2744:
    // 0x1d2744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2748: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1d2748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1d274c: 0x2c631fff  sltiu       $v1, $v1, 0x1FFF
    ctx->pc = 0x1d274cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8191) ? 1 : 0);
    // 0x1d2750: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2750u;
    {
        const bool branch_taken_0x1d2750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2750) {
            ctx->pc = 0x1D276Cu;
            goto label_1d276c;
        }
    }
    ctx->pc = 0x1D2758u;
    // 0x1d2758: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d275c: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x1d275cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
    // 0x1d2760: 0x240407f0  addiu       $a0, $zero, 0x7F0
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1d2764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2768: 0xac6400d4  sw          $a0, 0xD4($v1)
    ctx->pc = 0x1d2768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 4));
label_1d276c:
    // 0x1d276c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d276cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2770: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d2770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2774: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D277Cu;
}
