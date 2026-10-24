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

// Function: entry_0037bdcc
// Address: 0x37bdcc - 0x37be18
void entry_0037bdcc_0x37bdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037bdcc_0x37bdcc");
#endif

    switch (ctx->pc) {
        case 0x37bdfcu: goto label_37bdfc;
        default: break;
    }

    ctx->pc = 0x37bdccu;

    // 0x37bdcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37bdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37bdd0: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x37bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x37bdd4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x37bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x37bdd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37bdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37bddc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x37BDDCu;
    {
        const bool branch_taken_0x37bddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bddc) {
            ctx->pc = 0x37BE18u;
            return;
        }
    }
    ctx->pc = 0x37BDE4u;
    // 0x37bde4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37bde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37bde8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37bdec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37bdecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bdf0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37bdf0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bdf4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37BDF4u;
    SET_GPR_U32(ctx, 31, 0x37BDFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37BDF4u, 0x37BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDFCu;
label_37bdfc:
    // 0x37bdfc: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be00: 0x8c2305a0  lw          $v1, 0x5A0($at)
    ctx->pc = 0x37be00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A05A0u));
    // 0x37be04: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37be04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37be08: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37be08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37be0c: 0xac2305a0  sw          $v1, 0x5A0($at)
    ctx->pc = 0x37be0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A05A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A05A0u, _value); } while (0);
    // 0x37be10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37be10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37be14: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37be14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
    ctx->pc = 0x37be18u;
}
