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

// Function: entry_001b77e8
// Address: 0x1b77e8 - 0x1b7864
void entry_001b77e8_0x1b77e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b77e8_0x1b77e8");
#endif

    switch (ctx->pc) {
        case 0x1b7824u: goto label_1b7824;
        case 0x1b7860u: goto label_1b7860;
        default: break;
    }

    ctx->pc = 0x1b77e8u;

    // 0x1b77e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b77e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b77ec: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b77f0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1b77f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1b77f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b77f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b77f8: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b77f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b77fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7800: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b7804: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1b7804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x1b7808: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1b7808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b780c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1b780cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1b7810: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b7810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7814: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b7814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1b7818: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7818u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b781c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B781Cu;
    SET_GPR_U32(ctx, 31, 0x1B7824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B781Cu, 0x1B7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7824u;
label_1b7824:
    // 0x1b7824: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b7824u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7828: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b782c: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1b782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1b7830: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B7830u;
    {
        const bool branch_taken_0x1b7830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7830) {
            ctx->pc = 0x1B7864u;
            return;
        }
    }
    ctx->pc = 0x1B7838u;
    // 0x1b7838: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b783c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7840: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1b7840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x1b7844: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x1b7844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1b7848: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b7848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b784c: 0x24a20180  addiu       $v0, $a1, 0x180
    ctx->pc = 0x1b784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b7850: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7854: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b7854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b7858: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B7858u;
    SET_GPR_U32(ctx, 31, 0x1B7860u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B7860u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7860u) { return; }
    ctx->pc = 0x1B7860u;
label_1b7860:
    // 0x1b7860: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b7860u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b7864u;
}
