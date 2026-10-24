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

// Function: entry_001d9048
// Address: 0x1d9048 - 0x1d90b4
void entry_001d9048_0x1d9048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9048_0x1d9048");
#endif

    switch (ctx->pc) {
        case 0x1d9098u: goto label_1d9098;
        default: break;
    }

    ctx->pc = 0x1d9048u;

    // 0x1d9048: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d904c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9050: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d9050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d9054: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d9054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9058: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d905c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d905cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d9060: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d9060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d9064: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d9064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9068: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d9068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d906c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9070: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d9070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d9074: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9078: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d9078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d907c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d907cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9080: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d9080u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d9084: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d9084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d9088: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d9088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d908c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d908cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9090: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D9090u;
    SET_GPR_U32(ctx, 31, 0x1D9098u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D9098u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9098u) { return; }
    ctx->pc = 0x1D9098u;
label_1d9098:
    // 0x1d9098: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d909c: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d90a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d90a4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d90a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d90a8: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d90a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d90ac: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1D90ACu;
    {
        const bool branch_taken_0x1d90ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d90ac) {
            ctx->pc = 0x1D91E4u;
            return;
        }
    }
    ctx->pc = 0x1D90B4u;
}
