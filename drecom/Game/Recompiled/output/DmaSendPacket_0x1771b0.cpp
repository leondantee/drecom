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

// Function: DmaSendPacket
// Address: 0x1771b0 - 0x177244
void DmaSendPacket_0x1771b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DmaSendPacket_0x1771b0");
#endif

    switch (ctx->pc) {
        case 0x177214u: goto label_177214;
        case 0x177230u: goto label_177230;
        default: break;
    }

    ctx->pc = 0x1771b0u;

    // 0x1771b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1771b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1771b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1771b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1771b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1771bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1771bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1771c0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1771c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1771c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1771c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1771c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1771c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1771cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1771ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1771d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1771d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1771d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1771d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1771d8: 0x38102  srl         $s0, $v1, 4
    ctx->pc = 0x1771d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1771dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1771dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1771e0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1771e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1771e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1771e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1771e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1771e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1771ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1771ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1771f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1771f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1771f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1771f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1771f8: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1771f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1771fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1771fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x177200: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x177200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x177204: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x177204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x177208: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x177208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17720c: 0xc0409c6  jal         func_102718
    ctx->pc = 0x17720Cu;
    SET_GPR_U32(ctx, 31, 0x177214u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x177214u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x177214u) { return; }
    ctx->pc = 0x177214u;
label_177214:
    // 0x177214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x177218: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x177218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x17721c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177220: 0x2293c  dsll32      $a1, $v0, 4
    ctx->pc = 0x177220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 4));
    // 0x177224: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x177224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x177228: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x177228u;
    SET_GPR_U32(ctx, 31, 0x177230u);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x177230u;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x177230u) { return; }
    ctx->pc = 0x177230u;
label_177230:
    // 0x177230: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x177230u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177238: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x177238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17723c: 0x3e00008  jr          $ra
    ctx->pc = 0x17723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177244u;
}
