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

// Function: entry_00334fcc
// Address: 0x334fcc - 0x335020
void entry_00334fcc_0x334fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334fcc_0x334fcc");
#endif

    switch (ctx->pc) {
        case 0x334fe8u: goto label_334fe8;
        default: break;
    }

    ctx->pc = 0x334fccu;

    // 0x334fcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x334fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334fd0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x334fd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x334fd4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334fd8: 0x8c253338  lw          $a1, 0x3338($at)
    ctx->pc = 0x334fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x893338u));
    // 0x334fdc: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x334fdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x334fe0: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x334FE0u;
    SET_GPR_U32(ctx, 31, 0x334FE8u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x334FE0u, 0x334FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FE8u;
label_334fe8:
    // 0x334fe8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x334FE8u;
    {
        const bool branch_taken_0x334fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334fe8) {
            ctx->pc = 0x335020u;
            return;
        }
    }
    ctx->pc = 0x334FF0u;
    // 0x334ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334ff4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334ff8: 0xac2232d0  sw          $v0, 0x32D0($at)
    ctx->pc = 0x334ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8932D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D0u, _value); } while (0);
    // 0x334ffc: 0x92026625  lbu         $v0, 0x6625($s0)
    ctx->pc = 0x334ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26149)));
    // 0x335000: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x335000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x335004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335008: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335008u;
    {
        const bool branch_taken_0x335008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x335008) {
            ctx->pc = 0x335020u;
            return;
        }
    }
    ctx->pc = 0x335010u;
    // 0x335010: 0xa2006625  sb          $zero, 0x6625($s0)
    ctx->pc = 0x335010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26149), (uint8_t)GPR_U32(ctx, 0));
    // 0x335014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335018: 0xa20265ab  sb          $v0, 0x65AB($s0)
    ctx->pc = 0x335018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26027), (uint8_t)GPR_U32(ctx, 2));
    // 0x33501c: 0xa20065ac  sb          $zero, 0x65AC($s0)
    ctx->pc = 0x33501cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26028), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x335020u;
}
