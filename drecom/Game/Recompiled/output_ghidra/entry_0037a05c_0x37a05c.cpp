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

// Function: entry_0037a05c
// Address: 0x37a05c - 0x37a0c8
void entry_0037a05c_0x37a05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a05c_0x37a05c");
#endif

    switch (ctx->pc) {
        case 0x37a0c0u: goto label_37a0c0;
        default: break;
    }

    ctx->pc = 0x37a05cu;

    // 0x37a05c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37a05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37a060: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x37a060u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x37a064: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x37a064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x37a068: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37a068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37a06c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x37A06Cu;
    {
        const bool branch_taken_0x37a06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a06c) {
            ctx->pc = 0x37A0E0u;
            return;
        }
    }
    ctx->pc = 0x37A074u;
    // 0x37a074: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a078: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37a078u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a07c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37a080: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a084: 0xac220580  sw          $v0, 0x580($at)
    ctx->pc = 0x37a084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9A0580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0580u, _value); } while (0);
    // 0x37a088: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a08c: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a090: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37A090u;
    {
        const bool branch_taken_0x37a090 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x37a090) {
            ctx->pc = 0x37A0C8u;
            return;
        }
    }
    ctx->pc = 0x37A098u;
    // 0x37a098: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a09c: 0xac200580  sw          $zero, 0x580($at)
    ctx->pc = 0x37a09cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0580u, _value); } while (0);
    // 0x37a0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a0a4: 0xae025dc0  sw          $v0, 0x5DC0($s0)
    ctx->pc = 0x37a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 2));
    // 0x37a0a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37a0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a0ac: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37a0b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37a0b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a0b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37a0b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a0b8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37A0B8u;
    SET_GPR_U32(ctx, 31, 0x37A0C0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37A0B8u, 0x37A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A0C0u;
label_37a0c0:
    // 0x37a0c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37A0C0u;
    {
        const bool branch_taken_0x37a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a0c0) {
            ctx->pc = 0x37A0E0u;
            return;
        }
    }
    ctx->pc = 0x37A0C8u;
}
