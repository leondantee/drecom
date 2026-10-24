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

// Function: entry_0014da00
// Address: 0x14da00 - 0x14dab4
void entry_0014da00_0x14da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da00_0x14da00");
#endif

    switch (ctx->pc) {
        case 0x14da28u: goto label_14da28;
        default: break;
    }

    ctx->pc = 0x14da00u;

    // 0x14da00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14da04: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14da04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14da08: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x14da08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x14da0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14da0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14da10: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x14da10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14da14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14da18: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x14da18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14da1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14da1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14da20: 0xc057904  jal         func_15E410
    ctx->pc = 0x14DA20u;
    SET_GPR_U32(ctx, 31, 0x14DA28u);
    ctx->pc = 0x15E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E410u, 0x14DA20u, 0x14DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA28u;
label_14da28:
    // 0x14da28: 0xae2019e4  sw          $zero, 0x19E4($s1)
    ctx->pc = 0x14da28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6628), GPR_U32(ctx, 0));
    // 0x14da2c: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x14da2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x14da30: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14da34: 0x3c027bbd  lui         $v0, 0x7BBD
    ctx->pc = 0x14da34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31677 << 16));
    // 0x14da38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14da38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14da3c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x14da3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14da40: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x14da40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x14da44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14da48: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14da48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14da4c: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x14da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x14da50: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x14da50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14da54: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14da58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14da5c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14da5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14da60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14da64: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x14da64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14da68: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x14da68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x14da6c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x14da6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14da70: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x14da70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x14da74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14da74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14da78: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x14da78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14da7c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x14da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x14da80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14da80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14da84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14DA84u;
    {
        const bool branch_taken_0x14da84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da84) {
            ctx->pc = 0x14DAB4u;
            return;
        }
    }
    ctx->pc = 0x14DA8Cu;
    // 0x14da8c: 0x920213f8  lbu         $v0, 0x13F8($s0)
    ctx->pc = 0x14da8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x14da90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14da94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DA94u;
    {
        const bool branch_taken_0x14da94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da94) {
            ctx->pc = 0x14DAB4u;
            return;
        }
    }
    ctx->pc = 0x14DA9Cu;
    // 0x14da9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14daa0: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x14daa4: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x14daa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14daa8: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x14daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x14daac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14DAACu;
    {
        const bool branch_taken_0x14daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14daac) {
            ctx->pc = 0x14DAC8u;
            return;
        }
    }
    ctx->pc = 0x14DAB4u;
}
