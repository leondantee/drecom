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

// Function: Gp_bkfr_init
// Address: 0x1d6110 - 0x1d6260
void Gp_bkfr_init_0x1d6110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_bkfr_init_0x1d6110");
#endif

    ctx->pc = 0x1d6110u;

    // 0x1d6110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d6118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d611c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6120: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1d6120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1d6124: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1d6124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1d6128: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d6128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d612c: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1d612cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d6130: 0x24110700  addiu       $s1, $zero, 0x700
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1d6134: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d6134u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d6138: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1d6138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1d613c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d613cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6140: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d6140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d6144: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d6144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d6148: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d614c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d614cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d6150: 0x24040eee  addiu       $a0, $zero, 0xEEE
    ctx->pc = 0x1d6150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x1d6154: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6158: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d6158u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d615c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d6160: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6164: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d6164u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d6168: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d616c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6170: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d6170u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d6174: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1d6174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1d6178: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d6178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d617c: 0x41ac2  srl         $v1, $a0, 11
    ctx->pc = 0x1d617cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x1d6180: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6184: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d6184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d6188: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d6188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d618c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d618cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d6190: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6194: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d6194u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d6198: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d619c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d61a0: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d61a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d61a4: 0x26030360  addiu       $v1, $s0, 0x360
    ctx->pc = 0x1d61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1d61a8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d61a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d61ac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d61acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d61b0: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d61b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d61b4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d61b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d61bc: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d61bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d61c0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1d61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1d61c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d61c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d61c8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d61c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d61cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1d61ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d61d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d61d4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1d61d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1d61d8: 0x24040eee  addiu       $a0, $zero, 0xEEE
    ctx->pc = 0x1d61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x1d61dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d61e0: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1d61e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1d61e4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d61e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d61ec: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1d61ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1d61f0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d61f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d61f8: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1d61f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1d61fc: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x1d61fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1d6200: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d6200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d6204: 0x41ac2  srl         $v1, $a0, 11
    ctx->pc = 0x1d6204u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x1d6208: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d6208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d620c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d620cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d6210: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d6210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d6214: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d6214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d6218: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d621c: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d621cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d6220: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d6220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d6224: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6228: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1d6228u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1d622c: 0x260301f0  addiu       $v1, $s0, 0x1F0
    ctx->pc = 0x1d622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1d6230: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d6230u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6238: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d6238u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x1d623c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d6240: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6244: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1d6244u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1d6248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d6248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d624c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d624cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6254: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d6254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d6258: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6260u;
}
