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

// Function: entry_0012fe80
// Address: 0x12fe80 - 0x12feb0
void entry_0012fe80_0x12fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fe80_0x12fe80");
#endif

    switch (ctx->pc) {
        case 0x12fea8u: goto label_12fea8;
        default: break;
    }

    ctx->pc = 0x12fe80u;

    // 0x12fe80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12fe84: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12fe88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12fe8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12fe90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12fe90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12fe94: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x12fe98: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12fe9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12fe9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12fea0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12FEA0u;
    SET_GPR_U32(ctx, 31, 0x12FEA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12FEA0u, 0x12FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEA8u;
label_12fea8:
    // 0x12fea8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12FEA8u;
    {
        const bool branch_taken_0x12fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fea8) {
            ctx->pc = 0x12FEDCu;
            return;
        }
    }
    ctx->pc = 0x12FEB0u;
}
