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

// Function: Gp_bkfr_mul
// Address: 0x1d6260 - 0x1d631c
void Gp_bkfr_mul_0x1d6260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_bkfr_mul_0x1d6260");
#endif

    ctx->pc = 0x1d6260u;

    // 0x1d6260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d6268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d626c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6270: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1d6270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1d6274: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1d6274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1d6278: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d6278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d627c: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d627cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d6280: 0x24110700  addiu       $s1, $zero, 0x700
    ctx->pc = 0x1d6280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1d6284: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d6284u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d6288: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x1d6288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d628c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D628Cu;
    {
        const bool branch_taken_0x1d628c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d628c) {
            ctx->pc = 0x1D62D0u;
            goto label_1d62d0;
        }
    }
    ctx->pc = 0x1D6294u;
    // 0x1d6294: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1d6294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1d6298: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d6298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d629c: 0x41ac2  srl         $v1, $a0, 11
    ctx->pc = 0x1d629cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x1d62a0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d62a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d62a4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d62a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d62a8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d62ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d62acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d62b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d62b4: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d62b8: 0x260301f0  addiu       $v1, $s0, 0x1F0
    ctx->pc = 0x1d62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1d62bc: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d62bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d62c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d62c4: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d62c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d62c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D62C8u;
    {
        const bool branch_taken_0x1d62c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d62c8) {
            ctx->pc = 0x1D6304u;
            goto label_1d6304;
        }
    }
    ctx->pc = 0x1D62D0u;
label_1d62d0:
    // 0x1d62d0: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x1d62d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1d62d4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d62d8: 0x41ac2  srl         $v1, $a0, 11
    ctx->pc = 0x1d62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x1d62dc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d62dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d62e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d62e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d62e4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d62e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d62e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d62ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d62f0: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d62f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d62f4: 0x26030360  addiu       $v1, $s0, 0x360
    ctx->pc = 0x1d62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1d62f8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d62f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d62fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6300: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d6300u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
label_1d6304:
    // 0x1d6304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d6304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d630c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d630cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6310: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d6314: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D631Cu;
}
