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

// Function: Sg_ot0_set_tag
// Address: 0x1abfd0 - 0x1ac060
void Sg_ot0_set_tag_0x1abfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sg_ot0_set_tag_0x1abfd0");
#endif

    ctx->pc = 0x1abfd0u;

    // 0x1abfd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abfd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abfd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abfdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1abfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1abfe0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1abfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1abfe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1abfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abfe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abfec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abfecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abff0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1abff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1abff4: 0x24633f50  addiu       $v1, $v1, 0x3F50
    ctx->pc = 0x1abff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16208));
    // 0x1abff8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1abff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abffc: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1abffcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ac000: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1ac000u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac004: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ac004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac008: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac00c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac010: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ac010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac014: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ac014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ac018: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac01c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ac01cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ac020: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ac020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac024: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1ac024u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac028: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ac028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ac02c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ac02cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ac030: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1ac030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1ac034: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ac034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ac038: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1ac038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac03c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ac03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac040: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1ac040u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac044: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ac044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ac048: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ac048u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ac04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ac050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac054: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ac054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ac058: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC060u;
}
