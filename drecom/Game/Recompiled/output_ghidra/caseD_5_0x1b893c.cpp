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
// Address: 0x1b893c - 0x1b89a8
void caseD_5_0x1b893c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1b893c");
#endif

    switch (ctx->pc) {
        case 0x1b8974u: goto label_1b8974;
        default: break;
    }

    ctx->pc = 0x1b893cu;

    // 0x1b893c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b893cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b8940: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b8944: 0x34850100  ori         $a1, $a0, 0x100
    ctx->pc = 0x1b8944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1b8948: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b894c: 0xac251a64  sw          $a1, 0x1A64($at)
    ctx->pc = 0x1b894cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b8950: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8954: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b8958: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1b8958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1b895c: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x1b895cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b8960: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1b8960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1b8964: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8968: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b896c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B896Cu;
    SET_GPR_U32(ctx, 31, 0x1B8974u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B896Cu, 0x1B8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8974u;
label_1b8974:
    // 0x1b8974: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8978: 0x8c641b64  lw          $a0, 0x1B64($v1)
    ctx->pc = 0x1b8978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x1b897c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B897Cu;
    {
        const bool branch_taken_0x1b897c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b897c) {
            ctx->pc = 0x1B89A8u;
            return;
        }
    }
    ctx->pc = 0x1B8984u;
    // 0x1b8984: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8988: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b898c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b898cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1b8990: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x1b8990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1b8994: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1b8994u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8998: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b899c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1b899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1b89a0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B89A0u;
    SET_GPR_U32(ctx, 31, 0x1B89A8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B89A8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B89A8u) { return; }
    ctx->pc = 0x1B89A8u;
}
