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

// Function: Sce_cam_set
// Address: 0x284480 - 0x284520
void Sce_cam_set_0x284480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_cam_set_0x284480");
#endif

    ctx->pc = 0x284480u;

    // 0x284480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28448c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x28448cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x284490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284494: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x284494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x284498: 0x8c710050  lw          $s1, 0x50($v1)
    ctx->pc = 0x284498u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x28449c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28449Cu;
    {
        const bool branch_taken_0x28449c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28449c) {
            ctx->pc = 0x28450Cu;
            goto label_28450c;
        }
    }
    ctx->pc = 0x2844A4u;
    // 0x2844a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2844a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2844a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2844a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2844ac: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x2844acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2844b0: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2844B0u;
    {
        const bool branch_taken_0x2844b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2844b0) {
            ctx->pc = 0x28450Cu;
            goto label_28450c;
        }
    }
    ctx->pc = 0x2844B8u;
    // 0x2844b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2844b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2844bc: 0xac2095ac  sw          $zero, -0x6A54($at)
    ctx->pc = 0x2844bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195ACu, _value); } while (0);
    // 0x2844c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2844c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2844c4: 0x247095a0  addiu       $s0, $v1, -0x6A60
    ctx->pc = 0x2844c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940064));
    // 0x2844c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2844c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2844cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2844ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2844d0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2844d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2844d4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2844d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2844d8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2844d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2844dc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2844dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2844e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2844e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2844e4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2844e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2844e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2844e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2844ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2844ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2844f0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2844f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2844f4: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x2844f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2844f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2844f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2844fc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2844fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284500: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x284500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x284504: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x284504u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x284508: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x284508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_28450c:
    // 0x28450c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28450cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284514: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284518: 0x3e00008  jr          $ra
    ctx->pc = 0x284518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284520u;
}
