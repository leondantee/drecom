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

// Function: entry_001b61b8
// Address: 0x1b61b8 - 0x1b622c
void entry_001b61b8_0x1b61b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b61b8_0x1b61b8");
#endif

    switch (ctx->pc) {
        case 0x1b61f4u: goto label_1b61f4;
        default: break;
    }

    ctx->pc = 0x1b61b8u;

    // 0x1b61b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b61b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b61bc: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b61c0: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x1b61c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1b61c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b61c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b61c8: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b61c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b61cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b61d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b61d4: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1b61d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x1b61d8: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1b61d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b61dc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1b61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1b61e0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b61e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b61e4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b61e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1b61e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b61e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b61ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B61ECu;
    SET_GPR_U32(ctx, 31, 0x1B61F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B61ECu, 0x1B61F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61F4u;
label_1b61f4:
    // 0x1b61f4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b61f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b61f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b61fc: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1b61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1b6200: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6200u;
    {
        const bool branch_taken_0x1b6200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6200) {
            ctx->pc = 0x1B622Cu;
            return;
        }
    }
    ctx->pc = 0x1B6208u;
    // 0x1b6208: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b620c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6210: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b6210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1b6214: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b6214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1b6218: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b6218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b621c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b6220: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1b6220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1b6224: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B6224u;
    SET_GPR_U32(ctx, 31, 0x1B622Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B622Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B622Cu) { return; }
    ctx->pc = 0x1B622Cu;
}
