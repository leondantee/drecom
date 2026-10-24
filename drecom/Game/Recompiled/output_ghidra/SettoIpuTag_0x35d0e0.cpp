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

// Function: SettoIpuTag
// Address: 0x35d0e0 - 0x35d194
void SettoIpuTag_0x35d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SettoIpuTag_0x35d0e0");
#endif

    switch (ctx->pc) {
        case 0x35d120u: goto label_35d120;
        default: break;
    }

    ctx->pc = 0x35d0e0u;

    // 0x35d0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d0e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35d0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35d0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d0ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d0f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x35d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x35d0f4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x35d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x35d0f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x35d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x35d0fc: 0x2472c100  addiu       $s2, $v1, -0x3F00
    ctx->pc = 0x35d0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x35d100: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x35d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d104: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x35d104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x35d108: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x35d108u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35d10c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35d110: 0x3813c  dsll32      $s0, $v1, 4
    ctx->pc = 0x35d110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 4));
    // 0x35d114: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x35d114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
    // 0x35d118: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35D118u;
    {
        const bool branch_taken_0x35d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d118) {
            ctx->pc = 0x35D148u;
            goto label_35d148;
        }
    }
    ctx->pc = 0x35D120u;
label_35d120:
    // 0x35d120: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x35d120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x35d124: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35d124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35d128: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x35d128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35d12c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x35d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x35d130: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35d130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35d134: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x35d134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x35d138: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x35d138u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x35d13c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x35d13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x35d140: 0x26037fff  addiu       $v1, $s0, 0x7FFF
    ctx->pc = 0x35d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32767));
    // 0x35d144: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x35d144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_35d148:
    // 0x35d148: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35d14c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x35d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x35d150: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35d154: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x35d154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35d158: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x35D158u;
    {
        const bool branch_taken_0x35d158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d158) {
            ctx->pc = 0x35D120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d120;
        }
    }
    ctx->pc = 0x35D160u;
    // 0x35d160: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x35d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d164: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35d164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35d168: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35d168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35d16c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x35d16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35d170: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x35d170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x35d174: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35d174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35d178: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x35d178u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x35d17c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35d17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d188: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35d188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35d18c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D194u;
}
