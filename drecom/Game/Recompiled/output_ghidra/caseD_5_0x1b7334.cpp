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

// Function: caseD_5
// Address: 0x1b7334 - 0x1b73a8
void caseD_5_0x1b7334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1b7334");
#endif

    switch (ctx->pc) {
        case 0x1b736cu: goto label_1b736c;
        case 0x1b73a4u: goto label_1b73a4;
        default: break;
    }

    ctx->pc = 0x1b7334u;

    // 0x1b7334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b7334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b7338: 0x8c281a64  lw          $t0, 0x1A64($at)
    ctx->pc = 0x1b7338u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b733c: 0x35030100  ori         $v1, $t0, 0x100
    ctx->pc = 0x1b733cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x1b7340: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b7340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b7344: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b7344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b7348: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b734c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b734cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b7350: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b7350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1b7354: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b7354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b7358: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b7358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b735c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b735cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b7364: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B7364u;
    SET_GPR_U32(ctx, 31, 0x1B736Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B7364u, 0x1B736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B736Cu;
label_1b736c:
    // 0x1b736c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b736cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7370: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7374: 0x8ca31b64  lw          $v1, 0x1B64($a1)
    ctx->pc = 0x1b7374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7012)));
    // 0x1b7378: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7378u;
    {
        const bool branch_taken_0x1b7378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7378) {
            ctx->pc = 0x1B73A8u;
            return;
        }
    }
    ctx->pc = 0x1B7380u;
    // 0x1b7380: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7384: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7388: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b7388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1b738c: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x1b738cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1b7390: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1b7390u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7394: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b7394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b7398: 0x24c50180  addiu       $a1, $a2, 0x180
    ctx->pc = 0x1b7398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x1b739c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B739Cu;
    SET_GPR_U32(ctx, 31, 0x1B73A4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B73A4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B73A4u) { return; }
    ctx->pc = 0x1B73A4u;
label_1b73a4:
    // 0x1b73a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b73a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b73a8u;
}
