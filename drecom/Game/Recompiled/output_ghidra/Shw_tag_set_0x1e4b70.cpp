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

// Function: Shw_tag_set
// Address: 0x1e4b70 - 0x1e4c0c
void Shw_tag_set_0x1e4b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_tag_set_0x1e4b70");
#endif

    ctx->pc = 0x1e4b70u;

    // 0x1e4b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e4b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e4b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e4b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4b80: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1e4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1e4b84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4b88: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1e4b88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4b8c: 0x30720001  andi        $s2, $v1, 0x1
    ctx->pc = 0x1e4b8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e4b90: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x1e4b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1e4b94: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e4b98: 0x24630a10  addiu       $v1, $v1, 0xA10
    ctx->pc = 0x1e4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x1e4b9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4ba0: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x1e4ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e4ba4: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1e4ba4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e4ba8: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1e4ba8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4bac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1e4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e4bb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e4bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4bb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e4bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e4bb8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e4bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e4bbc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e4bc0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e4bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4bc4: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e4bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e4bc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1e4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e4bcc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1e4bccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4bd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e4bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e4bd4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1e4bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1e4bd8: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1e4bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1e4bdc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1e4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1e4be0: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1e4be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e4be4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1e4be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e4be8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1e4be8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4bec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e4becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e4bf0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1e4bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1e4bf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4c00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e4c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e4c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4C0Cu;
}
